              if (*p2 != '\0')
                /* There's no need to be ivory-tower about this: check for
                   one of the most common bugs found in makefiles...  */
                fatal (&fileinfo, "missing separator%s",
                       !strneq(lb.buffer, "        ", 8) ? ""
                       : " (did you mean TAB instead of 8 spaces?)");
              continue;
            }
