 	logprintf (LOG_VERBOSE, _(", %s remaining"),
 		   with_thousand_seps (size - start));
     }
-  if (!authoritative)
-    logputs (LOG_VERBOSE, _(" (unauthoritative)\n"));
+  logputs (LOG_VERBOSE, !authoritative ? _(" (unauthoritative)\n") : "\n");
 }
 
 /* Retrieves a file with denoted parameters through opening an FTP
