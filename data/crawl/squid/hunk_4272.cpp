         if (kill(pid, opt_send_signal) &&
                 /* ignore permissions if just running check */
                 !(opt_send_signal == 0 && errno == EPERM)) {
-            fprintf(stderr, "%s: ERROR: Could not send ", appname);
+            fprintf(stderr, "%s: ERROR: Could not send ", APP_SHORTNAME);
             fprintf(stderr, "signal %d to process %d: %s\n",
                     opt_send_signal, (int) pid, xstrerror());
             exit(1);
         }
     } else {
-        fprintf(stderr, "%s: ERROR: No running copy\n", appname);
+        fprintf(stderr, "%s: ERROR: No running copy\n", APP_SHORTNAME);
         exit(1);
     }
 
