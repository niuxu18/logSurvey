         hdr->putStr(Http::HdrType::TRANSFER_ENCODING, "chunked");
     }
 
-    /* Append VIA */
-    if (Config.onoff.via) {
-        LOCAL_ARRAY(char, bbuf, MAX_URL + 32);
-        String strVia;
-        hdr->getList(Http::HdrType::VIA, &strVia);
-        snprintf(bbuf, MAX_URL + 32, "%d.%d %s",
-                 reply->sline.version.major,
-                 reply->sline.version.minor,
-                 ThisCache);
-        strListAdd(&strVia, bbuf, ',');
-        hdr->delById(Http::HdrType::VIA);
-        hdr->putStr(Http::HdrType::VIA, strVia.termedBuf());
-    }
+    hdr->addVia(reply->sline.version);
+
     /* Signal keep-alive or close explicitly */
     hdr->putStr(Http::HdrType::CONNECTION, request->flags.proxyKeepalive ? "keep-alive" : "close");
 
