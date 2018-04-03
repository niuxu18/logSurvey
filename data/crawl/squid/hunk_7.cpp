     // CONNECT response was successfully parsed
     request->hier.peer_reply_status = rep.sline.status();
 
-    // we need to relay the 401/407 responses when login=PASS(THRU)
-    const CachePeer *peer = server.conn->getPeer();
-    const char *pwd = (peer ? peer->login : nullptr);
-    const bool authRelated =
-        rep.sline.status() == Http::scUnauthorized ||
-        rep.sline.status() == Http::scProxyAuthenticationRequired;
-    const bool relay = authRelated && pwd &&
-        (strcmp(pwd, "PASS") == 0 || strcmp(pwd, "PASSTHRU") == 0);
-
     // bail if we did not get an HTTP 200 (Connection Established) response
     if (rep.sline.status() != Http::scOkay) {
         // if we ever decide to reuse the peer connection, we must extract the error response first
-        informUserOfPeerError("unsupported CONNECT response status code", (relay ? rep.hdr_sz : 0));
+        *status_ptr = rep.sline.status(); // we are relaying peer response
+        informUserOfPeerError("unsupported CONNECT response status code", rep.hdr_sz);
         return;
     }
 