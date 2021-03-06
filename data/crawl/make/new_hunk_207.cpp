      if (! open_jobserver_semaphore (cp))
        {
          DWORD err = GetLastError ();
          const char *estr = map_windows32_error_to_string (err);
          fatal (NILF, strlen (cp) + INTSTR_LENGTH + strlen (estr),
                 _("internal error: unable to open jobserver semaphore '%s': (Error %ld: %s)"),
                 cp, err, estr);
        }
      DB (DB_JOBS, (_("Jobserver client (semaphore %s)\n"), cp));
#else
      if (sscanf (cp, "%d,%d", &job_fds[0], &job_fds[1]) != 2)
        OS (fatal, NILF,
            _("internal error: invalid --jobserver-fds string '%s'"), cp);

      DB (DB_JOBS,
          (_("Jobserver client (fds %d,%d)\n"), job_fds[0], job_fds[1]));
