                sprintf (from_now_string, "%lu", (unsigned long) from_now);
              else
                sprintf (from_now_string, "%.2g", from_now);
              OSS (error, NILF,
                   _("Warning: File '%s' has modification time %s s in the future"),
                   file->name, from_now_string);
#endif
              clock_skew_detected = 1;
            }