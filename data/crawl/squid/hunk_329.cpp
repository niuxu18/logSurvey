     int i;
 
     if (f == NULL || !strcmp(Config.pidFilename, "none")) {
-        fprintf(stderr, APP_SHORTNAME ": ERROR: No pid file name defined\n");
+        fprintf(stderr, APP_SHORTNAME ": ERROR: No PID file name defined\n");
         exit(1);
     }
 
