                                   | (noerror ? RM_DONTCARE : 0)
                                   | (set_default ? 0 : RM_NO_DEFAULT_GOAL)));
               if (!r && !noerror)
-                error (fstart, "%s: %s", name, strerror (errno));
+                {
+                  const char *err = strerror (errno);
+                  OSS (error, fstart, "%s: %s", name, err);
+                }
             }
 
           /* Restore conditional state.  */