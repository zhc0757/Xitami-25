/*===========================================================================*
 *                                                                           *
 *  sfldbio.h - Generated file - do not modify                               *
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
    Synopsis:   Defines structures and constants for the db interface.

*/
#ifndef _SFLDBIO_INCLUDED
#define _SFLDBIO_INCLUDED

/*- Definitions  ------------------------------------------------------------*/

/* Database type should be defined in CCDEFINES environment variable         */

#if (defined (DBIO_ODBC))
    /*  Okay, use ODBC                                                       */
#elif (defined (DBIO_MYSQL))
    /*  Okay, use MySQL                                                      */
#elif (defined (DBIO_ORACLE))
    /*  Okay, use Oracle                                                     */
#elif (defined (DBIO_DB2))
    /*  Okay, use IBM/DB2                                                    */
#elif (defined (DBIO_XML))
    /*  Okay, use XML simulated database                                     */
#else
#   define DBIO_NONE
#endif

/* Type of Database server                                                   */

#define DB_TYPE_NONE           0
#define DB_TYPE_ODBC           1
#define DB_TYPE_ORACLE         2
#define DB_TYPE_DB2            3
#define DB_TYPE_INFORMIX       4
#define DB_TYPE_SYBASE         5
#define DB_TYPE_SQLSERV        6
#define DB_TYPE_MYSQL          7
#define DB_TYPE_POSTGRES       8
#define DB_TYPE_XML            9

#define DB_TYPE_MAX            10

#define GOTO_NEXT_RECORD       99999
#define ERR_MSG_SIZE           300
#define ERR_CODE_SIZE          20

#define COMMON_DBIO_CTX                                                      \
    long               connect_id;      /* Connection ID                   */\
    free_table_handle *free_handle;     /* Handle to free table resource   */   


typedef void (free_table_handle) (void *);

/* Error structure                                                           */

typedef struct
{
    int  code;                          /* Error code ( 0 = NO ERROR)        */
    char code_msg [ERR_CODE_SIZE];      /* Message code                      */
    char message  [ERR_MSG_SIZE];       /* Error message                     */
    int  parse_offset;                  /* Parse error offset                */
    int  nb_rows;                       /* number of rows processed          */
} DBIO_ERR;


/* All feedback type                                                         */

enum {
    OK                    = 0,
    HARD_ERROR            = 1,
    ILLEGAL_OPERATION     = 2,
    ILLEGAL_MODE          = 3,
    RECORD_NOT_PRESENT    = 4,
    DUPLICATE_RECORD      = 5,
    ILLEGAL_FILE_USAGE    = 6,
    RECORD_LOCKED         = 7,
    RECORD_CHANGED        = 8,
    RECORD_INTEGRITY      = 9,
    INVALID_SEARCH_KEY    = 10,
    NOT_CONNECTED         = 11
};

/* Position mode                                                             */

enum {
    THIS_RECORD           = 0,
    EQUAL_TO              = 1,
    GREATER_OR_EQUAL      = 2,
    GREATER_THAN          = 3,
    LESS_THAN             = 4,
    LESS_THAN_OR_EQUAL    = 5,
    NEXT_RECORD           = 6,
    PRIOR_RECORD          = 7,
    LAST_RECORD           = 8,
    FIRST_RECORD          = 9
};

/* KEY selector                                                              */

enum {
    PRIMARY               = 0,
    ALTERNATE_A           = 1,
    ALTERNATE_B           = 2,
    ALTERNATE_C           = 3,
    ALTERNATE_D           = 4,
    ALTERNATE_E           = 5,
    ALTERNATE_F           = 6,
    ALTERNATE_G           = 7,
    ALTERNATE_H           = 8,
    ALTERNATE_I           = 9,
    ALTERNATE_J           = 10,
    ALTERNATE_K           = 11,
    ALTERNATE_L           = 12,
    ALTERNATE_M           = 13,
    ALTERNATE_N           = 14,
    ALTERNATE_O           = 15,
    ALTERNATE_P           = 16,
    ALTERNATE_Q           = 17,
    ALTERNATE_R           = 18,
    ALTERNATE_S           = 19,
    ALTERNATE_T           = 20,
    ALTERNATE_U           = 21,
    ALTERNATE_V           = 22,
    ALTERNATE_W           = 23,
    ALTERNATE_X           = 24,
    ALTERNATE_Y           = 25,
    ALTERNATE_Z           = 26,
    ALTERNATE_ERROR       = 27
};

#ifdef __cplusplus
extern "C" {
#endif

extern long
    current_connect_id [DB_TYPE_MAX];

Bool      dbio_connect       (char *db_name, char *user, char *pwd, char *extra,
                              Bool set_default, dbyte db_type);
void     *dbio_get_handle    (dbyte db_type, char *table, char *connect_name, 
                              long connect_id);
void      dbio_disconnect    (void);
int       dbio_commit        (void);
int       dbio_rollback      (void);
DBIO_ERR *dbio_get_error     (void);
int       dbio_error_code    (void);
char     *dbio_error_message (void);
dbyte     get_db_type        (char *db_type_name);

#ifdef __cplusplus
}
#endif

#endif
