     {
       const char *txt_addr = print_address (ip);
       if (0 != strcmp (print, txt_addr))
-        logprintf (LOG_VERBOSE, _("Connecting to %s|%s|:%d... "),
-                   escnonprint_uri (print), txt_addr, port);
+        {
+				  char *str = NULL, *name;
+
+          if (opt.enable_iri && (name = idn_decode ((char *) print)) != NULL)
+            {
+              int len = strlen (print) + strlen (name) + 4;
+              str = xmalloc (len);
+              snprintf (str, len, "%s (%s)", name, print);
+              str[len-1] = '\0';
+              xfree (name);
+            }
+
+          logprintf (LOG_VERBOSE, _("Connecting to %s|%s|:%d... "),
+                     str ? str : escnonprint_uri (print), txt_addr, port);
+
+					if (str)
+					  xfree (str);
+        }
       else
         logprintf (LOG_VERBOSE, _("Connecting to %s:%d... "), txt_addr, port);
     }
 src/host.c | 2 +-
 1 file changed, 1 insertion(+), 1 deletion(-)
