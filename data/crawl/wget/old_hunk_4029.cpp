	  logputs (LOG_VERBOSE, "\n");
	  logprintf (LOG_NOTQUIET,
		     _("Unknown type `%c', closing control connection.\n"),
		     toupper (u->ftp_type));
	  CLOSE (csock);
	  rbuf_uninitialize (&con->rbuf);
	  return err;