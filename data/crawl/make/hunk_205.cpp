 #ifdef  HAVE_GETCWD
       perror_with_name ("getcwd", "");
 #else
-      error (NILF, "getwd: %s", current_directory);
+      OS (error, NILF, "getwd: %s", current_directory);
 #endif
       current_directory[0] = '\0';
       directory_before_chdir = 0;
