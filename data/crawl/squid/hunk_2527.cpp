 
             static int warnedCount = 0;
             if (warnedCount++ < 100) {
-                const char *url = entry ? entry->url() : urlCanonical(orig_request);
+                const char *url = entry ? entry->url() : urlCanonical(request);
                 debugs(11, 1, "Warning: likely forwarding loop with " << url);
             }
         }
 
         if (strcmp(opt_forwarded_for, "on") == 0) {
             /** If set to ON - append client IP or 'unknown'. */
-            if ( orig_request->client_addr.IsNoAddr() )
+            if ( request->client_addr.IsNoAddr() )
                 strListAdd(&strFwd, "unknown", ',');
             else
-                strListAdd(&strFwd, orig_request->client_addr.NtoA(ntoabuf, MAX_IPSTRLEN), ',');
+                strListAdd(&strFwd, request->client_addr.NtoA(ntoabuf, MAX_IPSTRLEN), ',');
         } else if (strcmp(opt_forwarded_for, "off") == 0) {
             /** If set to OFF - append 'unknown'. */
             strListAdd(&strFwd, "unknown", ',');
         } else if (strcmp(opt_forwarded_for, "transparent") == 0) {
             /** If set to TRANSPARENT - pass through unchanged. */
         } else if (strcmp(opt_forwarded_for, "truncate") == 0) {
             /** If set to TRUNCATE - drop existing list and replace with client IP or 'unknown'. */
-            if ( orig_request->client_addr.IsNoAddr() )
+            if ( request->client_addr.IsNoAddr() )
                 strFwd = "unknown";
             else
-                strFwd = orig_request->client_addr.NtoA(ntoabuf, MAX_IPSTRLEN);
+                strFwd = request->client_addr.NtoA(ntoabuf, MAX_IPSTRLEN);
         }
         if (strFwd.size() > 0)
             hdr_out->putStr(HDR_X_FORWARDED_FOR, strFwd.termedBuf());
