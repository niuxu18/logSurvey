        {
          fputs (_("\
Cannot specify both -k and -O if multiple URLs are given, or in combination\n\
with -p or -r. See the manual for details.\n\n"), stderr);
          print_usage (1);
          exit (1);
        }
      if (opt.page_requisites
