/*---------------------------------------------------------------------------*
 *  smtslot.d - LIBERO dialog data definitions for smtslot.c.                *
 *  Generated by LIBERO 2.4 on 22 Jul, 2004, 16:52.                          *
 *  Schema file used: smtschm.c.                                             *
 *---------------------------------------------------------------------------*/

/*- Symbolic constants and event numbers ------------------------------------*/

#define _LR_STOP                        0xFFFFL
#define _LR_NULL_EVENT                  -2
#define _LR_NULL_STATE                  -1
#define terminate_event                 -1
#define error_event                     0
#define exception_event                 1
#define finish_event                    2
#define off_event                       3
#define ok_event                        4
#define on_event                        5
#define reset_event                     6
#define shutdown_event                  7
#define specify_event                   8
#define tick_event                      9
#define _LR_STATE_after_init            0
#define _LR_STATE_expect_specify        1
#define _LR_STATE_switched_on           2
#define _LR_STATE_switched_off          3
#define _LR_STATE_defaults              4
#define _LR_defaults_state              4


/*- Function prototypes and macros ------------------------------------------*/

#ifndef MODULE
#define MODULE  static void             /*  Libero dialog modules            */
#endif

MODULE initialise_the_thread        (THREAD *thread);
MODULE terminate_the_thread         (THREAD *thread);
MODULE store_time_slot_specification (THREAD *thread);
MODULE rebuild_time_slots_if_new_day (THREAD *thread);
MODULE wait_for_timer_tick          (THREAD *thread);
MODULE check_if_time_to_switch_off  (THREAD *thread);
MODULE check_if_time_to_switch_on   (THREAD *thread);
MODULE reset_all_time_slots         (THREAD *thread);
MODULE signal_switch_off_now        (THREAD *thread);
MODULE signal_switch_on_now         (THREAD *thread);

#define the_next_event              _the_next_event
#define the_exception_event         _the_exception_event
#define the_external_event          _the_external_event
#define exception_raised            _exception_raised
#define io_completed                _io_completed


/*- Static areas shared by all threads --------------------------------------*/

static word _LR_nextst [5][10] =
{
    { 0,0,0,0,1,0,0,0,0,0 },
    { 0,0,0,3,0,2,0,0,1,0 },
    { 0,0,0,0,0,0,0,0,0,2 },
    { 0,0,0,0,0,0,0,0,0,3 },
    { 0,4,4,3,0,2,4,4,1,0 }
};

static word _LR_action [5][10] =
{
    { 2,0,0,0,1,0,0,0,0,0 },
    { 0,0,0,4,0,4,0,0,3,0 },
    { 0,0,0,0,0,0,0,0,0,5 },
    { 0,0,0,0,0,0,0,0,0,6 },
    { 0,2,2,8,0,9,7,2,3,0 }
};

static word _LR_offset [] =
{
    0,
    0,
    1,
    3,
    5,
    8,
    12,
    16,
    18,
    21
};

static word _LR_vector [] =
{
    _LR_STOP,
    0,_LR_STOP,
    1,_LR_STOP,
    2,3,_LR_STOP,
    2,4,3,_LR_STOP,
    2,5,3,_LR_STOP,
    6,_LR_STOP,
    7,3,_LR_STOP,
    8,3,_LR_STOP
};

static HOOK *_LR_module [9] = {
    terminate_the_thread,
    store_time_slot_specification,
    rebuild_time_slots_if_new_day,
    wait_for_timer_tick,
    check_if_time_to_switch_off,
    check_if_time_to_switch_on,
    reset_all_time_slots,
    signal_switch_off_now,
    signal_switch_on_now
};

#if (defined (DEBUG))
static char *_LR_mname [9] =
{
     "Terminate-The-Thread",
     "Store-Time-Slot-Specification",
     "Rebuild-Time-Slots-If-New-Day",
     "Wait-For-Timer-Tick",
     "Check-If-Time-To-Switch-Off",
     "Check-If-Time-To-Switch-On",
     "Reset-All-Time-Slots",
     "Signal-Switch-Off-Now",
     "Signal-Switch-On-Now"
};

static char *_LR_sname [5] =
{
     "After-Init",
     "Expect-Specify",
     "Switched-On",
     "Switched-Off",
     "Defaults"
};

static char *_LR_ename [10] =
{
     "Error-Event",
     "Exception-Event",
     "Finish-Event",
     "Off-Event",
     "Ok-Event",
     "On-Event",
     "Reset-Event",
     "Shutdown-Event",
     "Specify-Event",
     "Tick-Event"
};
#else
static char *_LR_mname [9] =
{
     "0",
     "1",
     "2",
     "3",
     "4",
     "5",
     "6",
     "7",
     "8"
};

static char *_LR_sname [5] =
{
     "0",
     "1",
     "2",
     "3",
     "4"
};

static char *_LR_ename [10] =
{
     "0",
     "1",
     "2",
     "3",
     "4",
     "5",
     "6",
     "7",
     "8",
     "9"
};
#endif
