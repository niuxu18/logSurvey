	  logputs (LOG_NOTQUIET, _("\
Error in server response, closing control connection.\n"));
	  fd_close (csock);
	  return err;
	  break;
	case FTPSRVERR:
	  logputs (LOG_VERBOSE, "\n");
	  logputs (LOG_NOTQUIET, _("Error in server greeting.\n"));
	  fd_close (csock);
	  return err;
	  break;
	case WRITEFAILED:
