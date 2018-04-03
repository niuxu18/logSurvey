	request_set_header (req, "Proxy-Authorization", proxyauth, rel_value);
    }

  {
    /* Whether we need to print the host header with braces around
       host, e.g. "Host: [3ffe:8100:200:2::2]:1234" instead of the
       usual "Host: symbolic-name:1234". */
    bool squares = strchr (u->host, ':') != NULL;
    if (u->port == scheme_default_port (u->scheme))
      request_set_header (req, "Host",
			  aprintf (squares ? "[%s]" : "%s", u->host),
			  rel_value);
    else
      request_set_header (req, "Host",
			  aprintf (squares ? "[%s]:%d" : "%s:%d",
				   u->host, u->port),
			  rel_value);
  }

  if (!inhibit_keep_alive)
