      variable has been set. For internal testing purposes only!  */
   env_sysrc = getenv ("SYSTEM_WGETRC");
   if (env_sysrc && file_exists_p (env_sysrc))
-    ok &= run_wgetrc (env_sysrc);
+    {
+      ok &= run_wgetrc (env_sysrc);
+      /* If there are any problems parsing the system wgetrc file, tell
+         the user and exit */
+      if (! ok)
+        {
+          fprintf (stderr, _("\
+Parsing system wgetrc file (env SYSTEM_WGETRC) failed.  Please check\n\
+'%s',\n\
+or specify a different file using --config.\n"), env_sysrc);
+          exit (2);
+        }
+    }
   /* Otherwise, if SYSTEM_WGETRC is defined, use it.  */
 #ifdef SYSTEM_WGETRC
   else if (file_exists_p (SYSTEM_WGETRC))
     ok &= run_wgetrc (SYSTEM_WGETRC);
-#endif
   /* If there are any problems parsing the system wgetrc file, tell
      the user and exit */
   if (! ok)
     {
       fprintf (stderr, _("\
-Parsing system wgetrc file failed, please check '%s'.           \
-Or specify a different file using --config\n"), SYSTEM_WGETRC);
+Parsing system wgetrc file failed.  Please check\n\
+'%s',\n\
+or specify a different file using --config.\n"), SYSTEM_WGETRC);
       exit (2);
     }
+#endif
   /* Override it with your own, if one exists.  */
   file = wgetrc_file_name ();
   if (!file)
