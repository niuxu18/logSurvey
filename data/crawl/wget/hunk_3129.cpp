 	}
     }
 
-  if (contrange == -1)
+  if (contrange == 0 && hs->restval > 0)
     {
-      /* We did not get a content-range header.  This means that the
-	 server did not honor our `Range' request.  Normally, this
-	 means we should reset hs->restval and continue normally.  */
+      /* The download starts from the beginning, presumably because
+	 the server did not honor our `Range' request.  Normally we'd
+	 just reset hs->restval and start the download from
+	 scratch.  */
 
       /* However, if `-c' is used, we need to be a bit more careful:
 
          1. If `-c' is specified and the file already existed when
-         Wget was started, it would be a bad idea for us to start
-         downloading it from scratch, effectively truncating it.  I
-         believe this cannot happen unless `-c' was specified.
+         Wget was started, it would be a bad idea to start downloading
+         it from scratch, effectively truncating the file.
 
 	 2. If `-c' is used on a file that is already fully
 	 downloaded, we're requesting bytes after the end of file,
-	 which can result in server not honoring `Range'.  If this is
-	 the case, `Content-Length' will be equal to the length of the
-	 file.  */
+	 which can result in the server not honoring `Range'.  If this
+	 is the case, `Content-Length' will be equal to the length of
+	 the file.  */
       if (opt.always_rest)
 	{
 	  /* Check for condition #2. */
-	  if (hs->restval > 0	            /* restart was requested. */
-	      && contlen != -1              /* we got content-length. */
-	      && hs->restval >= contlen     /* file fully downloaded
-					       or has shrunk.  */
+	  if (contlen != -1              /* we got content-length. */
+	      && hs->restval >= contlen  /* file fully downloaded
+					    or has shrunk.  */
 	      )
 	    {
 	      logputs (LOG_VERBOSE, _("\
