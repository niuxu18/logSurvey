                  gpgme_check_version (NULL);

                  /* Open data file.  */
                  fd = open (destname, O_RDONLY);
                  if (fd == -1)
                    {
                      logputs (LOG_NOTQUIET,