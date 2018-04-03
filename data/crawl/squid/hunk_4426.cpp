             /* use port# only if not default */
 
             if (orig_request->port == urlDefaultPort(orig_request->protocol)) {
-                hdr_out->putStr(HDR_HOST, orig_request->host);
+                hdr_out->putStr(HDR_HOST, orig_request->GetHost());
             } else {
                 httpHeaderPutStrf(hdr_out, HDR_HOST, "%s:%d",
-                                  orig_request->host, (int) orig_request->port);
+                                  orig_request->GetHost(),
+                                  (int) orig_request->port);
             }
         }
 
