     storeAppendPrintf(sentry, "FQDN Cache Statistics:\n");
 
     storeAppendPrintf(sentry, "FQDNcache Entries In Use: %d\n",
-                      memInUse(MEM_FQDNCACHE_ENTRY));
+                      fqdncache_entry::UseCount());
 
     storeAppendPrintf(sentry, "FQDNcache Entries Cached: %d\n",
                       fqdncacheCount());