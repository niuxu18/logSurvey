}

/* Read the body of the request, but don't store it anywhere and don't
   display a progress gauge.  This is useful for reading the bodies of
   administrative responses to which we will soon issue another
   request.  The response is not useful to the user, but reading it
   allows us to continue using the same connection to the server.

   If reading fails, 0 is returned, non-zero otherwise.  In debug
   mode, the body is displayed for debugging purposes.  */

static int
skip_short_body (int fd, wgint contlen)
{
  enum {
    SKIP_SIZE = 512,		/* size of the download buffer */
    SKIP_THRESHOLD = 4096	/* the largest size we read */
  };
  char dlbuf[SKIP_SIZE + 1];
  dlbuf[SKIP_SIZE] = '\0';	/* so DEBUGP can safely print it */

  /* We shouldn't get here with unknown contlen.  (This will change
     with HTTP/1.1, which supports "chunked" transfer.)  */
  assert (contlen != -1);

  /* If the body is too large, it makes more sense to simply close the
     connection than to try to read the body.  */
  if (contlen > SKIP_THRESHOLD)
    return 0;

  DEBUGP (("Skipping %s bytes of body: [", number_to_static_string (contlen)));

  while (contlen > 0)
    {
      int ret = fd_read (fd, dlbuf, MIN (contlen, SKIP_SIZE), -1);
      if (ret <= 0)
	{
	  /* Don't normally report the error since this is an
	     optimization that should be invisible to the user.  */
	  DEBUGP (("] aborting (%s).\n",
		   ret < 0 ? strerror (errno) : "EOF received"));
	  return 0;
	}
      contlen -= ret;
      /* Safe even if %.*s bogusly expects terminating \0 because
	 we've zero-terminated dlbuf above.  */
      DEBUGP (("%.*s", ret, dlbuf));
    }

  DEBUGP (("] done.\n"));
  return 1;
}

/* Persistent connections.  Currently, we cache the most recently used
