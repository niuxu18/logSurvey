 
     memset(line, '\0', MAX_LINELEN);
 
-    storeAppend(sentry, open_bracket, (int) strlen(open_bracket));
+    storeAppendPrintf(sentry, "{\n");
 
-    sprintf(line, "{VM-Max %d \"# Maximum hot-vm cache (MB)\"}\n",
+    storeAppendPrintf(sentry, "{VM-Max %d \"# Maximum hot-vm cache (MB)\"}\n",
 	getCacheMemMax() / (1 << 20));
-    storeAppend(sentry, line, strlen(line));
 
-    sprintf(line, "{VM-High %d \"# High water mark hot-vm cache (%%)\"}\n",
+    storeAppendPrintf(sentry, "{VM-High %d \"# High water mark hot-vm cache (%%)\"}\n",
 	getCacheMemHighWaterMark());
-    storeAppend(sentry, line, strlen(line));
 
-    sprintf(line, "{VM-Low %d \"# Low water-mark hot-vm cache (%%)\"}\n",
+    storeAppendPrintf(sentry, "{VM-Low %d \"# Low water-mark hot-vm cache (%%)\"}\n",
 	getCacheMemLowWaterMark());
-    storeAppend(sentry, line, strlen(line));
 
-    sprintf(line, "{Swap-Max %d \"# Maximum disk cache (MB)\"}\n",
+    storeAppendPrintf(sentry, "{Swap-Max %d \"# Maximum disk cache (MB)\"}\n",
 	getCacheSwapMax() / (1 << 10));
-    storeAppend(sentry, line, strlen(line));
 
-    sprintf(line, "{Swap-High %d \"# High Water mark disk cache (%%)\"}\n",
+    storeAppendPrintf(sentry, "{Swap-High %d \"# High Water mark disk cache (%%)\"}\n",
 	getCacheSwapHighWaterMark());
-    storeAppend(sentry, line, strlen(line));
 
-    sprintf(line, "{Swap-Low %d \"# Low water mark disk cache (%%)\"}\n",
+    storeAppendPrintf(sentry, "{Swap-Low %d \"# Low water mark disk cache (%%)\"}\n",
 	getCacheSwapLowWaterMark());
-    storeAppend(sentry, line, strlen(line));
 
-    sprintf(line, "{HTTP-Max %d\"# Maximum size HTTP objects (KB)\"}\n",
+    storeAppendPrintf(sentry, "{HTTP-Max %d\"# Maximum size HTTP objects (KB)\"}\n",
 	getHttpMax() / (1 << 10));
-    storeAppend(sentry, line, strlen(line));
 
-    sprintf(line, "{HTTP-TTL %d \"# Http object default TTL (hrs)\"}\n", getHttpTTL() / 3600);
-    storeAppend(sentry, line, strlen(line));
+    storeAppendPrintf(sentry, "{HTTP-TTL %d \"# Http object default TTL (hrs)\"}\n", getHttpTTL() / 3600);
 
-    sprintf(line, "{Gopher-Max %d \"# Maximum size gopher objects (KB)\"}\n",
+    storeAppendPrintf(sentry, "{Gopher-Max %d \"# Maximum size gopher objects (KB)\"}\n",
 	getGopherMax() / (1 << 10));
-    storeAppend(sentry, line, strlen(line));
 
-    sprintf(line, "{Gopher-TTL %d \"# TTL for gopher objects (hrs)\"}\n", getGopherTTL() / 3600);
-    storeAppend(sentry, line, strlen(line));
+    storeAppendPrintf(sentry, "{Gopher-TTL %d \"# TTL for gopher objects (hrs)\"}\n", getGopherTTL() / 3600);
 
-    sprintf(line, "{FTP-Max %d \"# Maximum size FTP objects (KB)\"}\n",
+    storeAppendPrintf(sentry, "{FTP-Max %d \"# Maximum size FTP objects (KB)\"}\n",
 	getFtpMax() / (1 << 10));
-    storeAppend(sentry, line, strlen(line));
 
-    sprintf(line, "{FTP-TTL %d \"# TTL for FTP objects (hrs)\"}\n", getFtpTTL() / 3600);
-    storeAppend(sentry, line, strlen(line));
+    storeAppendPrintf(sentry, "{FTP-TTL %d \"# TTL for FTP objects (hrs)\"}\n", getFtpTTL() / 3600);
 
-    sprintf(line, "{Neg-TTL %d \"# TTL for negative cache (s)\"}\n",
+    storeAppendPrintf(sentry, "{Neg-TTL %d \"# TTL for negative cache (s)\"}\n",
 	getNegativeTTL());
-    storeAppend(sentry, line, strlen(line));
 
-    sprintf(line, "{ReadTimeout %d \"# Maximum idle connection (s)\"}\n", getReadTimeout());
-    storeAppend(sentry, line, strlen(line));
+    storeAppendPrintf(sentry, "{ReadTimeout %d \"# Maximum idle connection (s)\"}\n", getReadTimeout());
 
-    sprintf(line, "{ClientLifetime %d \"# Lifetime for incoming ascii port requests or outgoing clients (s)\"}\n", getClientLifetime());
-    storeAppend(sentry, line, strlen(line));
+    storeAppendPrintf(sentry, "{ClientLifetime %d \"# Lifetime for incoming ascii port requests or outgoing clients (s)\"}\n", getClientLifetime());
 
-    sprintf(line, "{CleanRate %d \"# Rate for periodic object expiring\"}\n",
+    storeAppendPrintf(sentry, "{CleanRate %d \"# Rate for periodic object expiring\"}\n",
 	getCleanRate());
-    storeAppend(sentry, line, strlen(line));
 
     /* Cachemgr.cgi expects an integer in the second field of the string */
-    sprintf(line, "{HttpAccelMode %d \"# Is operating as an HTTP accelerator\"}\n",
+    storeAppendPrintf(sentry, "{HttpAccelMode %d \"# Is operating as an HTTP accelerator\"}\n",
 	httpd_accel_mode);
-    storeAppend(sentry, line, strlen(line));
 
     /* end of stats */
-    storeAppend(sentry, close_bracket, strlen(close_bracket));
+    storeAppendPrintf(sentry, "}\n");
 }
 
 
