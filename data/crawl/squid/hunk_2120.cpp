 SwapDir::optionObjectSizeDump(StoreEntry * e) const
 {
     if (min_objsize != 0)
-        storeAppendPrintf(e, " min-size=%"PRId64, min_objsize);
+        storeAppendPrintf(e, " min-size=%" PRId64, min_objsize);
 
     if (max_objsize != -1)
-        storeAppendPrintf(e, " max-size=%"PRId64, max_objsize);
+        storeAppendPrintf(e, " max-size=%" PRId64, max_objsize);
 }
 
 // some SwapDirs may maintain their indexes and be able to lookup an entry key
