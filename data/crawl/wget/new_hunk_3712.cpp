  print_usage ();
  /* Had to split this in parts, so the #@@#%# Ultrix compiler and cpp
     don't bitch.  Also, it makes translation much easier.  */
  fputs (_("\
\n\
Mandatory arguments to long options are mandatory for short options too.\n\
\n"), stdout);
  fputs (_("\
Startup:\n\
  -V,  --version           display the version of Wget and exit.\n\
  -h,  --help              print this help.\n\
  -b,  --background        go to background after startup.\n\
  -e,  --execute=COMMAND   execute a `.wgetrc\'-style command.\n\
\n"), stdout);
  fputs (_("\
Logging and input file:\n\
  -o,  --output-file=FILE     log messages to FILE.\n\
  -a,  --append-output=FILE   append messages to FILE.\n\
