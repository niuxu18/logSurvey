	    }	/* switch(err) */
	  if (err==FTPOK)
	    {
	      dtsock = connect_to_one (&passive_addr, passive_port, 1);
	      if (dtsock < 0)
		{
		  int save_errno = errno;
		  CLOSE (csock);
		  rbuf_uninitialize (&con->rbuf);
		  logprintf (LOG_VERBOSE, _("couldn't connect to %s:%hu: %s\n"),
			     pretty_print_address (&passive_addr), passive_port,
			     strerror (save_errno));
		  return CONNECT_ERROR (save_errno);
