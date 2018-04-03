     if (strncasecmp(reply, "TT ", 3) == 0) {
         /* we have been given a blob to send to the client */
         safe_free(lm_request->server_blob);
-        lm_request->request->flags.setMustKeepalive();
-        if (lm_request->request->flags.proxyKeepalive()) {
+        lm_request->request->flags.must_keepalive = 1;
+        if (lm_request->request->flags.proxy_keepalive) {
             lm_request->server_blob = xstrdup(blob);
             auth_user_request->user()->credentials(Auth::Handshake);
             auth_user_request->denyMessage("Authentication in progress");
