/*---------------------------------------------------------------------------*
 *  smttst1.d - LIBERO dialog data definitions for smttst1.c.                *
 *  Generated by LIBERO 2.4 on 22 Jul, 2004, 16:52.                          *
 *  Schema file used: smtschm.c.                                             *
 *---------------------------------------------------------------------------*/

/*- Symbolic constants and event numbers ------------------------------------*/

#define _LR_STOP                        0xFFFFL
#define _LR_NULL_EVENT                  -2
#define _LR_NULL_STATE                  -1
#define terminate_event                 -1
#define alarm_event                     0
#define error_event                     1
#define ok_event                        2
#define shutdown_event                  3
#define _LR_STATE_after_init            0
#define _LR_STATE_waiting_tick          1
#define _LR_STATE_defaults              2
#define _LR_defaults_state              2


/*- Function prototypes and macros ------------------------------------------*/

#ifndef MODULE
#define MODULE  static void             /*  Libero dialog modules            */
#endif

MODULE initialise_the_thread        (THREAD *thread);
MODULE set_clock_ticking            (THREAD *thread);
MODULE terminate_the_thread         (THREAD *thread);

#define the_next_event              _the_next_event
#define the_exception_event         _the_exception_event
#define the_external_event          _the_external_event
#define exception_raised            _exception_raised
#define io_completed                _io_completed


/*- Static areas shared by all threads --------------------------------------*/

static word _LR_nextst [3][4] =
{
    { 0,0,1,0 },
    { 1,0,0,0 },
    { 0,2,0,2 }
};

static word _LR_action [3][4] =
{
    { 0,2,1,0 },
    { 3,0,0,0 },
    { 0,2,0,2 }
};

static word _LR_offset [] =
{
    0,
    0,
    2,
    4
};

static word _LR_vector [] =
{
    0,_LR_STOP,
    1,_LR_STOP,
    _LR_STOP
};

static HOOK *_LR_module [2] = {
    set_clock_ticking,
    terminate_the_thread
};

#if (defined (DEBUG))
static char *_LR_mname [2] =
{
     "Set-Clock-Ticking",
     "Terminate-The-Thread"
};

static char *_LR_sname [3] =
{
     "After-Init",
     "Waiting-Tick",
     "Defaults"
};

static char *_LR_ename [4] =
{
     "Alarm-Event",
     "Error-Event",
     "Ok-Event",
     "Shutdown-Event"
};
#else
static char *_LR_mname [2] =
{
     "0",
     "1"
};

static char *_LR_sname [3] =
{
     "0",
     "1",
     "2"
};

static char *_LR_ename [4] =
{
     "0",
     "1",
     "2",
     "3"
};
#endif
