      * but X-Request-URI is likely to be the very last header to ease use from a
      * debugger [hdr->entries.count-1].
      */
-    hdr->putStr(HDR_X_REQUEST_URI,
+    hdr->putStr(Http::HdrType::X_REQUEST_URI,
                 http->memOjbect()->url ? http->memObject()->url : http->uri);
 
 #endif
 
     /* Surrogate-Control requires Surrogate-Capability from upstream to pass on */
-    if ( hdr->has(HDR_SURROGATE_CONTROL) ) {
-        if (!request->header.has(HDR_SURROGATE_CAPABILITY)) {
-            hdr->delById(HDR_SURROGATE_CONTROL);
+    if ( hdr->has(Http::HdrType::SURROGATE_CONTROL) ) {
+        if (!request->header.has(Http::HdrType::SURROGATE_CAPABILITY)) {
+            hdr->delById(Http::HdrType::SURROGATE_CONTROL);
         }
         /* TODO: else case: drop any controls intended specifically for our surrogate ID */
     }
