         fclose(pid_fp);
     } else {
         if (errno != ENOENT) {
-            fprintf(stderr, "%s: ERROR: Could not read pid file\n", appname);
+            fprintf(stderr, APP_SHORTNAME ": ERROR: Could not read pid file\n");
             fprintf(stderr, "\t%s: %s\n", f, xstrerror());
             exit(1);
         }
