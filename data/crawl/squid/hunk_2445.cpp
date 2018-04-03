         fatalf("COSS max-size option must be less than COSS_MEMBUF_SZ (%d)\n",
                COSS_MEMBUF_SZ);
 
-    /*
-     * check that we won't overflow sfileno later.  0xFFFFFF is the
-     * largest possible sfileno, assuming sfileno is a 25-bit
-     * signed integer, as defined in structs.h.
-     */
-    max_offset = (off_t) 0xFFFFFF << blksz_bits;
+    // check that we won't overflow sfileno later.
+    const uint64_t max_offset = (uint64_t)SwapFilenMax << blksz_bits;
 
-    if ((off_t)max_size > (max_offset>>10)) {
+    if (maxSize() > max_offset) {
         debugs(47, 0, "COSS block-size = " << (1<<blksz_bits) << " bytes");
         debugs(47,0, "COSS largest file offset = " << (max_offset >> 10) << " KB");
-        debugs(47, 0, "COSS cache_dir size = " << max_size << " KB");
+        debugs(47, 0, "COSS cache_dir size = " << (maxSize() >> 10) << " KB");
         fatal("COSS cache_dir size exceeds largest offset\n");
     }
 }
