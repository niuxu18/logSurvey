 
     storeAppendPrintf(sentry, "Connection information for %s:\n",APP_SHORTNAME);
 
-    storeAppendPrintf(sentry, "\tNumber of clients accessing cache:\t%.0f\n",
-                      stats.client_http_clients);
+    if (Config.onoff.client_db)
+        storeAppendPrintf(sentry, "\tNumber of clients accessing cache:\t%.0f\n", stats.client_http_clients);
+    else
+        sentry->append("\tNumber of clients accessing cache:\t(client_db off)\n", 52);
 
     storeAppendPrintf(sentry, "\tNumber of HTTP requests received:\t%.0f\n",
                       stats.client_http_requests);