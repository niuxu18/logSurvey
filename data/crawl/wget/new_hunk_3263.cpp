	  logputs (LOG_VERBOSE, "\n");
	  logputs (LOG_NOTQUIET, _("\
Error in server response, closing control connection.\n"));
	  xclose (csock);
	  rbuf_uninitialize (&con->rbuf);
	  return err;
	  break;
