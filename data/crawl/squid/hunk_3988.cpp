                  ThisCache);
         strListAdd(&strVia, bbuf, ',');
         hdr->delById(HDR_VIA);
-        hdr->putStr(HDR_VIA, strVia.buf());
+        hdr->putStr(HDR_VIA, strVia.unsafeBuf());
     }
     /* Signal keep-alive if needed */
     hdr->putStr(http->flags.accel ? HDR_CONNECTION : HDR_PROXY_CONNECTION,