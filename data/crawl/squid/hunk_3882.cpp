 static void
 clientPackTermBound(String boundary, MemBuf * mb)
 {
-    mb->Printf("\r\n--%.*s--\r\n", boundary.psize(), boundary.rawBuf());
+    mb->Printf("\r\n--" SQUIDSTRINGPH "--\r\n", SQUIDSTRINGPRINT(boundary));
     debugs(33, 6, "clientPackTermBound: buf offset: " << mb->size);
 }
 
