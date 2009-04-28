/*==========================================================
 *                                                          
 *  version.h - version information for Xitami Administration Console  
 *                                                          
 *  Should be the last file included in parent source program.
 *  This file is generated by Boom at configuration time.   
 *  Copyright (c) 1991-2003 iMatix Corporation
 *==========================================================*/

#undef  VERSION         /*  Scrap any previous definitions  */
#undef  PRODUCT         
#undef  COPYRIGHT       
#undef  BUILDDATE       
#undef  BUILDMODEL      
#define VERSION         "2.5"
#define PRODUCT         "Xitami Administration Console/2.5"
#define COPYRIGHT       "Copyright (c) 1991-2003 iMatix Corporation"
#define BUILDDATE       "2004/07/22 17:51:37"
#define BUILDMODEL      "Debug release for internal use only"
/*  Embed the version information in the resulting binary   */
char *xac_version_start = "VeRsIoNsTaRt:xac";
char *xac_version = VERSION;
char *xac_product = PRODUCT;
char *xac_copyright = COPYRIGHT;
char *xac_builddate = BUILDDATE;
char *xac_buildmodel = BUILDMODEL;
char *xac_version_end = "VeRsIoNeNd:xac";