                    }
                  else if (! (d->changed & RM_DONTCARE))
                    {
                      FILE_TIMESTAMP mtime;
                      /* The update failed and this makefile was not
                         from the MAKEFILES variable, so we care.  */
                      error (NILF, "Failed to remake makefile `%s'.",
                             d->file->name);
                      mtime = file_mtime_no_search (d->file);
                      any_remade |= (mtime != (FILE_TIMESTAMP) -1
                                     && mtime != makefile_mtimes[i]);
                    }
                }
