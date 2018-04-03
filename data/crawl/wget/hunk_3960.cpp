   num_written = iwrite (sock, request, strlen (request));
   if (num_written < 0)
     {
-      logputs (LOG_VERBOSE, _("Failed writing HTTP request.\n"));
-      CLOSE (sock);
+      logprintf (LOG_VERBOSE, _("Failed writing HTTP request: %s.\n"),
+		 strerror (errno));
+      CLOSE_INVALIDATE (sock);
       return WRITEFAILED;
     }
   logprintf (LOG_VERBOSE, _("%s request sent, awaiting response... "),