     assert(ip_table != NULL);
     storeAppendPrintf(sentry, "IP Cache Statistics:\n");
     storeAppendPrintf(sentry, "IPcache Entries: %d\n",
-	meta_data.ipcache_count);
+	memInUse(MEM_IPCACHE_ENTRY));
     storeAppendPrintf(sentry, "IPcache Requests: %d\n",
 	IpcacheStats.requests);
     storeAppendPrintf(sentry, "IPcache Hits: %d\n",