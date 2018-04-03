#endif /* HAVE_SSL */
    }

  if (*dt & HEAD_ONLY)
    command = "HEAD";
  else if (opt.post_file_name || opt.post_data)
    command = "POST";
  else
    command = "GET";

  referer = NULL;
  if (hs->referer)
    {
      referer = (char *)alloca (9 + strlen (hs->referer) + 3);
      sprintf (referer, "Referer: %s\r\n", hs->referer);
    }

  if (*dt & SEND_NOCACHE)
    pragma_h = "Pragma: no-cache\r\n";
  else
    pragma_h = "";

  if (hs->restval)
    {
      range = (char *)alloca (13 + numdigit (hs->restval) + 4);
      /* Gag me!  Some servers (e.g. WebSitePro) have been known to
         respond to the following `Range' format by generating a
         multipart/x-byte-ranges MIME document!  This MIME type was
         present in an old draft of the byteranges specification.
         HTTP/1.1 specifies a multipart/byte-ranges MIME type, but
         only if multiple non-overlapping ranges are requested --
         which Wget never does.  */
      sprintf (range, "Range: bytes=%ld-\r\n", hs->restval);
    }
  else
    range = NULL;
  if (opt.useragent)
    STRDUP_ALLOCA (useragent, opt.useragent);
  else
    {
      useragent = (char *)alloca (10 + strlen (version_string));
      sprintf (useragent, "Wget/%s", version_string);
    }
  /* Construct the authentication, if userid is present.  */
  user = u->user;
  passwd = u->passwd;
  search_netrc (u->host, (const char **)&user, (const char **)&passwd, 0);
  user = user ? user : opt.http_user;
  passwd = passwd ? passwd : opt.http_passwd;

  wwwauth = NULL;
  if (user && passwd)
    {
      if (!authenticate_h)
	{
	  /* We have the username and the password, but haven't tried
	     any authorization yet.  Let's see if the "Basic" method
	     works.  If not, we'll come back here and construct a
	     proper authorization method with the right challenges.

	     If we didn't employ this kind of logic, every URL that
	     requires authorization would have to be processed twice,
	     which is very suboptimal and generates a bunch of false
	     "unauthorized" errors in the server log.

	     #### But this logic also has a serious problem when used
	     with stronger authentications: we *first* transmit the
	     username and the password in clear text, and *then*
	     attempt a stronger authentication scheme.  That cannot be
	     right!  We are only fortunate that almost everyone still
	     uses the `Basic' scheme anyway.

	     There should be an option to prevent this from happening,
	     for those who use strong authentication schemes and value
	     their passwords.  */
	  wwwauth = basic_authentication_encode (user, passwd, "Authorization");
	}
      else
	{
	  /* Use the full path, i.e. one that includes the leading
	     slash and the query string, but is independent of proxy
	     setting.  */
	  char *pth = url_full_path (u);
	  wwwauth = create_authorization_line (authenticate_h, user, passwd,
					       command, pth);
	  xfree (pth);
	}
    }

  /* String of the form :PORT.  Used only for non-standard ports. */
  port_maybe = NULL;
  if (u->port != scheme_default_port (u->scheme))
    {
      port_maybe = (char *)alloca (numdigit (u->port) + 2);
      sprintf (port_maybe, ":%d", u->port);
    }

  if (!inhibit_keep_alive)
    request_keep_alive = "Connection: Keep-Alive\r\n";
  else
    request_keep_alive = NULL;

  if (opt.cookies)
    cookies = cookie_header (wget_cookie_jar, u->host, u->port, u->path,
#ifdef HAVE_SSL
			     u->scheme == SCHEME_HTTPS
#else
			     0
#endif
			     );

  if (opt.post_data || opt.post_file_name)
    {
      post_content_type = "Content-Type: application/x-www-form-urlencoded\r\n";
      if (opt.post_data)
	post_data_size = strlen (opt.post_data);
      else
	{
	  post_data_size = file_size (opt.post_file_name);
	  if (post_data_size == -1)
	    {
	      logprintf (LOG_NOTQUIET, "POST data file missing: %s\n",
			 opt.post_file_name);
	      post_data_size = 0;
	    }
	}
      post_content_length = xmalloc (16 + numdigit (post_data_size) + 2 + 1);
      sprintf (post_content_length,
	       "Content-Length: %ld\r\n", post_data_size);
    }

  if (proxy)
    full_path = xstrdup (u->url);
  else
    /* Use the full path, i.e. one that includes the leading slash and
       the query string.  E.g. if u->path is "foo/bar" and u->query is
       "param=value", full_path will be "/foo/bar?param=value".  */
    full_path = url_full_path (u);

  if (strchr (u->host, ':'))
    squares_around_host = 1;

  /* Allocate the memory for the request.  */
  request = (char *)alloca (strlen (command)
			    + strlen (full_path)
			    + strlen (useragent)
			    + strlen (u->host)
			    + (port_maybe ? strlen (port_maybe) : 0)
			    + strlen (HTTP_ACCEPT)
			    + (request_keep_alive
			       ? strlen (request_keep_alive) : 0)
			    + (referer ? strlen (referer) : 0)
			    + (cookies ? strlen (cookies) : 0)
			    + (wwwauth ? strlen (wwwauth) : 0)
			    + (proxyauth ? strlen (proxyauth) : 0)
			    + (range ? strlen (range) : 0)
			    + strlen (pragma_h)
			    + (post_content_type
			       ? strlen (post_content_type) : 0)
			    + (post_content_length
			       ? strlen (post_content_length) : 0)
			    + (opt.user_header ? strlen (opt.user_header) : 0)
			    + 64);
  /* Construct the request.  */
  sprintf (request, "\
%s %s HTTP/1.0\r\n\
User-Agent: %s\r\n\
Host: %s%s%s%s\r\n\
Accept: %s\r\n\
%s%s%s%s%s%s%s%s%s%s\r\n",
	   command, full_path,
	   useragent,
	   squares_around_host ? "[" : "", u->host, squares_around_host ? "]" : "",
	   port_maybe ? port_maybe : "",
	   HTTP_ACCEPT,
	   request_keep_alive ? request_keep_alive : "",
	   referer ? referer : "",
	   cookies ? cookies : "", 
	   wwwauth ? wwwauth : "", 
	   proxyauth ? proxyauth : "", 
	   range ? range : "",
	   pragma_h,
	   post_content_type ? post_content_type : "",
	   post_content_length ? post_content_length : "",
	   opt.user_header ? opt.user_header : "");
  DEBUGP (("\n---request begin---\n%s", request));

  /* Free the temporary memory.  */
  xfree_null (wwwauth);
  xfree_null (proxyauth);
  xfree_null (cookies);
  xfree (full_path);

  /* Send the request to server.  */
  write_error = fd_write (sock, request, strlen (request), -1);

  if (write_error >= 0)
    {
