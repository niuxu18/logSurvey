 
   bool host_lookup_failed = false;
 
+  DEBUGP(("in gethttp 1\n"));
+  
 #ifdef HAVE_SSL
   if (u->scheme == SCHEME_HTTPS)
     {
       /* Initialize the SSL context.  After this has once been done,
-	 it becomes a no-op.  */
+         it becomes a no-op.  */
       if (!ssl_init ())
-	{
-	  scheme_disable (SCHEME_HTTPS);
-	  logprintf (LOG_NOTQUIET,
-		     _("Disabling SSL due to encountered errors.\n"));
-	  return SSLINITFAILED;
-	}
+        {
+          scheme_disable (SCHEME_HTTPS);
+          logprintf (LOG_NOTQUIET,
+                     _("Disabling SSL due to encountered errors.\n"));
+          return SSLINITFAILED;
+        }
     }
 #endif /* HAVE_SSL */
 
-  if (!head_only)
-    /* If we're doing a GET on the URL, as opposed to just a HEAD, we need to
-       know the local filename so we can save to it. */
-    assert (*hs->local_file != NULL);
-
+  DEBUGP(("in gethttp 2\n"));
+  DEBUGP(("in gethttp 3\n"));
+  
   /* Initialize certain elements of struct http_stat.  */
   hs->len = 0;
   hs->contlen = -1;