 void
 DelayTaggedBucket::stats (StoreEntry *entry) const
 {
-    storeAppendPrintf(entry, " %s:", tag.buf());
+    storeAppendPrintf(entry, " %s:", tag.unsafeBuf());
     theBucket.stats (entry);
 }
 
