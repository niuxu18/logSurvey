          if (f->type != FT_DIRECTORY && !acceptable (f->name))
            {
              logprintf (LOG_VERBOSE, _("Rejecting %s.\n"),
                         quote (f->name));
              f = delelement (f, &start);
            }
          else
