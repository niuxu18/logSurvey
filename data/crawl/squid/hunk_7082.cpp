 }
 
 static void
-dump_refreshpattern(refresh_t * head)
+dump_refreshpattern(StoreEntry *entry, const char *name, refresh_t * head)
 {
-    assert(0);
+    storeAppendPrintf(entry, "%s -- UNIMPLEMENTED\n", name);
 }
 
 static void
