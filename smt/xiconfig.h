/*  ----------------------------------------------------------------<Prolog>-
    Name:       xiconfig.h
    Title:      Defines Xitami configuration table in memory
    Package:    Xitami

    Generated by GSLgen from xiconfig.gsl on 2004/07/22.
 ------------------------------------------------------------------</Prolog>-*/

#ifndef _XICONFIG_INCLUDED
#define _XICONFIG_INCLUDED
    static struct {
        char *name;
        char *value;
    } config_list [] = {

    { "accesslog:", NULL                                                     },
    {   "custom",           ""                                               },
    {   "cycle",            "daily"                                          },
    {   "cycle-arg",        "ac%yy%mm%dd.log"                                },
    {   "cycle-day",        "0"                                              },
    {   "cycle-how",        "rename"                                         },
    {   "cycle-lines",      "0"                                              },
    {   "cycle-size",       "0"                                              },
    {   "cycle-time",       "00:00"                                          },
    {   "enabled",          "1"                                              },
    {   "filename",         "access.log"                                     },
    {   "format",           "CLFX"                                           },
    {   "header",           ""                                               },
    {   "local",            "1"                                              },
    {   "translate",        "0"                                              },

    { "cgi:", NULL                                                           },
    {   "debug",            "0"                                              },
    {   "dirlist",          "0"                                              },
    {   "enabled",          "1"                                              },
    {   "environment",      "1"                                              },
    {   "errlog",           "cgierr.log"                                     },
    {   "form-fields",      "1"                                              },
    {   "form-prefix",      "FORM_"                                          },
    {   "form-query",       "0"                                              },
    {   "http-fields",      "1"                                              },
    {   "http-prefix",      "HTTP_"                                          },
    {   "mixed-url",        "1"                                              },
    {   "monitor",          "200"                                            },
    {   "msdos-style",      "0"                                              },
    {   "passargs",         "0"                                              },
    {   "stdio",            "1"                                              },
    {   "timeout",          "60"                                             },
    {   "wildcard",         "0"                                              },
    {   "workdir",          "-"                                              },

    { "console:", NULL                                                       },
    {   "append",           "0"                                              },
    {   "capture",          "1"                                              },
    {   "filename",         "console.log"                                    },
    {   "javascript",       "1"                                              },
    {   "large-icons",      "1"                                              },
    {   "rate",             "10"                                             },
    {   "refresh",          "0"                                              },
    {   "startup",          "1"                                              },

    { "ddns:", NULL                                                          },
    {   "domain",           "-"                                              },
    {   "enabled",          "0"                                              },
    {   "filename",         "ddnsdef.xml"                                    },
    {   "password",         "-"                                              },
    {   "refresh",          "3600"                                           },
    {   "service",          "localhost"                                      },
    {   "username",         "-"                                              },

    { "errorlog:", NULL                                                      },
    {   "custom",           ""                                               },
    {   "cycle",            "daily"                                          },
    {   "cycle-arg",        "er%yy%mm%dd.log"                                },
    {   "cycle-day",        "0"                                              },
    {   "cycle-how",        "rename"                                         },
    {   "cycle-lines",      "0"                                              },
    {   "cycle-size",       "0"                                              },
    {   "cycle-time",       "00:00"                                          },
    {   "enabled",          "1"                                              },
    {   "filename",         "errors.log"                                     },
    {   "format",           "CLFX"                                           },
    {   "header",           ""                                               },
    {   "local",            "1"                                              },
    {   "translate",        "0"                                              },

    { "ftp:", NULL                                                           },
    {   "data-port",        "20"                                             },
    {   "directory-file",   "ftpdirs.aut"                                    },
    {   "dirsort",          "n"                                              },
    {   "email-check",      "0"                                              },
    {   "enabled",          "1"                                              },
    {   "force-ip",         "0"                                              },
    {   "hard-quota",       "5"                                              },
    {   "http-aliases",     "0"                                              },
    {   "ipaddress",        "*"                                              },
    {   "limit",            "25"                                             },
    {   "login-text",       "@ftplogin.txt"                                  },
    {   "message-script",   "templates/ftpmesg.gsl"                          },
    {   "passiveip",        "main IP address"                                },
    {   "password-case",    "1"                                              },
    {   "pipe",             ""                                               },
    {   "port",             "21"                                             },
    {   "root",             "./ftproot"                                      },
    {   "signoff",          "@ftpadios.txt"                                  },
    {   "soft-quota",       "2.5"                                            },
    {   "timeout",          "300"                                            },
    {   "user-at-host",     "1"                                              },
    {   "user-file",        "ftpusers.aut"                                   },
    {   "webmask",          "*"                                              },
    {   "welcome",          "@ftphello.txt"                                  },

    { "ftperrlog:", NULL                                                     },
    {   "custom",           ""                                               },
    {   "cycle",            "daily"                                          },
    {   "cycle-arg",        "er%yy%mm%dd.log"                                },
    {   "cycle-day",        "0"                                              },
    {   "cycle-how",        "rename"                                         },
    {   "cycle-lines",      "0"                                              },
    {   "cycle-size",       "0"                                              },
    {   "cycle-time",       "00:00"                                          },
    {   "enabled",          "1"                                              },
    {   "filename",         "errors.log"                                     },
    {   "format",           "CLFX"                                           },
    {   "header",           ""                                               },
    {   "local",            "1"                                              },
    {   "translate",        "0"                                              },

    { "ftplog:", NULL                                                        },
    {   "custom",           ""                                               },
    {   "cycle",            "daily"                                          },
    {   "cycle-arg",        "ac%yy%mm%dd.log"                                },
    {   "cycle-day",        "0"                                              },
    {   "cycle-how",        "rename"                                         },
    {   "cycle-lines",      "0"                                              },
    {   "cycle-size",       "0"                                              },
    {   "cycle-time",       "00:00"                                          },
    {   "enabled",          "1"                                              },
    {   "filename",         "access.log"                                     },
    {   "format",           "CLFX"                                           },
    {   "header",           ""                                               },
    {   "local",            "1"                                              },
    {   "translate",        "0"                                              },

    { "lrwp:", NULL                                                          },
    {   "allow-all",        "1"                                              },
    {   "enabled",          "1"                                              },
    {   "port",             "81"                                             },
    {   "webmask",          "local"                                          },

    { "mime:", NULL                                                          },
    /*  Default MIME type                                                    */
    {   "default",          "*/*"                                            },
    /*  Text MIME types                                                      */
    {   ".",                "text/plain"                                     },
    {   "etx",              "text/x-setext"                                  },
    {   "htm",              "text/html"                                      },
    {   "html",             "text/html"                                      },
    {   "htp",              "text/html"                                      },
    {   "rtx",              "text/richtext"                                  },
    {   "tsv",              "text/tab-separated-values"                      },
    {   "txt",              "text/plain"                                     },
    /*  Image MIME types                                                     */
    {   "fh",               "image/x-freehand"                               },
    {   "fh4",              "image/x-freehand"                               },
    {   "fh5",              "image/x-freehand"                               },
    {   "fh7",              "image/x-freehand"                               },
    {   "fhc",              "image/x-freehand"                               },
    {   "gif",              "image/gif"                                      },
    {   "ief",              "image/ief"                                      },
    {   "jpe",              "image/jpeg"                                     },
    {   "jpeg",             "image/jpeg"                                     },
    {   "jpg",              "image/jpeg"                                     },
    {   "pbm",              "image/x-portable-bitmap"                        },
    {   "pgm",              "image/x-portable-graymap"                       },
    {   "png",              "image/png"                                      },
    {   "pnm",              "image/x-portable-anymap"                        },
    {   "ppm",              "image/x-portable-pixmap"                        },
    {   "ras",              "image/x-cmu-raster"                             },
    {   "rgb",              "image/x-rgb"                                    },
    {   "tif",              "image/tiff"                                     },
    {   "tiff",             "image/tiff"                                     },
    {   "xbm",              "image/x-xbitmap"                                },
    {   "xpm",              "image/x-xpixmap"                                },
    {   "xwd",              "image/x-xwindowdump"                            },
    /*  Video MIME types                                                     */
    {   "avi",              "video/msvideo"                                  },
    {   "mov",              "video/quicktime"                                },
    {   "movie",            "video/x-sgi-movie"                              },
    {   "mpe",              "video/mpeg"                                     },
    {   "mpeg",             "video/mpeg"                                     },
    {   "mpg",              "video/mpeg"                                     },
    {   "qt",               "video/quicktime"                                },
    {   "qtv",              "video/quicktime"                                },
    /*  Audio MIME types                                                     */
    {   "aif",              "audio/x-aiff"                                   },
    {   "aifc",             "audio/x-aiff"                                   },
    {   "aiff",             "audio/x-aiff"                                   },
    {   "au",               "audio/basic"                                    },
    {   "m3u",              "audio/mpegurl"                                  },
    {   "mid",              "audio/midi"                                     },
    {   "mp3",              "audio/mpeg"                                     },
    {   "mp3url",           "audio/mpegurl"                                  },
    {   "ra",               "audio/x-realaudio"                              },
    {   "ram",              "audio/x-pn-realaudio"                           },
    {   "rm",               "audio/x-pn-realaudio"                           },
    {   "rmi",              "audio/midi"                                     },
    {   "rpm",              "audio/x-pn-realaudio-plugin"                    },
    {   "snd",              "audio/basic"                                    },
    {   "wav",              "audio/wav"                                      },
    /*  Application MIME types                                               */
    {   "aab",              "application/x-authorware-bin"                   },
    {   "aam",              "application/x-authorware-map"                   },
    {   "aas",              "application/x-authorware-seg"                   },
    {   "ai",               "application/postscript"                         },
    {   "bcpio",            "application/x-bcpio"                            },
    {   "bin",              "application/octet-stream"                       },
    {   "cdf",              "application/x-netcdf"                           },
    {   "cpio",             "application/x-cpio"                             },
    {   "csh",              "application/x-csh"                              },
    {   "dcr",              "application/x-director"                         },
    {   "dir",              "application/x-director"                         },
    {   "doc",              "application/msword"                             },
    {   "dvi",              "application/x-dvi"                              },
    {   "dxr",              "application/x-director"                         },
    {   "eps",              "application/postscript"                         },
    {   "exe",              "application/octet-stream"                       },
    {   "gtar",             "application/x-gtar"                             },
    {   "gz",               "application/x-gzip"                             },
    {   "hdf",              "application/x-hdf"                              },
    {   "jar",              "application/java-archive"                       },
    {   "js",               "application/x-javascript"                       },
    {   "latex",            "application/x-latex"                            },
    {   "ltx",              "application/x-latex"                            },
    {   "lzh",              "application/x-lzh"                              },
    {   "man",              "application/x-troff-man"                        },
    {   "me",               "application/x-troff-me"                         },
    {   "ms",               "application/x-troff-ms"                         },
    {   "nc",               "application/x-netcdf"                           },
    {   "oda",              "application/oda"                                },
    {   "pdf",              "application/pdf"                                },
    {   "ps",               "application/postscript"                         },
    {   "roff",             "application/x-troff"                            },
    {   "rtf",              "application/rtf"                                },
    {   "sh",               "application/x-sh"                               },
    {   "shar",             "application/x-shar"                             },
    {   "spl",              "application/futuresplash"                       },
    {   "src",              "application/x-wais-source"                      },
    {   "sv4cpio",          "application/x-sv4cpio"                          },
    {   "sv4crc",           "application/x-sv4crc"                           },
    {   "swf",              "application/x-shockwave-flash"                  },
    {   "t",                "application/x-troff"                            },
    {   "tar",              "application/tar"                                },
    {   "tcl",              "application/x-tcl"                              },
    {   "tex",              "application/x-tex"                              },
    {   "texi",             "application/x-texinfo"                          },
    {   "texinfo",          "application/x-texinfo"                          },
    {   "tgz",              "application/x-gzip"                             },
    {   "tr",               "application/x-troff"                            },
    {   "txi",              "application/x-texinfo"                          },
    {   "ustar",            "application/x-ustar"                            },
    {   "zip",              "application/zip"                                },
    /*  VRML MIME types                                                      */
    {   "wrl",              "x-world/x-vrml"                                 },
    {   "wrz",              "x-world/x-vrml"                                 },

    { "rdns:", NULL                                                          },
    {   "debug",            "0"                                              },
    {   "primary-server",   "127.0.0.1"                                      },
    {   "recurse-lookups",  "1"                                              },
    {   "secondary-server",  ""                                              },

    { "ssi:", NULL                                                           },
    {   "enabled",          "1"                                              },
    {   "errmsg",           "<p>[xitami SSI: %s]"                            },
    {   "exec",             "0"                                              },
    {   "sizefmt",          "bytes"                                          },
    {   "timefmt",          "%A, %d-%b-%y %H:%M:%S %Z"                       },
    {   "timeout",          "30"                                             },

    { "security:", NULL                                                      },
    {   "admin",            "1"                                              },
    {   "cgi-groupname",    ""                                               },
    {   "cgi-password",     ""                                               },
    {   "cgi-username",     ""                                               },
    {   "dirlist",          "1"                                              },
    {   "filename",         "xitami.aut"                                     },
    {   "password-case",    "1"                                              },
    {   "safepaths",        "1"                                              },
    {   "setuid",           "0"                                              },
    {   "setuid-group",     "nogroup"                                        },
    {   "setuid-user",      "nobody"                                         },
    {   "superuser",        ""                                               },
    {   "webmask",          "*"                                              },

    { "server:", NULL                                                        },
    {   "autostart",        "0"                                              },
    {   "background",       "0"                                              },
    {   "base-host",        "basehost.cfg"                                   },
    {   "cache-defaults",   "1"                                              },
    {   "cgi-bin",          "./cgi-bin"                                      },
    {   "cgi-url",          "/cgi-bin"                                       },
    {   "debug",            "0"                                              },
    {   "debug-dir",        "debug"                                          },
    {   "default1",         "index.htm"                                      },
    {   "default2",         "default.htm"                                    },
    {   "defaults",         "defaults.cfg"                                   },
    {   "dir-script",       "templates/httpdir.gsl"                          },
    {   "dirsort",          "n"                                              },
    {   "error-footer",     "@errors/footer.htm"                             },
    {   "error-header",     "@errors/header.htm"                             },
    {   "error-script",     "templates/errors.gsl"                           },
    {   "header-dir",       "./headers"                                      },
    {   "hostname",         ""                                               },
    {   "ipaddress",        "*"                                              },
    {   "keep-alive-max",   "50"                                             },
    {   "limit",            "0"                                              },
    {   "log-dir",          "./logs"                                         },
    {   "pipe",             ""                                               },
    {   "pipedef",          "pipedef.xml"                                    },
    {   "portbase",         "0"                                              },
    {   "priority",         "1"                                              },
    {   "recover",          "0"                                              },
    {   "refresh",          "60"                                             },
    {   "supervisor",       "0"                                              },
    {   "temp-dir",         "temp"                                           },
    {   "text-400",         "@errors/text-400.htm"                           },
    {   "text-401",         "@errors/text-401.htm"                           },
    {   "text-402",         "@errors/text-402.htm"                           },
    {   "text-403",         "@errors/text-403.htm"                           },
    {   "text-404",         "@errors/text-404.htm"                           },
    {   "text-412",         "@errors/text-412.htm"                           },
    {   "text-413",         "@errors/text-413.htm"                           },
    {   "text-500",         "@errors/text-500.htm"                           },
    {   "text-501",         "@errors/text-501.htm"                           },
    {   "text-502",         "@errors/text-502.htm"                           },
    {   "timeout",          "30"                                             },
    {   "use-error-script",  "0"                                             },
    {   "webpages",         "./webpages"                                     },

    { "serverlog:", NULL                                                     },
    {   "cycle",            "daily"                                          },
    {   "cycle-arg",        "xi%yy%mm%dd.log"                                },
    {   "cycle-day",        "0"                                              },
    {   "cycle-how",        "rename"                                         },
    {   "cycle-lines",      "0"                                              },
    {   "cycle-size",       "0"                                              },
    {   "cycle-time",       "00:00"                                          },
    {   "enabled",          "1"                                              },
    {   "filename",         "xitami.log"                                     },

    { "ssl-http:", NULL                                                      },
    {   "config-file",      "sslhttp.cfs"                                    },
    {   "enabled",          "1"                                              },

    { "wsx:", NULL                                                           },
    /*  Preloaded WSX agents                                                 */
    {   ".gsl",             "xixxml"                                         },
    {   ".map",             "xiimap"                                         },
    {   ".shtm",            "xixssi"                                         },
    {   ".shtml",           "xixssi"                                         },
    {   ".ssi",             "xixssi"                                         },
    {   ".xml",             "xixxml"                                         },
    {   "admin",            "xiadmin"                                        },
    {   "error",            "xierror"                                        },

    { "win32:", NULL                                                         },
    {   "16bit-cgi",        "0"                                              },
    {   "secure",           "0"                                              },
    {   "service-name",     "Xitami"                                         },
    {   "service-text",     "Xitami Web Server"                              },

    { NULL, NULL }
    };
#endif
