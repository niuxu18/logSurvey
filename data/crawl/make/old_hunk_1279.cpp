	{
	  if (errno == 0)
	    /* An errno value of zero means getloadavg is just unsupported.  */
	    error ("cannot enforce load limits on this operating system");
	  else
	    perror_with_name ("cannot enforce load limit: ", "getloadavg");
	}
