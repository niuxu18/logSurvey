 		  /* Remote file is older, file sizes can be compared and
                      are both equal. */
                   logprintf (LOG_VERBOSE, _("\
-Remote file no newer than local file `%s' -- not retrieving.\n"), u->local);
+Remote file no newer than local file `%s' -- not retrieving.\n"), con->target);
 		  dlthis = 0;
 		}
 	      else if (eq_size)
