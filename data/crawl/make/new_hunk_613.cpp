            {
              p += 5;
              remove_comments (p);
              if (*(next_token (p)) != '\0')
                error (&ebuf->floc,
                       _("extraneous text after `endef' directive"));

              if (--nlevels == 0)
                break;
            }
        }

      /* Add this line to the variable definition.  */
      len = strlen (line);
      if (idx + len + 1 > length)
        {
