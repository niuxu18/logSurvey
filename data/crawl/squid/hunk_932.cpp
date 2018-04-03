 void
 MemObject::stat(MemBuf * mb) const
 {
-    mb->Printf("\t" SQUIDSBUFPH " %s\n", SQUIDSBUFPRINT(method.image()), logUri());
+    mb->appendf("\t" SQUIDSBUFPH " %s\n", SQUIDSBUFPRINT(method.image()), logUri());
     if (vary_headers)
-        mb->Printf("\tvary_headers: %s\n", vary_headers);
-    mb->Printf("\tinmem_lo: %" PRId64 "\n", inmem_lo);
-    mb->Printf("\tinmem_hi: %" PRId64 "\n", data_hdr.endOffset());
-    mb->Printf("\tswapout: %" PRId64 " bytes queued\n",
-               swapout.queue_offset);
+        mb->appendf("\tvary_headers: %s\n", vary_headers);
+    mb->appendf("\tinmem_lo: %" PRId64 "\n", inmem_lo);
+    mb->appendf("\tinmem_hi: %" PRId64 "\n", data_hdr.endOffset());
+    mb->appendf("\tswapout: %" PRId64 " bytes queued\n", swapout.queue_offset);
 
     if (swapout.sio.getRaw())
-        mb->Printf("\tswapout: %" PRId64 " bytes written\n",
-                   (int64_t) swapout.sio->offset());
+        mb->appendf("\tswapout: %" PRId64 " bytes written\n", (int64_t) swapout.sio->offset());
 
     if (xitTable.index >= 0)
-        mb->Printf("\ttransient index: %d state: %d\n",
-                   xitTable.index, xitTable.io);
+        mb->appendf("\ttransient index: %d state: %d\n", xitTable.index, xitTable.io);
     if (memCache.index >= 0)
-        mb->Printf("\tmem-cache index: %d state: %d offset: %" PRId64 "\n",
-                   memCache.index, memCache.io, memCache.offset);
+        mb->appendf("\tmem-cache index: %d state: %d offset: %" PRId64 "\n", memCache.index, memCache.io, memCache.offset);
     if (object_sz >= 0)
-        mb->Printf("\tobject_sz: %" PRId64 "\n", object_sz);
+        mb->appendf("\tobject_sz: %" PRId64 "\n", object_sz);
     if (smpCollapsed)
-        mb->Printf("\tsmp-collapsed\n");
+        mb->appendf("\tsmp-collapsed\n");
 
     StoreClientStats statsVisitor(mb);
 
