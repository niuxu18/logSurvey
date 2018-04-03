   if (opt.enable_iri)
     {
       if (!opt.locale)
-        {
-          opt.locale = getenv ("CHARSET");
+        opt.locale = find_locale ();
 
-          if (opt.locale == NULL)
-            opt.locale = nl_langinfo(CODESET);
-        }
-      else
-        {
-          /* sXXXav : check given locale */
-          logprintf (LOG_VERBOSE, "Check the locale...\n");
-        }
+      /* sXXXav : check given locale and remote encoding */
+
+      logprintf (LOG_VERBOSE, "Locale = %s\n", quote (opt.locale));
     }
 #else
   if (opt.enable_iri || opt.locale || opt.encoding_remote)