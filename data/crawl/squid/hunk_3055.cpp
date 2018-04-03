     } else if (request->flags.connection_auth && !reply->keep_alive) {
         debugs(33, 2, "clientBuildReplyHeader: Connection oriented auth but server side non-persistent");
         request->flags.proxy_keepalive = 0;
-    } else if (reply->bodySize(request->method) < 0) {
+    } else if (reply->bodySize(request->method) < 0 && !maySendChunkedReply) {
         debugs(88, 3, "clientBuildReplyHeader: can't keep-alive, unknown body size" );
         request->flags.proxy_keepalive = 0;
     } else if (fdUsageHigh()&& !request->flags.must_keepalive) {
         debugs(88, 3, "clientBuildReplyHeader: Not many unused FDs, can't keep-alive");
         request->flags.proxy_keepalive = 0;
     }
 
+    // Decide if we send chunked reply
+    if (maySendChunkedReply &&
+        request->flags.proxy_keepalive &&
+        reply->bodySize(request->method) < 0) {
+        debugs(88, 3, "clientBuildReplyHeader: chunked reply");
+        request->flags.chunked_reply = 1;
+        hdr->putStr(HDR_TRANSFER_ENCODING, "chunked");
+    }
 
     /* Append VIA */
     if (Config.onoff.via) {
