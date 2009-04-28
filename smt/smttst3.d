/*---------------------------------------------------------------------------*
 *  smttst3.d - LIBERO dialog data definitions for smttst3.c.                *
 *  Generated by LIBERO 2.4 on 22 Jul, 2004, 16:52.                          *
 *  Schema file used: smtschm.c.                                             *
 *---------------------------------------------------------------------------*/

/*- Symbolic constants and event numbers ------------------------------------*/

#define _LR_STOP                        0xFFFFL
#define _LR_NULL_EVENT                  -2
#define _LR_NULL_STATE                  -1
#define terminate_event                 -1
#define debug_event                     0
#define end_event                       1
#define error_event                     2
#define exception_event                 3
#define exit_event                      4
#define fatal_event                     5
#define help_event                      6
#define host_event                      7
#define host_name_event                 8
#define invalid_event                   9
#define ip_event                        10
#define none_event                      11
#define ok_event                        12
#define recursive_event                 13
#define request_event                   14
#define server_ip_event                 15
#define shutdown_event                  16
#define timeout_event                   17
#define _LR_STATE_after_init            0
#define _LR_STATE_process_argument      1
#define _LR_STATE_process_command       2
#define _LR_STATE_send_request          3
#define _LR_STATE_after_request         4
#define _LR_STATE_defaults              5
#define _LR_defaults_state              5


/*- Function prototypes and macros ------------------------------------------*/

#ifndef MODULE
#define MODULE  static void             /*  Libero dialog modules            */
#endif

MODULE initialise_the_thread        (THREAD *thread);
MODULE initialise_dns_library       (THREAD *thread);
MODULE display_dns_server_address   (THREAD *thread);
MODULE get_next_argument            (THREAD *thread);
MODULE get_command                  (THREAD *thread);
MODULE terminate_the_thread         (THREAD *thread);
MODULE display_help                 (THREAD *thread);
MODULE set_debug_mode               (THREAD *thread);
MODULE set_recursive_mode           (THREAD *thread);
MODULE set_server_ip_value          (THREAD *thread);
MODULE get_argument_type            (THREAD *thread);
MODULE display_invalid_argument     (THREAD *thread);
MODULE set_prompt                   (THREAD *thread);
MODULE display_invalid_command      (THREAD *thread);
MODULE request_host_name            (THREAD *thread);
MODULE request_ip_address           (THREAD *thread);
MODULE display_error_value          (THREAD *thread);
MODULE display_host_name            (THREAD *thread);
MODULE display_ip_address           (THREAD *thread);
MODULE display_end_of_search        (THREAD *thread);
MODULE display_time_out             (THREAD *thread);

#define the_next_event              _the_next_event
#define the_exception_event         _the_exception_event
#define the_external_event          _the_external_event
#define exception_raised            _exception_raised
#define io_completed                _io_completed


/*- Static areas shared by all threads --------------------------------------*/

static word _LR_nextst [6][18] =
{
    { 0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0 },
    { 1,0,0,0,0,0,1,0,0,1,0,2,0,1,3,1,0,0 },
    { 2,0,0,0,2,0,2,0,0,2,0,2,2,2,3,2,0,0 },
    { 0,0,2,0,0,0,0,0,4,0,4,0,0,0,0,0,0,0 },
    { 0,2,2,0,0,0,0,2,0,0,2,0,0,0,0,0,0,2 },
    { 0,0,0,5,0,5,0,0,0,0,0,0,0,0,0,0,5,0 }
};

static word _LR_action [6][18] =
{
    { 0,0,2,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0 },
    { 4,0,0,0,0,0,3,0,0,8,0,9,0,5,7,6,0,0 },
    { 11,0,0,0,2,0,10,0,0,12,0,9,9,13,7,14,0,0 },
    { 0,0,17,0,0,0,0,0,16,0,15,0,0,0,0,0,0,0 },
    { 0,21,20,0,0,0,0,18,0,0,19,0,0,0,0,0,0,22 },
    { 0,0,0,2,0,2,0,0,0,0,0,0,0,0,0,0,2,0 }
};

static word _LR_offset [] =
{
    0,
    0,
    5,
    7,
    11,
    15,
    19,
    24,
    26,
    30,
    33,
    37,
    41,
    45,
    49,
    54,
    56,
    58,
    62,
    64,
    66,
    68,
    70
};

static word _LR_vector [] =
{
    0,1,2,3,_LR_STOP,
    4,_LR_STOP,
    5,2,3,_LR_STOP,
    6,2,3,_LR_STOP,
    7,2,3,_LR_STOP,
    8,1,2,3,_LR_STOP,
    9,_LR_STOP,
    10,2,3,_LR_STOP,
    11,3,_LR_STOP,
    5,11,3,_LR_STOP,
    6,11,3,_LR_STOP,
    12,11,3,_LR_STOP,
    7,11,3,_LR_STOP,
    8,1,11,3,_LR_STOP,
    13,_LR_STOP,
    14,_LR_STOP,
    15,11,3,_LR_STOP,
    16,_LR_STOP,
    17,_LR_STOP,
    15,_LR_STOP,
    18,_LR_STOP,
    19,_LR_STOP
};

static HOOK *_LR_module [20] = {
    initialise_dns_library,
    display_dns_server_address,
    get_next_argument,
    get_command,
    terminate_the_thread,
    display_help,
    set_debug_mode,
    set_recursive_mode,
    set_server_ip_value,
    get_argument_type,
    display_invalid_argument,
    set_prompt,
    display_invalid_command,
    request_host_name,
    request_ip_address,
    display_error_value,
    display_host_name,
    display_ip_address,
    display_end_of_search,
    display_time_out
};

#if (defined (DEBUG))
static char *_LR_mname [20] =
{
     "Initialise-Dns-Library",
     "Display-Dns-Server-Address",
     "Get-Next-Argument",
     "Get-Command",
     "Terminate-The-Thread",
     "Display-Help",
     "Set-Debug-Mode",
     "Set-Recursive-Mode",
     "Set-Server-Ip-Value",
     "Get-Argument-Type",
     "Display-Invalid-Argument",
     "Set-Prompt",
     "Display-Invalid-Command",
     "Request-Host-Name",
     "Request-Ip-Address",
     "Display-Error-Value",
     "Display-Host-Name",
     "Display-Ip-Address",
     "Display-End-Of-Search",
     "Display-Time-Out"
};

static char *_LR_sname [6] =
{
     "After-Init",
     "Process-Argument",
     "Process-Command",
     "Send-Request",
     "After-Request",
     "Defaults"
};

static char *_LR_ename [18] =
{
     "Debug-Event",
     "End-Event",
     "Error-Event",
     "Exception-Event",
     "Exit-Event",
     "Fatal-Event",
     "Help-Event",
     "Host-Event",
     "Host-Name-Event",
     "Invalid-Event",
     "Ip-Event",
     "None-Event",
     "Ok-Event",
     "Recursive-Event",
     "Request-Event",
     "Server-Ip-Event",
     "Shutdown-Event",
     "Timeout-Event"
};
#else
static char *_LR_mname [20] =
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
     "9",
     "10",
     "11",
     "12",
     "13",
     "14",
     "15",
     "16",
     "17",
     "18",
     "19"
};

static char *_LR_sname [6] =
{
     "0",
     "1",
     "2",
     "3",
     "4",
     "5"
};

static char *_LR_ename [18] =
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
     "9",
     "10",
     "11",
     "12",
     "13",
     "14",
     "15",
     "16",
     "17"
};
#endif
