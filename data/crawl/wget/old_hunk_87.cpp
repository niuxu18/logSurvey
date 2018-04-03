          retr_err = METALINK_RETR_ERROR;

          /* If output_stream is not NULL, then we have failed on
             previous resource and are retrying. Thus, remove the file.  */
          if (output_stream)
            {
              fclose (output_stream);
              output_stream = NULL;
              if (unlink (filename))
                logprintf (LOG_NOTQUIET, "unlink: %s\n", strerror (errno));
              xfree (filename);
            }
