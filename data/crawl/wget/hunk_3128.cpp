     }
   logprintf (LOG_VERBOSE, _("%s request sent, awaiting response... "),
 	     proxy ? "Proxy" : "HTTP");
-  contlen = contrange = -1;
+  contlen = -1;
+  contrange = 0;
   type = NULL;
   statcode = -1;
   *dt &= ~RETROKF;
