      if (debug_flag)
        {
          print_spaces (depth);
          printf(_("  Ignoring VPATH name `%s'.\n"), file->hname);
          fflush(stdout);
        }
      file->ignore_vpath = 1;
