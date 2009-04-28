/*===========================================================================*
 *                                                                           *
 *  xiredir.c                                                                *
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
 *===========================================================================*/
/*
    Synopsis:   

*/
#include "smtdefn.h"                    /*  SMT definitions                  */
#include "smthttpl.h"                   /*  SMT HTTP definitions             */


/*- Definitions -------------------------------------------------------------*/

#undef  AGENT_NAME
#define AGENT_NAME        "xiredir"     /*  Our public name                  */
#define SINGLE_THREADED   TRUE          /*  Single-threaded agent            */


/*- Global variables used in this source file only --------------------------*/

static struct_smt_wsx_request
    *request = NULL;                    /*  Incoming smt_wsx request         */

#include "xiredir.d"                    /*  Include dialog data              */


/********************   INITIALISE AGENT - ENTRY POINT   *********************/

int xiredir_init (void)
{
    AGENT  *agent;                      /*  Handle for our agent             */
#   include "xiredir.i"                 /*  Include dialog interpreter       */

    /*                      Method name   Event value     Priority          */
    /*  Shutdown event comes from Kernel                                     */
    method_declare (agent, "SHUTDOWN",    shutdown_event, SMT_PRIORITY_MAX);

    /*  Public methods supported by this agent                               */
    method_declare (agent, "WSX_REQUEST", request_event,  0);

    /*  Create master thread to manage WSX requests                          */
    thread_create (AGENT_NAME, "main");

    /*  Signal okay to caller that we initialised okay                       */
    return (0);
}


/*************************   INITIALISE THE THREAD   *************************/

MODULE initialise_the_thread (THREAD *thread)
{
    THREAD
        *http_thread;
    SYMBOL
        *symbol;                        /*  Next symbol in table             */

    the_next_event = ok_event;

    /*  Install all redirections as WSX aliases                              */
    /*  For now we do not handle distinguish virtual hosts                   */
    http_thread = thread_lookup (SMT_HTTP, "main");
    if (http_thread) {
        for (symbol = config-> symbols; symbol; symbol = symbol-> next)
            if (strprefixed (symbol-> name, "redirect:")) {
                send_wsx_install (
                    &http_thread-> queue-> qid,
                    NULL,               /*  All virtual hosts                */
                    symbol-> name + strlen ("redirect:"),
                    AGENT_NAME);
            }
    }
}


/***************************   DECODE WSX REQUEST   **************************/

MODULE decode_wsx_request (THREAD *thread)
{
    ASSERT (request == NULL);

    /*  Decode the WSX request using this standard function call             */
    get_smt_wsx_request (thread-> event-> body, &request);
    if (request)
        the_next_event = ok_event;
    else
      {
        /*  The request can only be null if there is no memory left          */
        send_wsx_error (&thread-> event-> sender, HTTP_RESPONSE_OVERLOADED);
        the_next_event = exception_event;
      }
}


/**************************   REPLY TO WSX REQUEST   *************************/

MODULE reply_to_wsx_request (THREAD *thread)
{
    DESCR
        symbols;                        /*  Symbol descriptor                */
    SYMTAB
        *envtab;                        /*  Environment symbols              */
    SYMBOL
        *script_path,                   /*  Symbols passed from core         */
        *script_name,
        *redirect_to;
    char
        *redirect;                      /*  URL to redirect to               */
    
    symbols.size = request-> symbols_size;
    symbols.data = request-> symbols_data;
    envtab = descr2symb (&symbols);
    script_path = sym_lookup_symbol (envtab, "SCRIPT_PATH");
    script_name = sym_lookup_symbol (envtab, "SCRIPT_NAME");
    if (script_path) {
        redirect = strprintf ("redirect:%s", script_path-> value);
        redirect_to = sym_lookup_symbol (config, redirect);
        if (!redirect_to && *script_path-> value == '/') {
            redirect = strprintf ("redirect:%s", script_path-> value + 1);
            redirect_to = sym_lookup_symbol (config, redirect);
        }    
    }
    if (redirect_to) {
        redirect = strconvchs (redirect_to-> value, '$',
                               script_name? script_name-> value + 1: "");
        send_wsx_redirect (&thread-> event-> sender, redirect);
        mem_strfree (&redirect);
    }
    sym_delete_table (envtab);

    /*  We're finished with the request structure - deallocate it            */
    free_smt_wsx_request (&request);
}


/*************************   TERMINATE THE THREAD   **************************/

MODULE terminate_the_thread (THREAD *thread)
{
    /*  If we were interrupted during processing the request, free it.
     *  This avoids potential memory leaks.
     */
    if (request)
        free_smt_wsx_request (&request);

    the_next_event = terminate_event;
}
