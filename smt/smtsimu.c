/*===========================================================================*
 *                                                                           *
 *  smtsimu.c -                                                              *
 *                                                                           *
 *  Copyright (c) 1991-2003 iMatix Corporation                               *
 *                                                                           *
 *  ------------------ GPL Licensed Source Code ------------------           *
 *  iMatix makes this software available under the GNU General               *
 *  Public License (GPL) license for open source projects.  For              *
 *  details of the GPL license please see www.gnu.org or read the            *
 *  file license.gpl provided in this package.                               *
 *                                                                           *
 *  This program is free software; you can redistribute it and/or            *
 *  modify it under the terms of the GNU General Public License as           *
 *  published by the Free Software Foundation; either version 2 of           *
 *  the License, or (at your option) any later version.                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public                *
 *  License along with this program in the file 'license.gpl'; if            *
 *  not, write to the Free Software Foundation, Inc., 59 Temple              *
 *  Place - Suite 330, Boston, MA 02111-1307, USA.                           *
 *                                                                           *
 *  You can also license this software under iMatix's General Terms          *
 *  of Business (GTB) for commercial projects.  If you have not              *
 *  explicitly licensed this software under the iMatix GTB you may           *
 *  only use it under the terms of the GNU General Public License.           *
 *                                                                           *
 *  For more information, send an email to info@imatix.com.                  *
 *  --------------------------------------------------------------           *
 *===========================================================================*/
/*
    Synopsis:   Provides wrappers around the standard TCP/IP, UDP/IP socket
                functions in smtsock and sflsock.

*/
#include "smtdefn.h"                    /*  SMT definitions                  */


/*- Definitions -------------------------------------------------------------*/

#define AGENT_NAME      "smtsimu"       /*  Our public name                  */
#define SINGLE_THREADED TRUE            /*  Single-threaded agent            */


typedef struct {                        /*  Request descriptor               */
    dbyte   id;                         /*  Generated request ID             */
    sock_t  handle;                     /*  Which socket to write to?        */
    size_t  length;                     /*  Amount of data to write          */
    struct sockaddr_in                  /*  Socket end-point address         */
            sin;
} SOCKREQ;


/*- Global variables used in this source file only --------------------------*/

static Bool
    trace_flag = FALSE;                 /*  Trace socket activity?           */
static QID
    operq,                              /*  Operator console event queue     */
    timeq,                              /*  Timer event queue                */
    simuq;                              /*  Own agent event queue            */
static dbyte
    last_id;

#include "smtsimu.d"                    /*  Include dialog data              */


/********************   INITIALISE AGENT - ENTRY POINT   *********************/

/*  ---------------------------------------------------------------------[<]-
    Function: smtsimu_init

    Synopsis: Initialises the SMT network delay simulation agent.  Returns
    0 if okay, -1 if there was an error.  You do not need to call this
    function explicitly.  To use SMTSIMU, include "smtsimu.h" in your
    program after "smtlib.h".  This redefines the standard socket functions
    to go through SMTSIMU.  Sends all errors to the SMTOPER agent.
    ---------------------------------------------------------------------[>]-*/

int
smtsimu_init (void)
{
    AGENT   *agent;                     /*  Handle for our agent             */
    THREAD  *thread;                    /*  Handle to console thread         */
#   include "smtsimu.i"                 /*  Include dialog interpreter       */

    /*                      Method name     Event value      Priority        */
    /*  Shutdown event comes from Kernel                                     */
    method_declare (agent, "SHUTDOWN",      shutdown_event,  SMT_PRIORITY_MAX);

    /*  Public methods supported by this agent                               */
    method_declare (agent, "TIME_ALARM",    alarm_event,     0);
    method_declare (agent, "TIME_ERROR",    error_event,     0);

    /*  Ensure that operator console is running, else start it up            */
    smtoper_init ();
    if ((thread = thread_lookup (SMT_OPERATOR, "")) != NULL)
        operq = thread-> queue-> qid;
    else
        return (-1);

    /*  Ensure that timer agent is running, else start it up               */
    smttime_init ();
    if ((thread = thread_lookup (SMT_TIMER, "")) != NULL)
        timeq = thread-> queue-> qid;
    else
        return (-1);

    /*  Create initial thread                                                */
    if ((thread = thread_create (AGENT_NAME, "")) != NULL)
        simuq = thread-> queue-> qid;
    else
        return (-1);

    /*  Initialise static variables */
    last_id = 0;

    /*  Signal okay to caller that we initialised okay                       */
    return (0);
}


/*  ---------------------------------------------------------------------[<]-
    Function: smtsimu_sock_init

    Synopsis: Replaces the normal sock_init() function call.  Initialises
    the socket interface as usual, and then initialises the network delay
    simulation agent.  Returns SOCKET_ERROR if there was an error, else
    returns 0.
    ---------------------------------------------------------------------[>]-*/

int
smtsimu_sock_init (void)
{
    /*  Really start sockets                                                 */
    if (sock_init ())
        return ((int) SOCKET_ERROR);

    /*  Now initialise the SMTSIMU agent, and return 0 or SOCKET_ERROR       */
    if (smtsimu_init ())
        return ((int) SOCKET_ERROR);
    else
        return (0);
}

/*  ---------------------------------------------------------------------[<]-
    Function: smtsimu_smtsock_init

    Synopsis: Replaces the normal smtsock_init() function call.  Calls the
    SMTSOCK agent to initialise, as usual, then initialises the network
    delay simulation agent.  Returns -1 if there was an error, else 0.
    ---------------------------------------------------------------------[>]-*/

int
smtsimu_smtsock_init (void)
{
    /*  Initialise SMTSOCK agent                                             */
    if (smtsock_init ())
        return (-1);

    /*  Now initialise the SMTSIMU agent                                     */
    return (smtsimu_init ());
}


/*  ---------------------------------------------------------------------[<]-
    Function: smtsimu_smtsock_trace

    Synopsis: Replaces the normal smtsock_trace() function call. Calls the
    SMTSOCK agent to enable/disable tracing, then uses the same trace flag
    for the delay simulation.  Tracing is sent to the operator console.
    ---------------------------------------------------------------------[>]-*/

void
smtsimu_smtsock_trace (Bool trace_value)
{
    trace_flag = trace_value;
    smtsock_trace (trace_value);
}


/*  ---------------------------------------------------------------------[<]-
    Function: smtsimu_write_UDP

    Synopsis: Replaces the normal write_UDP() function call.  The data is
    sent, after a small but significant delay.  Returns the length of the
    data packet.  There is no guarantee that the packet will be sent and
    received successfully.  Returns SOCKET_ERROR if there was an error, such
    as insufficient memory.
    ---------------------------------------------------------------------[>]-*/

int
smtsimu_write_UDP (
    sock_t handle,                      /*  Socket handle                    */
    void  *buffer,                      /*  Buffer containing data           */
    size_t length,                      /*  Amount of data to write          */
    struct sockaddr_in *sin             /*  Address to send to, or null      */
)
{
    SOCKREQ *request;                   /*  New socket transfer request      */
    dbyte    req_size;                  /*  Size of transfer request         */
    byte    *msg_body;                  /*  Event to send via delay timer    */
    int      msg_size;                  /*  Size of event body               */
    qbyte    csecs = 100;               /*  Delay time in csecs              */

    /*  Allocate a new transfer request                                      */
    req_size = sizeof (SOCKREQ) + length;
    if ((request = mem_alloc (req_size)) == NULL)
      {
        sendfmt (&operq, "ERROR", "smtsimu: out of memory");
        return ((int) SOCKET_ERROR);
      }
    request-> id     = ++last_id;
    request-> handle = handle;
    request-> length = length;
    request-> sin    = *sin;
    memcpy ((byte *) request + sizeof (SOCKREQ), buffer, length);

    /*  Calculate size required for message body                             */
    msg_size = exdr_write (
        NULL,                           /*  No body - just get size          */
        SMT_TIME_ALARM,                 /*  Format event for smttime         */
        0, csecs,                       /*  Delay time                       */
        req_size, request);             /*  Request info                     */

    /*  Now allocate and format the buffer                                   */
    msg_body = mem_alloc  (msg_size);
    msg_size = exdr_write (
        msg_body,                       /*  Event body                       */
        SMT_TIME_ALARM,                 /*  Format event for smttime         */
        0, csecs,                       /*  Delay time                       */
        req_size, request);             /*  Request info                     */

    event_send (
        &timeq,                         /*  Send to specified queue          */
        &simuq,                         /*  No queue for reply               */
        "ALARM",                        /*  Name of event to send            */
        msg_body,                       /*  Event body contents              */
        msg_size,                       /*  Event body size                  */
        NULL, NULL, NULL,               /*  No response events               */
        0);                             /*  No timeout                       */

    mem_free (msg_body);
    mem_free (request);

    if (trace_flag)
        sendfmt (&operq, "INFO",
                 "smtsimu: packet %u delayed by %u csecs", last_id, csecs);

    return (length);
}


/*************************   INITIALISE THE THREAD   *************************/

MODULE initialise_the_thread (THREAD *thread)
{
    the_next_event = ok_event;
}


/****************************   MAKE SOCKET CALL   ***************************/

MODULE make_socket_call (THREAD *thread)
{
    SOCKREQ *request = NULL;            /*  Request received in event        */
    byte    *req_buffer;
    dbyte   req_size;
    int     rc;

    /*  Get request from event body                                          */
    exdr_read (thread-> event-> body, SMT_TIME_REPLY, &req_size, &request);
    req_buffer = (byte *) request + sizeof (SOCKREQ);

    /*  Now do the UDP write call                                            */
    rc = write_UDP (request-> handle,
                    req_buffer, request-> length,
                    &request-> sin);

    /*  Handle any errors                                                    */
    if (rc != (int) request-> length)
        sendfmt (&operq, "ERROR",
                 "smtsimu: could not write to socket: %s", sockmsg ());
    else
    if (trace_flag)
        sendfmt (&operq, "INFO",
                 "smtsimu: packet %u sent, size=%u",
                  request-> id, request-> length);

    mem_free (request);
}


/***********************   GET NEXT EVENT FROM QUEUE   ***********************/

MODULE get_next_event_from_queue (THREAD *thread)
{
    AGENT   *agent;                     /*  This agent                       */
    QUEUE   *queue;                     /*  Thread's event queue             */
    EVENT   *event;                     /*  Event information block          */
    METHOD  *method;                    /*  Method information block         */

    /*  Get next event off queue                                             */
    queue = thread-> queue;
    agent = queue-> agent;
    event = event_iterate (queue, NULL);
    if (event)
      {
        method = method_lookup (agent, event-> name);
        if (method == NULL)             /*  Not a method we accept           */
            event_reject (queue, event);
        else
          {
            if (thread-> event)         /*  If thread was sitting on an      */
              {                         /*    event, release it              */
                event_destroy (thread-> event);
                thread-> event = NULL;
              }
            /*  Get event off queue; it now belongs to the thread            */
            thread-> event = event_accept (queue, event);
            the_next_event = method-> event_number;
          }
      }
}


/*************************   TERMINATE THE THREAD   **************************/

MODULE terminate_the_thread (THREAD *thread)
{
    the_next_event = terminate_event;
}
