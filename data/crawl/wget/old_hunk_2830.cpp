	  /* Need to hide the password from the URL.  The `if' is here
             so that we don't do the needless allocation every
             time. */
	  char *hurl = url_string (u, 1);
	  logprintf (LOG_NONVERBOSE, "%s URL: %s [%s] -> \"%s\" [%d]\n",
		     tms, hurl, number_to_static_string (len), locf, count);
	  xfree (hurl);
