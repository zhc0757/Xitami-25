/*---------------------------------------------------------------------------
 *  xiadm01.h - HTML form definition
 *
 *  Generated 2004/07/22, 16:52:24 by fxgen 3.1
 *  See Studio on-line help pages at <http://www.imatix.com>.
 *---------------------------------------------------------------------------*/

#ifndef __FORM_XIADM01__
#define __FORM_XIADM01__

#include "sfl.h"
#include "formio.h"


/*  Constants defining size of tables, etc.                                  */

#define XIADM01_MESSAGE_TO_USER             0

/*  This table contains each block in the form                               */

static byte xiadm01_blocks [] = {
    /*  Cache-control: no-cache                                              */
    0, 25, 0, 'C', 'a', 'c', 'h', 'e', 45, 'c', 'o', 'n', 't', 'r', 'o',
    'l', ':', 32, 'n', 'o', 45, 'c', 'a', 'c', 'h', 'e', 10,
    /*  Expires: 0                                                           */
    0, 12, 0, 'E', 'x', 'p', 'i', 'r', 'e', 's', ':', 32, '0', 10,
    /*                                                                       */
    0, 2, 0, 10,
    /*  <HTML>                                                               */
    0, 8, 0, '<', 'H', 'T', 'M', 'L', '>', 10,
    /*  <HEAD><TITLE>Xitami Administration</TITLE>                           */
    0, 44, 0, '<', 'H', 'E', 'A', 'D', '>', '<', 'T', 'I', 'T', 'L',
    'E', '>', 'X', 'i', 't', 'a', 'm', 'i', 32, 'A', 'd', 'm', 'i', 'n',
    'i', 's', 't', 'r', 'a', 't', 'i', 'o', 'n', '<', '/', 'T', 'I',
    'T', 'L', 'E', '>', 10,
    /*  <script type="text/javascript">                                      */
    0, 33, 0, '<', 's', 'c', 'r', 'i', 'p', 't', 32, 't', 'y', 'p', 'e',
    '=', '"', 't', 'e', 'x', 't', '/', 'j', 'a', 'v', 'a', 's', 'c',
    'r', 'i', 'p', 't', '"', '>', 10,
    /*  function show(img,show) {    ... forms[0].#(_focus).focus();}        */
    1, 228, 0, 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', 32, 's', 'h',
    'o', 'w', '(', 'i', 'm', 'g', ',', 's', 'h', 'o', 'w', ')', 32, '{',
    10, 32, 32, 32, 32, 'i', 'f', 32, '(', 'd', 'o', 'c', 'u', 'm', 'e',
    'n', 't', '.', 'i', 'm', 'a', 'g', 'e', 's', ')', 10, 32, 32, 32,
    32, 32, 32, 32, 32, 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', '[',
    'i', 'm', 'g', ']', '.', 's', 'r', 'c', 32, '=', 32, 's', 'h', 'o',
    'w', ';', 10, '}', 10, 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', 32,
    's', 'u', 'b', 'm', 'i', 't', '(', 'a', 'r', 'g', 'u', 'm', 'e',
    'n', 't', 's', ')', 32, '{', 10, 32, 32, 32, 32, 'd', 'o', 'c', 'u',
    'm', 'e', 'n', 't', '.', 'f', 'o', 'r', 'm', 's', '[', '0', ']',
    '.', 'j', 's', 'a', 'c', 't', 'i', 'o', 'n', '.', 'v', 'a', 'l',
    'u', 'e', 32, '=', 32, 'a', 'r', 'g', 'u', 'm', 'e', 'n', 't', 's',
    ';', 10, 32, 32, 32, 32, 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't',
    '.', 'f', 'o', 'r', 'm', 's', '[', '0', ']', '.', 's', 'u', 'b',
    'm', 'i', 't', '(', ')', ';', 10, '}', 10, 'f', 'u', 'n', 'c', 't',
    'i', 'o', 'n', 32, 's', 'u', 'b', 'c', 'o', 'n', 'f', '(', 'a', 'r',
    'g', 'u', 'm', 'e', 'n', 't', 's', ',', 'm', 'e', 's', 's', 'a',
    'g', 'e', ')', 32, '{', 10, 32, 32, 32, 32, 'i', 'f', 32, '(', 'm',
    'e', 's', 's', 'a', 'g', 'e', 32, '=', '=', 32, 39, 39, 32, '|',
    '|', 32, 'c', 'o', 'n', 'f', 'i', 'r', 'm', 32, '(', 'm', 'e', 's',
    's', 'a', 'g', 'e', ')', ')', 32, '{', 10, 32, 32, 32, 32, 32, 32,
    32, 32, 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', '.', 'f', 'o', 'r',
    'm', 's', '[', '0', ']', '.', 'j', 's', 'a', 'c', 't', 'i', 'o',
    'n', '.', 'v', 'a', 'l', 'u', 'e', 32, '=', 32, 'a', 'r', 'g', 'u',
    'm', 'e', 'n', 't', 's', ';', 10, 32, 32, 32, 32, 32, 32, 32, 32,
    'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', '.', 'f', 'o', 'r', 'm',
    's', '[', '0', ']', '.', 's', 'u', 'b', 'm', 'i', 't', '(', ')',
    ';', 10, 32, 32, 32, 32, '}', 10, '}', 10, 'f', 'u', 'n', 'c', 't',
    'i', 'o', 'n', 32, 'f', 'o', 'c', 'u', 's', '(', ')', 32, '{', 10,
    32, 32, 32, 32, 'i', 'f', 32, '(', '"', '#', '(', '_', 'f', 'o',
    'c', 'u', 's', ')', '"', 32, '!', '=', 32, '"', 'j', 's', 'a', 'c',
    't', 'i', 'o', 'n', '"', ')', 10, 32, 32, 32, 32, 32, 32, 32, 32,
    'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', '.', 'f', 'o', 'r', 'm',
    's', '[', '0', ']', '.', '#', '(', '_', 'f', 'o', 'c', 'u', 's',
    ')', '.', 'f', 'o', 'c', 'u', 's', '(', ')', ';', 10, '}', 10,
    /*  </script>                                                            */
    0, 11, 0, '<', '/', 's', 'c', 'r', 'i', 'p', 't', '>', 10,
    /*  </HEAD>                                                              */
    0, 9, 0, '<', '/', 'H', 'E', 'A', 'D', '>', 10,
    /*  <BODY onLoad="focus()" style ... ns-serif" BGCOLOR="#87CEFA">        */
    0, 75, 0, '<', 'B', 'O', 'D', 'Y', 32, 'o', 'n', 'L', 'o', 'a', 'd',
    '=', '"', 'f', 'o', 'c', 'u', 's', '(', ')', '"', 32, 's', 't', 'y',
    'l', 'e', '=', '"', 'f', 'o', 'n', 't', 45, 'f', 'a', 'm', 'i', 'l',
    'y', ':', 32, 's', 'a', 'n', 's', 45, 's', 'e', 'r', 'i', 'f', '"',
    32, 'B', 'G', 'C', 'O', 'L', 'O', 'R', '=', '"', '#', '8', '7', 'C',
    'E', 'F', 'A', '"', '>', 10,
    /*  <SCRIPT LANGUAGE="JavaScript">                                       */
    0, 32, 0, '<', 'S', 'C', 'R', 'I', 'P', 'T', 32, 'L', 'A', 'N', 'G',
    'U', 'A', 'G', 'E', '=', '"', 'J', 'a', 'v', 'a', 'S', 'c', 'r',
    'i', 'p', 't', '"', '>', 10,
    /*  function show(img,show) {    ... ent.forms[0].submit();    }}        */
    1, 128, 0, 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', 32, 's', 'h',
    'o', 'w', '(', 'i', 'm', 'g', ',', 's', 'h', 'o', 'w', ')', 32, '{',
    10, 32, 32, 32, 32, 'i', 'f', 32, '(', 'd', 'o', 'c', 'u', 'm', 'e',
    'n', 't', '.', 'i', 'm', 'a', 'g', 'e', 's', ')', 10, 32, 32, 32,
    32, 32, 32, 32, 32, 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', '[',
    'i', 'm', 'g', ']', '.', 's', 'r', 'c', 32, '=', 32, 's', 'h', 'o',
    'w', ';', 10, '}', 10, 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', 32,
    's', 'u', 'b', 'f', 'o', 'r', 'm', '(', 'a', 'r', 'g', 'u', 'm',
    'e', 'n', 't', 's', ')', 32, '{', 10, 32, 32, 32, 32, 'd', 'o', 'c',
    'u', 'm', 'e', 'n', 't', '.', 'f', 'o', 'r', 'm', 's', '[', '0',
    ']', '.', 'j', 's', 'a', 'c', 't', 'i', 'o', 'n', '.', 'v', 'a',
    'l', 'u', 'e', 32, '=', 32, 'a', 'r', 'g', 'u', 'm', 'e', 'n', 't',
    's', ';', 10, 32, 32, 32, 32, 'd', 'o', 'c', 'u', 'm', 'e', 'n',
    't', '.', 'f', 'o', 'r', 'm', 's', '[', '0', ']', '.', 's', 'u',
    'b', 'm', 'i', 't', '(', ')', ';', 10, '}', 10, 'f', 'u', 'n', 'c',
    't', 'i', 'o', 'n', 32, 's', 'u', 'b', 'c', 'o', 'n', 'f', '(', 'a',
    'r', 'g', 'u', 'm', 'e', 'n', 't', 's', ',', 'm', 'e', 's', 's',
    'a', 'g', 'e', ')', 32, '{', 10, 32, 32, 32, 32, 'i', 'f', 32, '(',
    'm', 'e', 's', 's', 'a', 'g', 'e', 32, '=', '=', 32, 39, 39, 32,
    '|', '|', 32, 'c', 'o', 'n', 'f', 'i', 'r', 'm', 32, '(', 'm', 'e',
    's', 's', 'a', 'g', 'e', ')', ')', 32, '{', 10, 32, 32, 32, 32, 32,
    32, 32, 32, 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', '.', 'f', 'o',
    'r', 'm', 's', '[', '0', ']', '.', 'j', 's', 'a', 'c', 't', 'i',
    'o', 'n', '.', 'v', 'a', 'l', 'u', 'e', 32, '=', 32, 'a', 'r', 'g',
    'u', 'm', 'e', 'n', 't', 's', ';', 10, 32, 32, 32, 32, 32, 32, 32,
    32, 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', '.', 'f', 'o', 'r', 'm',
    's', '[', '0', ']', '.', 's', 'u', 'b', 'm', 'i', 't', '(', ')',
    ';', 10, 32, 32, 32, 32, '}', 10, '}', 10,
    /*  </SCRIPT>                                                            */
    0, 11, 0, '<', '/', 'S', 'C', 'R', 'I', 'P', 'T', '>', 10,
    /*  <TABLE CELLSPACING=0 CELLPADDING=0 WIDTH=100%>                       */
    0, 48, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'C', 'E', 'L', 'L', 'S',
    'P', 'A', 'C', 'I', 'N', 'G', '=', '0', 32, 'C', 'E', 'L', 'L', 'P',
    'A', 'D', 'D', 'I', 'N', 'G', '=', '0', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '1', '0', '0', '%', '>', 10,
    /*  <FORM METHOD=POST ACTION="#(proto)#(host)#(uri)">                    */
    0, 51, 0, '<', 'F', 'O', 'R', 'M', 32, 'M', 'E', 'T', 'H', 'O', 'D',
    '=', 'P', 'O', 'S', 'T', 32, 'A', 'C', 'T', 'I', 'O', 'N', '=', '"',
    '#', '(', 'p', 'r', 'o', 't', 'o', ')', '#', '(', 'h', 'o', 's',
    't', ')', '#', '(', 'u', 'r', 'i', ')', '"', '>', 10,
    /*  <INPUT TYPE=HIDDEN NAME=jsaction VALUE="">                           */
    0, 44, 0, '<', 'I', 'N', 'P', 'U', 'T', 32, 'T', 'Y', 'P', 'E', '=',
    'H', 'I', 'D', 'D', 'E', 'N', 32, 'N', 'A', 'M', 'E', '=', 'j', 's',
    'a', 'c', 't', 'i', 'o', 'n', 32, 'V', 'A', 'L', 'U', 'E', '=', '"',
    '"', '>', 10,
    /*  <TR><TD ALIGN=LEFT>                                                  */
    0, 21, 0, '<', 'T', 'R', '>', '<', 'T', 'D', 32, 'A', 'L', 'I', 'G',
    'N', '=', 'L', 'E', 'F', 'T', '>', 10,
    /*  <IMG SRC="/admin/$left.gif"  ... " TARGET="Help" TITLE="Help"        */
    0, 119, 0, '<', 'I', 'M', 'G', 32, 'S', 'R', 'C', '=', '"', '/',
    'a', 'd', 'm', 'i', 'n', '/', '$', 'l', 'e', 'f', 't', '.', 'g',
    'i', 'f', '"', 32, 'B', 'O', 'R', 'D', 'E', 'R', '=', '0', 32, 'A',
    'L', 'I', 'G', 'N', '=', 'M', 'I', 'D', 'D', 'L', 'E', '>', '<',
    'A', 32, 'H', 'R', 'E', 'F', '=', '"', '/', 'x', 'i', 't', 'a', 'm',
    'i', '/', 'i', 'n', 'd', 'e', 'x', '4', '.', 'h', 't', 'm', '#',
    'c', 'o', 'n', 'f', 'i', 'g', '_', 'm', 'a', 'i', 'n', '"', 32, 'T',
    'A', 'R', 'G', 'E', 'T', '=', '"', 'H', 'e', 'l', 'p', '"', 32, 'T',
    'I', 'T', 'L', 'E', '=', '"', 'H', 'e', 'l', 'p', '"', 10,
    /*  onMouseOver="show('Help','/a ... .gif" BORDER=0 ALIGN=MIDDLE>        */
    0, 236, 0, 'o', 'n', 'M', 'o', 'u', 's', 'e', 'O', 'v', 'e', 'r',
    '=', '"', 's', 'h', 'o', 'w', '(', 39, 'H', 'e', 'l', 'p', 39, ',',
    39, '/', 'a', 'd', 'm', 'i', 'n', '/', 'h', 'e', 'l', 'p', 'a', '.',
    'g', 'i', 'f', 39, ')', '"', 10, 'o', 'n', 'M', 'o', 'u', 's', 'e',
    'O', 'u', 't', '=', '"', 's', 'h', 'o', 'w', '(', 39, 'H', 'e', 'l',
    'p', 39, ',', 39, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'h', 'e',
    'l', 'p', '.', 'g', 'i', 'f', 39, ')', '"', '>', '<', 'I', 'M', 'G',
    32, 'S', 'R', 'C', '=', '"', '/', 'a', 'd', 'm', 'i', 'n', '/', '$',
    'h', 'e', 'l', 'p', '.', 'g', 'i', 'f', '"', 32, 'A', 'L', 'T', '=',
    '"', '"', 32, 'B', 'O', 'R', 'D', 'E', 'R', '=', '0', 32, 'A', 'L',
    'I', 'G', 'N', '=', 'M', 'I', 'D', 'D', 'L', 'E', 32, 'N', 'A', 'M',
    'E', '=', '"', 'H', 'e', 'l', 'p', '"', 10, 'W', 'I', 'D', 'T', 'H',
    '=', '4', '0', 32, 'H', 'E', 'I', 'G', 'H', 'T', '=', '3', '9', '>',
    '<', '/', 'A', '>', '<', 'I', 'M', 'G', 32, 'S', 'R', 'C', '=', '"',
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'r', 'i', 'g', 'h', 't',
    '.', 'g', 'i', 'f', '"', 32, 'B', 'O', 'R', 'D', 'E', 'R', '=', '0',
    32, 'A', 'L', 'I', 'G', 'N', '=', 'M', 'I', 'D', 'D', 'L', 'E', '>',
    10,
    /*  <TD ALIGN=CENTER><FONT SIZE=+1></FONT>                               */
    0, 40, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', '+', '1', '>', '<', '/', 'F', 'O', 'N', 'T', '>', 10,
    /*  <TD ALIGN=RIGHT>                                                     */
    0, 18, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'R', 'I',
    'G', 'H', 'T', '>', 10,
    /*  <IMG SRC="/admin/$left.gif" BORDER=0 ALIGN=MIDDLE>                   */
    0, 6, 1, 1, 5, '0', 0, '2',
    /*  !--ACTION console  LABEL="/a ... LLOVER="/admin/consolea.gif"        */
    0, 63, 20, 2, 1, (byte) ((word) console_event / 256), (byte) ((word)
    console_event & 255), 0, 0, 0, 0, 39, 0, '(', 'c', 'o', 'n', 's',
    'o', 'l', 'e', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'c', 'o',
    'n', 's', 'o', 'l', 'e', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'c', 'o', 'n', 's', 'o', 'l', 'e', 'a', '.', 'g',
    'i', 'f', 0, 0, 0, 0,
    /*  !--ACTION halt  LABEL="/admi ...  ROLLOVER="/admin/halta.gif"        */
    0, 54, 20, 2, 1, (byte) ((word) halt_event / 256), (byte) ((word)
    halt_event & 255), 0, 1, 0, 0, 39, 0, '(', 'h', 'a', 'l', 't', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'h', 'a', 'l', 't', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'h', 'a', 'l',
    't', 'a', '.', 'g', 'i', 'f', 0, 0, 0, 0,
    /*  !--ACTION restart  LABEL="/a ... LLOVER="/admin/restarta.gif"        */
    0, 63, 20, 2, 1, (byte) ((word) restart_event / 256), (byte) ((word)
    restart_event & 255), 0, 2, 0, 0, 39, 0, '(', 'r', 'e', 's', 't',
    'a', 'r', 't', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'r', 'e',
    's', 't', 'a', 'r', 't', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'r', 'e', 's', 't', 'a', 'r', 't', 'a', '.', 'g',
    'i', 'f', 0, 0, 0, 0,
    /*  !--ACTION exit  LABEL="/admi ...  ROLLOVER="/admin/exita.gif"        */
    0, 54, 20, 2, 1, (byte) ((word) exit_event / 256), (byte) ((word)
    exit_event & 255), 0, 3, 0, 0, 39, 0, '(', 'e', 'x', 'i', 't', 0,
    '/', 'a', 'd', 'm', 'i', 'n', '/', '$', 'e', 'x', 'i', 't', '.',
    'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'e', 'x', 'i',
    't', 'a', '.', 'g', 'i', 'f', 0, 0, 0, 0,
    /*  <IMG SRC="/admin/$right.gif" BORDER=0 ALIGN=MIDDLE>                  */
    0, 53, 0, '<', 'I', 'M', 'G', 32, 'S', 'R', 'C', '=', '"', '/', 'a',
    'd', 'm', 'i', 'n', '/', '$', 'r', 'i', 'g', 'h', 't', '.', 'g',
    'i', 'f', '"', 32, 'B', 'O', 'R', 'D', 'E', 'R', '=', '0', 32, 'A',
    'L', 'I', 'G', 'N', '=', 'M', 'I', 'D', 'D', 'L', 'E', '>', 10,
    /*  </TABLE><p>                                                          */
    0, 13, 0, '<', '/', 'T', 'A', 'B', 'L', 'E', '>', '<', 'p', '>', 10,
    /*  <CENTER>                                                             */
    0, 10, 0, '<', 'C', 'E', 'N', 'T', 'E', 'R', '>', 10,
    /*  <TABLE WIDTH="80%" BORDER=0  ... PADDING=0 BGCOLOR="#000080">        */
    0, 76, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '"', '8', '0', '%', '"', 32, 'B', 'O', 'R', 'D', 'E', 'R', '=',
    '0', 32, 'C', 'E', 'L', 'L', 'S', 'P', 'A', 'C', 'I', 'N', 'G', '=',
    '0', 32, 'C', 'E', 'L', 'L', 'P', 'A', 'D', 'D', 'I', 'N', 'G', '=',
    '0', 32, 'B', 'G', 'C', 'O', 'L', 'O', 'R', '=', '"', '#', '0', '0',
    '0', '0', '8', '0', '"', '>', 10,
    /*  <TR><TD COLSPAN=2><HR><CENTER>                                       */
    0, 32, 0, '<', 'T', 'R', '>', '<', 'T', 'D', 32, 'C', 'O', 'L', 'S',
    'P', 'A', 'N', '=', '2', '>', '<', 'H', 'R', '>', '<', 'C', 'E',
    'N', 'T', 'E', 'R', '>', 10,
    /*  <FONT COLOR="#FFFF99"><H1><I ... NAME="TOC1"></A></H1></FONT>        */
    0, 89, 0, '<', 'F', 'O', 'N', 'T', 32, 'C', 'O', 'L', 'O', 'R', '=',
    '"', '#', 'F', 'F', 'F', 'F', '9', '9', '"', '>', '<', 'H', '1',
    '>', '<', 'I', '>', 'X', 'i', 't', 'a', 'm', 'i', 32, 32, 32, 'A',
    'd', 'm', 'i', 'n', 'i', 's', 't', 'r', 'a', 't', 'i', 'o', 'n',
    '<', '/', 'I', '>', '<', 'A', 32, 'N', 'A', 'M', 'E', '=', '"', 'T',
    'O', 'C', '1', '"', '>', '<', '/', 'A', '>', '<', '/', 'H', '1',
    '>', '<', '/', 'F', 'O', 'N', 'T', '>', 10,
    /*  </CENTER><HR><TR><TD VALIGN=TOP NOWRAP>                              */
    0, 41, 0, '<', '/', 'C', 'E', 'N', 'T', 'E', 'R', '>', '<', 'H',
    'R', '>', '<', 'T', 'R', '>', '<', 'T', 'D', 32, 'V', 'A', 'L', 'I',
    'G', 'N', '=', 'T', 'O', 'P', 32, 'N', 'O', 'W', 'R', 'A', 'P', '>',
    10,
    /*  &nbsp;                                                               */
    0, 8, 0, '&', 'n', 'b', 's', 'p', ';', 10,
    /*  !--ACTION menu_config  LABEL ... ROLLOVER="/admin/clicka.gif"        */
    0, 62, 20, 2, 1, (byte) ((word) config_event / 256), (byte) ((word)
    config_event & 255), 0, 4, 0, 0, 0, 0, 0, 'm', 'e', 'n', 'u', '_',
    'c', 'o', 'n', 'f', 'i', 'g', 0, '/', 'a', 'd', 'm', 'i', 'n', '/',
    'c', 'l', 'i', 'c', 'k', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'c', 'l', 'i', 'c', 'k', 'a', '.', 'g', 'i', 'f', 0,
    0, 0, 0,
    /*  &nbsp;<FONT COLOR="#FFFF99"> ... /FONT>&nbsp;&nbsp;<BR>&nbsp;        */
    0, 74, 0, '&', 'n', 'b', 's', 'p', ';', '<', 'F', 'O', 'N', 'T', 32,
    'C', 'O', 'L', 'O', 'R', '=', '"', '#', 'F', 'F', 'F', 'F', '9',
    '9', '"', '>', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 't',
    'i', 'o', 'n', 32, '<', '/', 'F', 'O', 'N', 'T', '>', '&', 'n', 'b',
    's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', '<', 'B', 'R', '>', 10,
    '&', 'n', 'b', 's', 'p', ';', 10,
    /*  !--ACTION menu_hosts  LABEL= ... ROLLOVER="/admin/clicka.gif"        */
    0, 61, 20, 2, 1, (byte) ((word) hosts_event / 256), (byte) ((word)
    hosts_event & 255), 0, 5, 0, 0, 0, 0, 0, 'm', 'e', 'n', 'u', '_',
    'h', 'o', 's', 't', 's', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'c',
    'l', 'i', 'c', 'k', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i',
    'n', '/', 'c', 'l', 'i', 'c', 'k', 'a', '.', 'g', 'i', 'f', 0, 0, 0,
    0,
    /*  &nbsp;<FONT COLOR="#FFFF99"> ... /FONT>&nbsp;&nbsp;<BR>&nbsp;        */
    0, 74, 0, '&', 'n', 'b', 's', 'p', ';', '<', 'F', 'O', 'N', 'T', 32,
    'C', 'O', 'L', 'O', 'R', '=', '"', '#', 'F', 'F', 'F', 'F', '9',
    '9', '"', '>', 'V', 'i', 'r', 't', 'u', 'a', 'l', 32, 'h', 'o', 's',
    't', 's', 32, '<', '/', 'F', 'O', 'N', 'T', '>', '&', 'n', 'b', 's',
    'p', ';', '&', 'n', 'b', 's', 'p', ';', '<', 'B', 'R', '>', 10, '&',
    'n', 'b', 's', 'p', ';', 10,
    /*  !--ACTION menu_console  LABE ... ROLLOVER="/admin/clicka.gif"        */
    0, 63, 20, 2, 1, (byte) ((word) console_event / 256), (byte) ((word)
    console_event & 255), 0, 6, 0, 0, 0, 0, 0, 'm', 'e', 'n', 'u', '_',
    'c', 'o', 'n', 's', 'o', 'l', 'e', 0, '/', 'a', 'd', 'm', 'i', 'n',
    '/', 'c', 'l', 'i', 'c', 'k', '.', 'g', 'i', 'f', 0, '/', 'a', 'd',
    'm', 'i', 'n', '/', 'c', 'l', 'i', 'c', 'k', 'a', '.', 'g', 'i',
    'f', 0, 0, 0, 0,
    /*  &nbsp;<FONT COLOR="#FFFF99"> ... /FONT>&nbsp;&nbsp;<BR>&nbsp;        */
    0, 75, 0, '&', 'n', 'b', 's', 'p', ';', '<', 'F', 'O', 'N', 'T', 32,
    'C', 'O', 'L', 'O', 'R', '=', '"', '#', 'F', 'F', 'F', 'F', '9',
    '9', '"', '>', 'S', 'e', 'r', 'v', 'e', 'r', 32, 'C', 'o', 'n', 's',
    'o', 'l', 'e', 32, '<', '/', 'F', 'O', 'N', 'T', '>', '&', 'n', 'b',
    's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', '<', 'B', 'R', '>', 10,
    '&', 'n', 'b', 's', 'p', ';', 10,
    /*  !--ACTION menu_wizard  LABEL ... ROLLOVER="/admin/clicka.gif"        */
    0, 62, 20, 2, 1, (byte) ((word) wizard_event / 256), (byte) ((word)
    wizard_event & 255), 0, 7, 0, 0, 0, 0, 0, 'm', 'e', 'n', 'u', '_',
    'w', 'i', 'z', 'a', 'r', 'd', 0, '/', 'a', 'd', 'm', 'i', 'n', '/',
    'c', 'l', 'i', 'c', 'k', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm',
    'i', 'n', '/', 'c', 'l', 'i', 'c', 'k', 'a', '.', 'g', 'i', 'f', 0,
    0, 0, 0,
    /*  &nbsp;<FONT COLOR="#FFFF99"> ... /FONT>&nbsp;&nbsp;<BR>&nbsp;        */
    0, 73, 0, '&', 'n', 'b', 's', 'p', ';', '<', 'F', 'O', 'N', 'T', 32,
    'C', 'O', 'L', 'O', 'R', '=', '"', '#', 'F', 'F', 'F', 'F', '9',
    '9', '"', '>', 'V', 'H', 'o', 's', 't', 32, 'W', 'i', 'z', 'a', 'r',
    'd', 32, '<', '/', 'F', 'O', 'N', 'T', '>', '&', 'n', 'b', 's', 'p',
    ';', '&', 'n', 'b', 's', 'p', ';', '<', 'B', 'R', '>', 10, '&', 'n',
    'b', 's', 'p', ';', 10,
    /*  !--ACTION menu_restart  LABE ... ROLLOVER="/admin/clicka.gif"        */
    0, 63, 20, 2, 1, (byte) ((word) restart_event / 256), (byte) ((word)
    restart_event & 255), 0, 8, 0, 0, 0, 0, 0, 'm', 'e', 'n', 'u', '_',
    'r', 'e', 's', 't', 'a', 'r', 't', 0, '/', 'a', 'd', 'm', 'i', 'n',
    '/', 'c', 'l', 'i', 'c', 'k', '.', 'g', 'i', 'f', 0, '/', 'a', 'd',
    'm', 'i', 'n', '/', 'c', 'l', 'i', 'c', 'k', 'a', '.', 'g', 'i',
    'f', 0, 0, 0, 0,
    /*  &nbsp;<FONT COLOR="#FFFF99"> ... /FONT>&nbsp;&nbsp;<BR>&nbsp;        */
    0, 75, 0, '&', 'n', 'b', 's', 'p', ';', '<', 'F', 'O', 'N', 'T', 32,
    'C', 'O', 'L', 'O', 'R', '=', '"', '#', 'F', 'F', 'F', 'F', '9',
    '9', '"', '>', 'R', 'e', 's', 't', 'a', 'r', 't', 32, 'S', 'e', 'r',
    'v', 'e', 'r', 32, '<', '/', 'F', 'O', 'N', 'T', '>', '&', 'n', 'b',
    's', 'p', ';', '&', 'n', 'b', 's', 'p', ';', '<', 'B', 'R', '>', 10,
    '&', 'n', 'b', 's', 'p', ';', 10,
    /*  !--ACTION menu_halt  LABEL=" ... ROLLOVER="/admin/clicka.gif"        */
    0, 60, 20, 2, 1, (byte) ((word) halt_event / 256), (byte) ((word)
    halt_event & 255), 0, 9, 0, 0, 0, 0, 0, 'm', 'e', 'n', 'u', '_',
    'h', 'a', 'l', 't', 0, '/', 'a', 'd', 'm', 'i', 'n', '/', 'c', 'l',
    'i', 'c', 'k', '.', 'g', 'i', 'f', 0, '/', 'a', 'd', 'm', 'i', 'n',
    '/', 'c', 'l', 'i', 'c', 'k', 'a', '.', 'g', 'i', 'f', 0, 0, 0, 0,
    /*  &nbsp;<FONT COLOR="#FFFF99"> ... rver </FONT>&nbsp;&nbsp;<BR>        */
    0, 65, 0, '&', 'n', 'b', 's', 'p', ';', '<', 'F', 'O', 'N', 'T', 32,
    'C', 'O', 'L', 'O', 'R', '=', '"', '#', 'F', 'F', 'F', 'F', '9',
    '9', '"', '>', 'H', 'a', 'l', 't', 32, 'S', 'e', 'r', 'v', 'e', 'r',
    32, '<', '/', 'F', 'O', 'N', 'T', '>', '&', 'n', 'b', 's', 'p', ';',
    '&', 'n', 'b', 's', 'p', ';', '<', 'B', 'R', '>', 10,
    /*  <P>&nbsp;<TD VALIGN=TOP BGCOLOR="#CCFFFF">                           */
    0, 44, 0, '<', 'P', '>', '&', 'n', 'b', 's', 'p', ';', '<', 'T',
    'D', 32, 'V', 'A', 'L', 'I', 'G', 'N', '=', 'T', 'O', 'P', 32, 'B',
    'G', 'C', 'O', 'L', 'O', 'R', '=', '"', '#', 'C', 'C', 'F', 'F',
    'F', 'F', '"', '>', 10,
    /*  <UL>                                                                 */
    0, 6, 0, '<', 'U', 'L', '>', 10,
    /*  <LI>The Xitami web-based adm ... eens let you manage your web        */
    0, 73, 0, '<', 'L', 'I', '>', 'T', 'h', 'e', 32, 'X', 'i', 't', 'a',
    'm', 'i', 32, 'w', 'e', 'b', 45, 'b', 'a', 's', 'e', 'd', 32, 'a',
    'd', 'm', 'i', 'n', 'i', 's', 't', 'r', 'a', 't', 'i', 'o', 'n', 32,
    's', 'c', 'r', 'e', 'e', 'n', 's', 32, 'l', 'e', 't', 32, 'y', 'o',
    'u', 32, 'm', 'a', 'n', 'a', 'g', 'e', 32, 'y', 'o', 'u', 'r', 32,
    'w', 'e', 'b', 10,
    /*  server from anywhere on the  ... rict it to local accessonly.        */
    0, 151, 0, 's', 'e', 'r', 'v', 'e', 'r', 32, 'f', 'r', 'o', 'm', 32,
    'a', 'n', 'y', 'w', 'h', 'e', 'r', 'e', 32, 'o', 'n', 32, 't', 'h',
    'e', 32, 'I', 'n', 't', 'e', 'r', 'n', 'e', 't', '.', 32, 32, 'I',
    'f', 32, 'y', 'o', 'u', 32, 'd', 'o', 32, 'n', 'o', 't', 32, 'w',
    'a', 'n', 't', 32, 't', 'o', 32, 'a', 'l', 'l', 'o', 'w', 32, 't',
    'h', 'i', 's', 10, 'a', 'c', 'c', 'e', 's', 's', ',', 32, 'y', 'o',
    'u', 32, 'c', 'a', 'n', 32, 'd', 'i', 's', 'a', 'b', 'l', 'e', 32,
    't', 'h', 'e', 32, '/', 'a', 'd', 'm', 'i', 'n', 32, 'a', 'l', 'i',
    'a', 's', 32, 'o', 'r', 32, 'r', 'e', 's', 't', 'r', 'i', 'c', 't',
    32, 'i', 't', 32, 't', 'o', 32, 'l', 'o', 'c', 'a', 'l', 32, 'a',
    'c', 'c', 'e', 's', 's', 10, 'o', 'n', 'l', 'y', '.', 10,
    /*  <LI>Don't use the browser's  ...  Instead, navigate using the        */
    0, 71, 0, '<', 'L', 'I', '>', 'D', 'o', 'n', 39, 't', 32, 'u', 's',
    'e', 32, 't', 'h', 'e', 32, 'b', 'r', 'o', 'w', 's', 'e', 'r', 39,
    's', 32, 'b', 'a', 'c', 'k', 32, 'b', 'u', 't', 't', 'o', 'n', '.',
    32, 32, 'I', 'n', 's', 't', 'e', 'a', 'd', ',', 32, 'n', 'a', 'v',
    'i', 'g', 'a', 't', 'e', 32, 'u', 's', 'i', 'n', 'g', 32, 't', 'h',
    'e', 10,
    /*  icons.  Click on 'Save' when ... l have toclick 'Save' twice.        */
    0, 165, 0, 'i', 'c', 'o', 'n', 's', '.', 32, 32, 'C', 'l', 'i', 'c',
    'k', 32, 'o', 'n', 32, 39, 'S', 'a', 'v', 'e', 39, 32, 'w', 'h',
    'e', 'n', 32, 'y', 'o', 'u', 32, 'h', 'a', 'v', 'e', 32, 'm', 'a',
    'd', 'e', 32, 'c', 'h', 'a', 'n', 'g', 'e', 's', ',', 32, 'a', 'n',
    'd', 32, 't', 'h', 'e', 32, 39, 'B', 'a', 'c', 'k', 39, 32, 'i',
    'c', 'o', 'n', 10, 't', 'o', 32, 'l', 'o', 's', 'e', 32, 'c', 'h',
    'a', 'n', 'g', 'e', 's', '.', 32, 32, 'I', 'f', 32, 'y', 'o', 'u',
    32, 'm', 'a', 'k', 'e', 32, 'c', 'h', 'a', 'n', 'g', 'e', 's', 32,
    'i', 'n', 32, 'd', 'e', 't', 'a', 'i', 'l', 32, 'p', 'a', 'g', 'e',
    's', ',', 32, 'y', 'o', 'u', 32, 'w', 'i', 'l', 'l', 32, 'h', 'a',
    'v', 'e', 32, 't', 'o', 10, 'c', 'l', 'i', 'c', 'k', 32, 39, 'S',
    'a', 'v', 'e', 39, 32, 't', 'w', 'i', 'c', 'e', '.', 10,
    /*  <LI>If you make changes to t ... s you should click 'Restart'        */
    0, 73, 0, '<', 'L', 'I', '>', 'I', 'f', 32, 'y', 'o', 'u', 32, 'm',
    'a', 'k', 'e', 32, 'c', 'h', 'a', 'n', 'g', 'e', 's', 32, 't', 'o',
    32, 't', 'h', 'e', 32, 'v', 'i', 'r', 't', 'u', 'a', 'l', 32, 'h',
    'o', 's', 't', 's', 32, 'y', 'o', 'u', 32, 's', 'h', 'o', 'u', 'l',
    'd', 32, 'c', 'l', 'i', 'c', 'k', 32, 39, 'R', 'e', 's', 't', 'a',
    'r', 't', 39, 10,
    /*  to restart the web server.                                           */
    0, 28, 0, 't', 'o', 32, 'r', 'e', 's', 't', 'a', 'r', 't', 32, 't',
    'h', 'e', 32, 'w', 'e', 'b', 32, 's', 'e', 'r', 'v', 'e', 'r', '.',
    10,
    /*  </UL>                                                                */
    0, 7, 0, '<', '/', 'U', 'L', '>', 10,
    /*  </TABLE>                                                             */
    0, 10, 0, '<', '/', 'T', 'A', 'B', 'L', 'E', '>', 10,
    /*  !--FIELD TEXTUAL message_to_user SIZE=120                            */
    0, 26, 10, 4, 1, 0, 0, 'x', 0, 'x', 'm', 'e', 's', 's', 'a', 'g',
    'e', '_', 't', 'o', '_', 'u', 's', 'e', 'r', 0, 0, 0,
    /*  </FORM>                                                              */
    0, 9, 0, '<', '/', 'F', 'O', 'R', 'M', '>', 10,
    /*  <SCRIPT LANGUAGE="JavaScript">                                       */
    0, 4, 1, 0, 2, 211,
    /*      if ("#(_focus)" != "jsac ... .forms[0].#(_focus).focus();        */
    0, 112, 0, 32, 32, 32, 32, 'i', 'f', 32, '(', '"', '#', '(', '_',
    'f', 'o', 'c', 'u', 's', ')', '"', 32, '!', '=', 32, '"', 'j', 's',
    'a', 'c', 't', 'i', 'o', 'n', '"', 32, '&', '&', 32, 'd', 'o', 'c',
    'u', 'm', 'e', 'n', 't', '.', 'f', 'o', 'r', 'm', 's', '[', '0',
    ']', '.', '#', '(', '_', 'f', 'o', 'c', 'u', 's', ')', ')', 10, 32,
    32, 32, 32, 32, 32, 32, 32, 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't',
    '.', 'f', 'o', 'r', 'm', 's', '[', '0', ']', '.', '#', '(', '_',
    'f', 'o', 'c', 'u', 's', ')', '.', 'f', 'o', 'c', 'u', 's', '(',
    ')', ';', 10,
    /*  </SCRIPT>                                                            */
    0, 4, 1, 0, 4, 'w',
    /*  <HR>                                                                 */
    0, 6, 0, '<', 'H', 'R', '>', 10,
    /*  <TABLE WIDTH=100%><TR>                                               */
    0, 24, 0, '<', 'T', 'A', 'B', 'L', 'E', 32, 'W', 'I', 'D', 'T', 'H',
    '=', '1', '0', '0', '%', '>', '<', 'T', 'R', '>', 10,
    /*  <TD><IMG SRC="/admin/imatix.gif"                                     */
    0, 34, 0, '<', 'T', 'D', '>', '<', 'I', 'M', 'G', 32, 'S', 'R', 'C',
    '=', '"', '/', 'a', 'd', 'm', 'i', 'n', '/', 'i', 'm', 'a', 't',
    'i', 'x', '.', 'g', 'i', 'f', '"', 10,
    /*  WIDTH=96 HEIGHT=41>                                                  */
    0, 21, 0, 'W', 'I', 'D', 'T', 'H', '=', '9', '6', 32, 'H', 'E', 'I',
    'G', 'H', 'T', '=', '4', '1', '>', 10,
    /*  <TD ALIGN=CENTER><FONT SIZE= ... 1996-2002 iMatix Corporation        */
    0, 77, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'C', 'E',
    'N', 'T', 'E', 'R', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z',
    'E', '=', 45, '1', '>', 'C', 'o', 'p', 'y', 'r', 'i', 'g', 'h', 't',
    32, '&', '#', '1', '6', '9', 32, '1', '9', '9', '6', 45, '2', '0',
    '0', '2', 32, 'i', 'M', 'a', 't', 'i', 'x', 32, 'C', 'o', 'r', 'p',
    'o', 'r', 'a', 't', 'i', 'o', 'n', 10,
    /*  <BR>Powered by iMatix Studio 2.5                                     */
    0, 34, 0, '<', 'B', 'R', '>', 'P', 'o', 'w', 'e', 'r', 'e', 'd', 32,
    'b', 'y', 32, 'i', 'M', 'a', 't', 'i', 'x', 32, 'S', 't', 'u', 'd',
    'i', 'o', 32, '2', '.', '5', 10,
    /*  <TD ALIGN=RIGHT><FONT SIZE=-1>#(date) #(time)                        */
    0, 47, 0, '<', 'T', 'D', 32, 'A', 'L', 'I', 'G', 'N', '=', 'R', 'I',
    'G', 'H', 'T', '>', '<', 'F', 'O', 'N', 'T', 32, 'S', 'I', 'Z', 'E',
    '=', 45, '1', '>', '#', '(', 'd', 'a', 't', 'e', ')', 32, '#', '(',
    't', 'i', 'm', 'e', ')', 10,
    /*  <BR>#(product) v2.5c2                                                */
    0, 23, 0, '<', 'B', 'R', '>', '#', '(', 'p', 'r', 'o', 'd', 'u',
    'c', 't', ')', 32, 'v', '2', '.', '5', 'c', '2', 10,
    /*  </TABLE>                                                             */
    0, 4, 1, 0, 14, 220,
    /*  </BODY></HTML>                                                       */
    0, 16, 0, '<', '/', 'B', 'O', 'D', 'Y', '>', '<', '/', 'H', 'T',
    'M', 'L', '>', 10,
    0, 0, 0
    };

static FIELD_DEFN xiadm01_fields [] = {
    { 0, 3816, 120 },                   /*  message_to_user                 */
    { 122, 0, 0 },                      /*  -- sentinel --                  */
    };

/*  The data of a form is a list of attributes and fields                    */

typedef struct {
    byte   message_to_user_a    ;
    char   message_to_user      [120 + 1];
    byte   console_a;
    byte   halt_a;
    byte   restart_a;
    byte   exit_a;
    byte   menu_config_a;
    byte   menu_hosts_a;
    byte   menu_console_a;
    byte   menu_wizard_a;
    byte   menu_restart_a;
    byte   menu_halt_a;
    } XIADM01_DATA;

/*  The form definition collects these tables into a header                  */

static FORM_DEFN form_xiadm01 = {
    xiadm01_blocks,
    xiadm01_fields,
    71,                                 /*  Number of blocks in form        */
    1,                                  /*  Number of fields in form        */
    10,                                 /*  Number of actions in form       */
    122,                                /*  Size of fields                  */
    "xiadm01",                          /*  Name of form                    */
    };

#endif                                  /*  End included file               */
