
#ifdef VMS
  if (!(exit_code & 1))
      error (NILF,
             (ignored ? _("*** [%s] Error 0x%x (ignored)")
              : _("*** [%s] Error 0x%x")),
             target_name, exit_code);
#else
  if (exit_sig == 0)
    error (NILF, ignored ? _("[%s] Error %d (ignored)") :
