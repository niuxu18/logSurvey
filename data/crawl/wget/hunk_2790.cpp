 	  if (write_error < 0)
 	    {
 	      logprintf (LOG_VERBOSE, _("Failed writing to proxy: %s.\n"),
-			 strerror (errno));
+			 fd_errstr (sock));
 	      CLOSE_INVALIDATE (sock);
 	      return WRITEFAILED;
 	    }