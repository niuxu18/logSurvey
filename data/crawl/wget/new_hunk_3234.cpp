    logprintf (LOG_VERBOSE, _("Resolving %s... "), host);

#ifdef ENABLE_IPV6
  {
    int err;
    struct addrinfo hints, *res;

    xzero (hints);
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_family = requested_family;
    hints.ai_flags = 0;

    err = getaddrinfo_with_timeout (host, NULL, &hints, &res, opt.dns_timeout);
    if (err != 0 || res == NULL)
      {
	if (!silent)
	  logprintf (LOG_VERBOSE, _("failed: %s.\n"),
		     err != EAI_SYSTEM ? gai_strerror (err) : strerror (errno));
	return NULL;
      }
    al = address_list_from_addrinfo (res);
    freeaddrinfo (res);
  }
#else
  {
    struct hostent *hptr = gethostbyname_with_timeout (host, opt.dns_timeout);
