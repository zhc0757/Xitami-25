/*===========================================================================*
 *                                                                           *
 *  lrstudio.c - Libero schema for Studio programs                           *
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

!   If urlmode is either local or remote
!   If local, the #(host) symbol is formatted with the server port
!   If remote, the #(host) symbol is formatted without a port (=80)
:declare string $urlmode = "local"

!   The model is either cgi or wtp
:declare string $model = "wtp"

!   The various user-exits are only generated if asked-for
:declare string $want_event_exits   = "no"
:declare string $want_call_exits    = "yes"
:declare string $want_form_exits    = "yes"
:declare string $want_context_exits = "no"

!   You can use the template file to include project-specific code in the
!   generated code at various points.  This is a (better) alternative to
!   changing the schema in order to add your own project code.
!
!   The template file should contain these sections (each starts with a
!   keyword on a line, and ends with <END> on a line).  These sections may
!   be included in newly-generated code (keywords are case-sensitive):
!
!   <HEADER>                    - program header comment
!   <DATA>                      - data definitions
!   <Initialise-The-Program>    - in Initialise-The-Program
!   <Any-Dialog-Module>         - any dialog module...
!
:declare string $template = "template.c"

!   Normally animation output is sent to the stdout device, as HTML
!   If you use -opt:animate=stderr, it is sent to stderr instead.
:declare string $animate  = "stdout"

:if not exist $source.c
:echo "lr I: creating skeleton program $source.c..."
:output $source.c
/*===========================================================================*
 *                                                                           *
 *  $source.c   description...                                               *
 *                                                                           *
 *  Written:    $date       $author                                          *
 *  Revised:    $date                                                        *
 *                                                                           *
:include optional $template "<HEADER>" "<END>"
 *  Skeleton generated by LIBERO $version on $fulldate, $time.               *
 *  This program must be linked with the Studio runtime and a broker         *
 *  main program.                                                            *
 *===========================================================================*/

#include "$dialog.d"                    /*  Include dialog data              */
#include "$source.h"                    /*  Form definition file             */

/*- Function prototypes -----------------------------------------------------*/

/*- Global variables used in this source file only --------------------------*/

static struct {
    int filler;                         /*  Define your context here         */
} cb;                                   /*  Context Block                    */

static $SOURCE\_DATA *$"form_data";     /*  Form data block                  */

:include optional $template "<DATA>" "<END>"


/********************************   M A I N   ********************************/

int $source\_program (SESSION *p_session)
{
    $"session" = p_session;             /*  Localise session block           */
    /*  Prepare to work with form                                            */
    /*  - - - - - - - - - - - - - - - - - - Do nothing else here - - - - - - */
#   include "$dialog.i"                 /*  Include dialog interpreter       */
}


/*************************   INITIALISE THE PROGRAM   ************************/

MODULE $"initialise_the_program" (void)
{
    $"the_next_event" = $"ok_event";
:include optional $template "<Initialise-The-Program>" "<END>"
}

:if "$want_event_exits" = "yes"
/***************************   GET EXTERNAL EVENT   **************************/

MODULE $"get_external_event" (void)
{
:include optional $template "<Get-External-Event>" "<END>"
}


:endif
:if "$want_form_exits" = "yes"
/**************************   BEFORE SHOWING FORM   **************************/

MODULE $"before_showing_form" (void)
{
:include optional $template "<Before-Showing-Form>" "<END>"
}


/***************************   AFTER SHOWING FORM   **************************/

MODULE $"after_showing_form" (void)
{
:include optional $template "<After-Showing-Form>" "<END>"
}


:endif
:if "$want_context_exits" = "yes"
/**************************   SAVE PROGRAM CONTEXT   *************************/

MODULE $"save_program_context" (void)
{
:include optional $template "<Save-Program-Context>" "<END>"
}


/**************************   LOAD PROGRAM CONTEXT   *************************/

MODULE $"load_program_context" (void)
{
:include optional $template "<Load-Program-Context>" "<END>"
}


:endif
:if "$want_call_exits" = "yes"
/**************************   BEFORE REQUEST CALL   **************************/

MODULE $"before_request_call" (void)
{
:include optional $template "<Before-Request-Call>" "<END>"
}


/***************************   AFTER RETURN CALL   ***************************/

MODULE $"after_return_call" (void)
{
:include optional $template "<After-Return-Call>" "<END>"
}


/**************************   CALL REQUEST FAILED   **************************/

MODULE $"call_request_failed" (void)
{
:include optional $template "<Call-Request-Failed>" "<END>"
}


:endif
/*************************   TERMINATE THE PROGRAM    ************************/

MODULE $"terminate_the_program" (void)
{
    $"the_next_event" = $"terminate_event";
:include optional $template "<Terminate-The-Program>" "<END>"
}

:close
:endif

:output $dialog.d
:echo "lr I: building $dialog.d..."
/*---------------------------------------------------------------------------*
 *  $dialog.d - LIBERO dialog data definitions for $source.c.                *
 *  Generated by LIBERO $version on $fulldate, $time.                        *
 *  Schema file used: $schema.                                               *
 *---------------------------------------------------------------------------*/

:if "$model" = "cgi"
#define USE_CGI_BROKER                  /*  FX/CGI include file              */
:else
:if "$model" = "wtp"
#define USE_WTP_BROKER                  /*  WTP definitions                  */
:else
:   echo "lr E: invalid model: use -opt:model=wtp or -opt:model=cgi"
:   exit 1
:endif
:endif
#include "sfl.h"                        /*  SFL definitions                  */
#include "studio.h"                     /*  Formio API definitions           */

#define SYMVAL(n) sym_get_value ($"session"-> symbols, (n), "?")

/*- Symbolic constants and event numbers ------------------------------------*/

:if check
#define _LR_STOP                        0xFFFFL
:endif
enum {
    _LR_null_event = -1,                /*  No event was set                 */
    _LR_call_event = -2,                /*  Return after call program        */
    _LR_show_event = -3,                /*  Return after show form           */
    $"terminate_event" = -4,            /*  End the program                  */
:do event
    $name = $number$comma               /*  Generated from the dialog        */
:enddo
};
:if not event "Enter"
:   echo "lr E: you must define an 'Enter-Event' in your dialog"
:   exit 1
:endif

enum {
:if defaults
    _LR_defaults_state = $defaults,
:endif
:do state
    _LR_STATE_$name = $number$comma
:enddo
};


/*- Variables used by dialog interpreter ------------------------------------*/

typedef int event_t;                    /*  Type for dialog entity           */
typedef void (fsmfunct) (void);         /*  Address of FSM function          */

static struct {                         /*  Dialog context block             */
    event_t
        _LR_event,                      /*  Event for state transition       */
        _LR_state,                      /*  Current dialog state             */
        _LR_saved_state,                /*  Saved dialog state               */
        _LR_saved_event,                /*  Saved dialog event               */
        _LR_index,                      /*  Index into vector table          */
        _LR_modnbr,                     /*  Index into vector table          */
        the_next_event,                 /*  Next event from module           */
        the_exception_event;            /*  Exception event from module      */
    Bool
        exception_raised;               /*  TRUE if exception raised         */
:if module "Dialog-Call"
:  if not event "Return"
:     echo "lr E: you must define the 'Return' event"
:     exit 1
:  endif
:  declare int $stack_max = 20
    event_t
        _LR_stack [$stack_max];         /*  Subdialog call stack             */
    int
        _LR_stack_size;                 /*  Subdialog stack size; 0=empty    */
:endif
} ctx;

:declare int $args_max = 2048           #   Size of arguments block
static char    $"parent_args" [$args_max];
static char    $"child_args" [$args_max];
static Bool    _LR_call_wanted;         /*  call_the_program() invoked?      */
static dbyte  *_LR_vecptr;              /*  Pointer into vector table        */

static SESSION *$"session";             /*  Current session block            */
static event_t $"the_exception_event";  /*  Exception event from module      */
static event_t $"the_next_event";       /*  Exception event from module      */
static Bool    $"exception_raised";     /*  TRUE if exception raised         */
static int     $"form_changes";         /*  Number of modified fields        */


/*- Function prototypes -----------------------------------------------------*/

#ifndef MODULE
#define MODULE static void              /*  Libero dialog modules            */
#endif

static int  _LR_enter_state       (void);
static int  _LR_load_context      (void);
static void _LR_save_context      (void);
static void _LR_show_the_form     (Bool after_error);
local  $"request_program_call"    (char *program);
local  $"get_form_event"          (void);
local  $"raise_exception"         (event_t event);
:if event "Exception"
local  $"exception_error"         (char *message);
:endif
MODULE $"initialise_the_program"  (void);
:if "$want_event_exits" = "yes"
MODULE $"get_external_event"      (void);
:endif
:if "$want_form_exits" = "yes"
MODULE $"before_showing_form"     (void);
MODULE $"after_showing_form"      (void);
:endif
:if "$want_call_exits" = "yes"
MODULE $"before_request_call"     (void);
MODULE $"after_return_call"       (void);
MODULE $"call_request_failed"     (void);
:endif
:if "$want_context_exits" = "yes"
MODULE $"save_program_context"    (void);
MODULE $"load_program_context"    (void);
:endif
:do module
MODULE $name                      (void);
:enddo


/*- Static areas ------------------------------------------------------------*/

static dbyte _LR_nextst [][$events] =
{
:do nextst
:  if $overflow = 0
    { $row }$comma
:  else
    { $row
:    do overflow
     $row
:    enddo
    }$comma
:  endif
:enddo
};

static dbyte _LR_action [][$events] =
{
:set array_base=1
:do action
:  if $overflow = 0
    { $row }$comma
:  else
    { $row
:    do overflow
     $row
:    enddo
    }$comma
:  endif
:enddo
:set array_base=0
};

static dbyte _LR_vector [][$maxaction+1] =
{
    {0},
:do vector
:  if "$row" = ""
    {_LR_STOP}$comma
:  else
    {$row,_LR_STOP}$comma
:  endif
:enddo
};

static fsmfunct *_LR_module [] =
{
:do module
    $name$comma
:enddo
};

:if animate
:push $style
:option -style=normal
static char *_LR_mname [$modules] =
{
:  do module
     "$name"$comma
:  enddo
};

static char *_LR_sname [$states] =
{
:  do state
     "$name"$comma
:  enddo
};

static char *_LR_ename [$events] =
{
:  do event
     "$name"$comma
:  enddo
};
:pop $style
:option -style=$style
:endif
:close

:output $dialog.i
:echo "lr I: building $dialog.i..."
/*---------------------------------------------------------------------------*
 *  $dialog.i - LIBERO dialog interpreter for $source.c.                     *
 *  Generated by LIBERO $version on $fulldate, $time.                        *
 *---------------------------------------------------------------------------*/

    memset ($"parent_args", 0, $args_max);
    memset ($"child_args", 0, $args_max);
    _LR_call_wanted = FALSE;            /*  Initialise general variables     */

    if (_LR_load_context () == 0)       /*  If no context, initialise        */
      {
        ctx._LR_state = 0;              /*  First state is always 0          */
:if module "Dialog-Call"
        ctx._LR_stack_size = 0;         /*  Clear subdialog stack            */
:endif
        /*  Get arguments from calling program                               */
        CONTEXT_GETG ("_args", $"parent_args", $args_max);

        /*  Create initial form and initialise it for this session           */
        $"session"-> form = form_init (&form_$source, TRUE);
        if ($"session"-> form == NULL)
            return (FEEDBACK_ERROR);
        $"form_data" = ($SOURCE\_DATA *) $"session"-> form-> data;
        $"session"-> form-> click_event = $"enter_event";
        if (streq (SYMVAL ("SERVER_SECURITY"), "SSL"))
            $"session"-> form-> ssl_protocol = 1;
        else
            $"session"-> form-> ssl_protocol = 0;

        /*  Get initial finite-state event from the program                  */
        $"the_next_event" = _LR_null_event;
        $"initialise_the_program" ();
      }
    else
      {
        /*  We have context: continue from call-program or show-form         */
        $"form_data" = ($SOURCE\_DATA *) $"session"-> form-> data;
        if ($"the_next_event" == _LR_show_event)
          {
            /*  Get form - if there are invalid dates or numbers, reshow     */
            $"form_changes" = form_get ($"session"-> form,
                                       (char *) $"session"-> buffer_-> data);
            if ($"form_changes" == -1)
              {
                fxput_text ($SOURCE\_MESSAGE_TO_USER, form_strerror);
                _LR_show_the_form (TRUE);
                return (FEEDBACK_SHOW);
              }
            else
                fxput_text ($SOURCE\_MESSAGE_TO_USER, "");

            $"after_showing_form" ();
            $"get_form_event" ();

            /*  If the form could not generate an event, get one             */
            if ($"the_next_event" == _LR_null_event)
:if "$want_event_exits" = "yes"
                $"get_external_event" ();
:else
                $"the_next_event" = $"enter_event";
:endif
          }
        else
        if ($"the_next_event" == _LR_call_event)
          {
            if ($"session"-> program_callcode == CALLCODE_OKAY)
              {
                /*  Get return arguments from called program                 */
                CONTEXT_GETG ("_args", $"child_args", $args_max);
:if "$want_call_exits" = "yes"
                $"after_return_call" ();
:endif
              }
:if "$want_call_exits" = "yes"
            else
                $"call_request_failed" ();
:endif
          }
      }
    while ($"the_next_event" != $"terminate_event")
      {
        /*  After a call, restore the event and do the next dialog step      */
        if ($"the_next_event" == _LR_call_event)
            $"the_next_event" = ctx._LR_saved_event;
        else
            if (_LR_enter_state ())
                break;

        form_use ($"session"-> form);
        /*  Execute module list                                              */
        FOREVER
          {
            if ($"exception_raised" || _LR_call_wanted)
                break;
            _LR_vecptr = &_LR_vector [ctx._LR_index][ctx._LR_modnbr];
            if (*_LR_vecptr == _LR_STOP)
                break;
            else
                ctx._LR_modnbr++;
:if animate
:   if "$animate" = "stdout"
            coprintf ("$source:           + %s", _LR_mname [*_LR_vecptr]);
:   else
            fprintf (stderr, "$source: ");
            fprintf (stderr, "          + %s\n", _LR_mname [*_LR_vecptr]);
            fflush  (stderr);
:   endif
:endif
            (*_LR_module [*_LR_vecptr]) ();
          }
        if (_LR_call_wanted)
          {
            ctx._LR_saved_event = $"the_next_event";
            $"the_next_event" = _LR_call_event;
            _LR_save_context ();
            CONTEXT_PUTG ("_args", $"child_args", $args_max);
            return (FEEDBACK_CALL);
          }
        else
        if ($"exception_raised")
          {
            if ($"the_exception_event" != _LR_null_event)
                ctx._LR_event = $"the_exception_event";
            $"the_next_event" = ctx._LR_event;
:if animate
:   if "$animate" = "stdout"
            coprintf ("$source:     (=>) %s", _LR_ename [ctx._LR_event]);
:   else
            fprintf (stderr, "$source: ");
            fprintf (stderr, "    (=>) %s\n", _LR_ename [ctx._LR_event]);
            fflush  (stderr);
:   endif
:endif
          }
        else
            ctx._LR_state = _LR_nextst [ctx._LR_state][ctx._LR_event];

:if defaults
        if (ctx._LR_state == _LR_defaults_state)
            ctx._LR_state = ctx._LR_saved_state;
:endif
        /*  If no event supplied, format and show form                       */
        if ($"the_next_event" == _LR_null_event)
          {
            _LR_show_the_form (FALSE);
            return (FEEDBACK_SHOW);
          }
      }
    form_term ($"session"-> form);
    CONTEXT_PUTG ("_args", $"parent_args", $args_max);
    return (FEEDBACK_RETURN);           /*  Normal end of program            */
}

:if module "Dialog-Call"
MODULE $"dialog_call" (void)
{
    if (ctx._LR_stack_size < $stack_max)
        ctx._LR_stack [ctx._LR_stack_size++] = ctx._LR_state;
    else
      {
        coprintf ("$source: State %d - Dialog-Call overflow", ctx._LR_state);
        exit (1);
      }
}

MODULE $"dialog_return" (void)
{
    if (ctx._LR_stack_size > 0)
      {
        ctx._LR_state = ctx._LR_stack [--ctx._LR_stack_size];
        $"raise_exception" ($"return_event");
      }
    else
      {
        coprintf ("$source: State %d - Dialog-Return underflow", ctx._LR_state);
        exit (1);
      }
}

:endif
/*- Private dialog routines -------------------------------------------------*/

static int
_LR_enter_state (void)
{
    ctx._LR_event = $"the_next_event";
:if check
    if ($"the_next_event" == _LR_null_event)
      {
        coprintf ("$source: No event set after event %d in state %d",
                             ctx._LR_event, ctx._LR_state);
        return (1);                     /*  End dialog program               */
      }
    else
    if (ctx._LR_event >= $events || ctx._LR_event < 0)
      {
        coprintf ("$source: State %d - event %d is out of range",
                         ctx._LR_state, ctx._LR_event);
        return (1);                     /*  End dialog program               */
      }
:endif
    ctx._LR_saved_state = ctx._LR_state;
    ctx._LR_index = _LR_action [ctx._LR_state][ctx._LR_event];
:if defaults
    /*  If no action for this event, try the defaults state                  */
    if (ctx._LR_index == 0)
      {
        ctx._LR_state = _LR_defaults_state;
        ctx._LR_index = _LR_action [ctx._LR_state][ctx._LR_event];
      }
:endif
:if animate
:   if "$animate" = "stdout"
    coprintf ("$source: %s:", _LR_sname [ctx._LR_state]);
    coprintf ("$source:    (--) %s", _LR_ename [ctx._LR_event]);
:   else
    fprintf (stderr, "$source: ");
    fprintf (stderr, "%s:\n", _LR_sname [ctx._LR_state]);
    fprintf (stderr, "$source:    (--) %s\n",_LR_ename [ctx._LR_event]);
    fflush  (stderr);
:   endif
:endif
:if check
    if (ctx._LR_index == 0)
      {
        coprintf ("$source: State %d - event %d is not accepted",
                         ctx._LR_state, ctx._LR_event);
        return (1);                     /*  End dialog program               */
      }
    $"the_next_event"       = _LR_null_event;
:endif
    $"the_exception_event"  = _LR_null_event;
    $"exception_raised"     = FALSE;
    ctx._LR_modnbr = 0;                 /*  Start event vector at start      */
    return (0);                         /*  End dialog program               */
}

static int
_LR_load_context (void)
{
    FORM_ITEM
        *form;                          /*  Newly-allocated form item        */
    byte
        *data;                          /*  Allocated form data              */

    /*  Load dialog and programmer context blocks                            */
    if (!context_get (SCOPE_LOCAL, "_ctx", &ctx, sizeof (ctx)))
        return (0);                     /*  Context not found                */
    context_get (SCOPE_LOCAL, "_blk", &cb, sizeof (cb));
    context_get (SCOPE_LOCAL, "_pargs", $"parent_args", $args_max);
    context_get (SCOPE_LOCAL, "_cargs", $"child_args",  $args_max);

    $"the_next_event"       = ctx.the_next_event;
    $"the_exception_event"  = ctx.the_exception_event;
    $"exception_raised"     = ctx.exception_raised;

    /*  Load form header fields                                              */
    form = form_init (&form_$source, FALSE);
    data = form-> data;
    context_get    (SCOPE_LOCAL, "_fhead", form, sizeof (FORM_ITEM));
    context_get    (SCOPE_LOCAL, "_fdata", data, form-> data_size);
    context_getsym (SCOPE_LOCAL, "_sel",        &form-> list_values);

    form-> data = data;                 /*  We destroy these fields when we  */
    form-> defn = &form_$source;        /*    reload the form item           */
    $"session"-> form = form;
:if "$want_context_exits" = "yes"
    $"load_program_context" ();
:endif
    return (1);
}

local
_LR_save_context (void)
{
:if "$want_context_exits" = "yes"
    $"save_program_context" ();
:endif
    ctx.the_next_event      = $"the_next_event";
    ctx.exception_raised    = $"exception_raised";
    ctx.the_exception_event = $"the_exception_event";

    /*  Save dialog and programmer context blocks                            */
    context_put (SCOPE_LOCAL, "_ctx", &ctx, sizeof (ctx));
    context_put (SCOPE_LOCAL, "_blk", &cb,  sizeof (cb));
    context_put (SCOPE_LOCAL, "_pargs", $"parent_args", $args_max);
    context_put (SCOPE_LOCAL, "_cargs", $"child_args",  $args_max);

    /*  Save form header fields                                              */
    context_put    (SCOPE_LOCAL, "_fhead", $"session"-> form,
                                             sizeof (FORM_ITEM));
    context_put    (SCOPE_LOCAL, "_fdata", $"session"-> form-> data,
                                           $"session"-> form-> data_size);
    context_putsym (SCOPE_LOCAL, "_sel",   $"session"-> form-> list_values);

    form_term ($"session"-> form);
}

local
_LR_show_the_form (Bool after_error)
{
    event_t
        event;
    char
        *proto = "",                    /*  Protocol for hyperlinks          */
        *host = "",                     /*  Server for hyperlinks            */
        *url = NULL;                    /*  Server:port if necessary         */

    /*  If form is being shown normally, format action buttons and call
     *  user exit in before_showing_form ()
     */
    if (!after_error)
      {
        /*  Toggle action buttons to match valid events                      */
        for (event = 0; event < $events; event++)
:if defaults
            if (_LR_action [ctx._LR_state]     [event]
            ||  _LR_action [_LR_defaults_state][event])
:else
            if (_LR_action [ctx._LR_state]     [event])
:endif
                action_enable  ($"session"-> form, event);
            else
            if ($"session"-> disable_actions == DISABLE_VISIBLE)
                action_disable ($"session"-> form, event);
            else
                action_hide    ($"session"-> form, event);

:if "$want_form_exits" = "yes"
        $"before_showing_form" ();
:endif
      }
    sym_assume_symbol ($"session"-> symbols, "date",
        conv_date_str (date_now (),
            FLAG_D_CENTURY, DATE_YMD_DELIM,
            $"session"-> form-> date_order,
            $"session"-> form-> date_sep, 10));
    sym_assume_symbol ($"session"-> symbols, "time",
        conv_time_str (time_now (), 0, ':', 5));

    /*  Prepare the form 'host' and 'proto' symbols                          */
    if ($"session"-> form-> ssl_protocol)
      {
        proto = "https://";             /*  Switch to SSL                    */
:if "$urlmode" = "remote"
        host  = SYMVAL ("SERVER_NAME");
:else
        if (streq (SYMVAL ("SERVER_HTTPS_PORT"), "443"))
            host = SYMVAL ("SERVER_NAME");
        else
          {
            url = xstrcpy (NULL, SYMVAL ("SERVER_NAME"), ":",
                                 SYMVAL ("SERVER_HTTPS_PORT"), NULL);
            host = url;
          }
:endif
      }
    else
      {
        proto = "http://";              /*  Switch to non-SSL                */
:if "$urlmode" = "remote"
        host  = SYMVAL ("SERVER_NAME");
:else
        if (streq (SYMVAL ("SERVER_HTTP_PORT"), "80"))
            host = SYMVAL ("SERVER_NAME");
        else
          {
            url = xstrcpy (NULL, SYMVAL ("SERVER_NAME"), ":",
                                 SYMVAL ("SERVER_HTTP_PORT"), NULL);
            host = url;
          }
:endif
      }

    sym_assume_symbol ($"session"-> symbols, "proto", proto);
    sym_assume_symbol ($"session"-> symbols, "host",  host);
    if (url)
        mem_free (url);

    form_put ($"session"-> form, $"session"-> buffer_, $"session"-> symbols);

    $"the_next_event" = _LR_show_event;
    _LR_save_context ();
}


/*- Standard dialog routines ------------------------------------------------*/

/*  Prepares to call a dialogued program:
 *      Sets session-> program_to_call as specified
 */
local
$"request_program_call" (char *program)
{
    ASSERT (strlen (program) < PRGNAME_MAX);
    strcpy ($"session"-> program_to_call, program);
    _LR_call_wanted = TRUE;             /*  Tell dialog to do the call       */
:if "$want_call_exits" = "yes"
    $"before_request_call" ();
:endif
}

local
$"get_form_event" (void)
{
    $"the_next_event" = $"session"-> form-> event;
}

:if event "Exception"
local
$"exception_error" (char *message)
{
    $"raise_exception" ($"exception_event");
    fxput_text ($SOURCE\_MESSAGE_TO_USER, message);
}

:endif

local
$"raise_exception" (event_t event)
{
    $"exception_raised" = TRUE;
    if (event >= 0)
        $"the_exception_event" = event;
:close

!   Generate stubs for all modules not yet defined in source file

:internal initialise_the_program
:if "$want_event_exits" = "yes"
:internal get_external_event
:endif
:if "$want_form_exits" = "yes"
:internal before_showing_form
:internal after_showing_form
:endif
:if "$want_call_exits" = "yes"
:internal before_request_call
:internal after_return_call
:internal call_request_failed
:endif
:if "$want_context_exits" = "yes"
:internal save_program_context
:internal load_program_context
:endif
:do stubs $source.c $dialog.i

MODULE $name (void)
{
:include optional $template "<$module_name>" "<END>"
}

:enddo

