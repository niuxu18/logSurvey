   if (sock >= 0)
     {
       /* Success. */
-      if (!silent)
+      if (print)
 	logprintf (LOG_VERBOSE, _("connected.\n"));
       DEBUGP (("Created socket %d.\n", sock));
     }
   else
     {
       save_errno = errno;
-      if (!silent)
+      if (print)
 	logprintf (LOG_VERBOSE, "failed: %s.\n", strerror (errno));
       errno = save_errno;
     }