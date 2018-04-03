    }
  /* Now weed out the files that do not match our globbing pattern.
     If we are dealing with a globbing pattern, that is.  */
  if (*u->file && (action == GLOB_GLOBALL || action == GLOB_GETONE))
    {
      int (*matcher) (const char *, const char *, int)
        = opt.ignore_case ? fnmatch_nocase : fnmatch;
      int matchres = 0;

      f = start;
      while (f)
        {
          matchres = matcher (u->file, f->name, 0);
          if (matchres == -1)
            {
              logprintf (LOG_NOTQUIET, "%s: %s\n", con->target,
                         strerror (errno));
              break;
            }
          if (matchres == FNM_NOMATCH)
            f = delelement (f, &start); /* delete the element from the list */
          else
            f = f->next;        /* leave the element in the list */
        }
      if (matchres == -1)
        {
          freefileinfo (start);
          return RETRBADPATTERN;
        }
    }
  if (start)
