      logprintf (LOG_VERBOSE, _("Failed writing HTTP request: %s.\n"),
		 strerror (errno));
      CLOSE_INVALIDATE (sock);
      return WRITEFAILED;
    }
  logprintf (LOG_VERBOSE, _("%s request sent, awaiting response... "),
