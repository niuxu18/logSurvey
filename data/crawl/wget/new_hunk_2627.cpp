                logputs (LOG_VERBOSE, _("\
Last-modified header invalid -- time-stamp ignored.\n"));
            }
      
          /* The time-stamping section.  */
          if (opt.timestamping)
            {
              if (hstat.orig_file_name) /* Perform this check only if the file we're 
                                           supposed to download already exists. */
                {
                  if (hstat.remote_time && tmr != (time_t) (-1))
                    {
                      /* Now time-stamping can be used validly.  Time-stamping
                         means that if the sizes of the local and remote file
                         match, and local file is newer than the remote file,
                         it will not be retrieved.  Otherwise, the normal
                         download procedure is resumed.  */
                      if (hstat.orig_file_tstamp >= tmr)
                        {
                          if (hstat.contlen == -1 || hstat.orig_file_size == hstat.contlen)
                            {
                              logprintf (LOG_VERBOSE, _("\
Server file no newer than local file `%s' -- not retrieving.\n\n"),
                                         hstat.orig_file_name);
                              ret = RETROK;
                              goto exit;
                            }
                          else
                            {
                              logprintf (LOG_VERBOSE, _("\
The sizes do not match (local %s) -- retrieving.\n"),
                                         number_to_static_string (local_size));
                            }
                        }
                      else
                        logputs (LOG_VERBOSE,
                                 _("Remote file is newer, retrieving.\n"));

                      logputs (LOG_VERBOSE, "\n");
                    }
                }
              
              /* free_hstat (&hstat); */
              hstat.timestamp_checked = true;
              restart_loop = true;
            }
          
          if (opt.always_rest)
            {
              got_name = true;
              restart_loop = true;
            }

          got_head = true;    /* no more time-stamping */
          *dt &= ~HEAD_ONLY;
          count = 0;          /* the retrieve count for HEAD is reset */

          if (restart_loop) 
            continue;
        }
          
      if ((tmr != (time_t) (-1))