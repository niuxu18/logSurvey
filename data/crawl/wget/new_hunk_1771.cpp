    {
      /* #### We should be able to print the error message here. */
      logprintf (LOG_NOTQUIET,
                 _("%s: unable to resolve bind address %s; disabling bind.\n"),
                 exec_name, quote (opt.bind_address));
      should_bind = false;
      return false;
    }
