                  orig_request->http_ver.major,
                  orig_request->http_ver.minor, ThisCache);
         strListAdd(&strVia, bbuf, ',');
-        hdr_out->putStr(HDR_VIA, strVia.buf());
+        hdr_out->putStr(HDR_VIA, strVia.unsafeBuf());
         strVia.clean();
     }
 
