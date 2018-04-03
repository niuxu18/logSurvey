    struct hostent *hptr = gethostbyname_with_timeout (host, opt.dns_timeout);
    if (!hptr)
      {
	if (!(flags & LH_SILENT))
	  {
	    if (errno != ETIMEDOUT)
	      logprintf (LOG_VERBOSE, _("failed: %s.\n"), herrmsg (h_errno));
	    else
	      logputs (LOG_VERBOSE, _("failed: timed out.\n"));
	  }
	return NULL;
      }
    assert (hptr->h_length == 4);
    /* Do older systems have h_addr_list?  */
    al = address_list_from_ipv4_addresses (hptr->h_addr_list);
  }