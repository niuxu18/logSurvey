
                  if (local_file_size != (wgint) mfile->size)
                    {
                      logprintf (LOG_NOTQUIET, _("Size mismatch for file %s.\n"), quote (filename));
                      fclose (local_file);
                      local_file = NULL;
                      continue;
