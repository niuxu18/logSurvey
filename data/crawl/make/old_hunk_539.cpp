      if (! release_jobserver_semaphore())
        {
          DWORD err = GetLastError();
          fatal (NILF,_("release jobserver semaphore: (Error %d: %s)"),
                 err, map_windows32_error_to_string(err));
        }

