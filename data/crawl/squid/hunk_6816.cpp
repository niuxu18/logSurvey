     int ttl;
     if (fqdn_table == NULL)
 	return;
-    storeAppendPrintf(sentry, "{FQDN Cache Statistics:\n");
-    storeAppendPrintf(sentry, "{FQDNcache Entries: %d}\n",
+    storeAppendPrintf(sentry, "FQDN Cache Statistics:\n");
+    storeAppendPrintf(sentry, "FQDNcache Entries: %d\n",
 	meta_data.fqdncache_count);
-    storeAppendPrintf(sentry, "{FQDNcache Requests: %d}\n",
+    storeAppendPrintf(sentry, "FQDNcache Requests: %d\n",
 	FqdncacheStats.requests);
-    storeAppendPrintf(sentry, "{FQDNcache Hits: %d}\n",
+    storeAppendPrintf(sentry, "FQDNcache Hits: %d\n",
 	FqdncacheStats.hits);
-    storeAppendPrintf(sentry, "{FQDNcache Pending Hits: %d}\n",
+    storeAppendPrintf(sentry, "FQDNcache Pending Hits: %d\n",
 	FqdncacheStats.pending_hits);
-    storeAppendPrintf(sentry, "{FQDNcache Negative Hits: %d}\n",
+    storeAppendPrintf(sentry, "FQDNcache Negative Hits: %d\n",
 	FqdncacheStats.negative_hits);
-    storeAppendPrintf(sentry, "{FQDNcache Misses: %d}\n",
+    storeAppendPrintf(sentry, "FQDNcache Misses: %d\n",
 	FqdncacheStats.misses);
-    storeAppendPrintf(sentry, "{Blocking calls to gethostbyaddr(): %d}\n",
+    storeAppendPrintf(sentry, "Blocking calls to gethostbyaddr(): %d\n",
 	FqdncacheStats.ghba_calls);
-    storeAppendPrintf(sentry, "{dnsserver avg service time: %d msec}\n",
+    storeAppendPrintf(sentry, "dnsserver avg service time: %d msec\n",
 	FqdncacheStats.avg_svc_time);
-    storeAppendPrintf(sentry, "}\n\n");
-    storeAppendPrintf(sentry, "{FQDN Cache Contents:\n\n");
+    storeAppendPrintf(sentry, "FQDN Cache Contents:\n\n");
 
     next = (fqdncache_entry *) hash_first(fqdn_table);
     while ((f = next) != NULL) {