         auth_user_request->denyMessage(blob);
         ntlm_request->auth_state = AUTHENTICATE_STATE_FAILED;
         safe_free(ntlm_request->server_blob);
-        authenticateNTLMReleaseServer(ntlm_request);
-        result = S_HELPER_RELEASE;
+        ntlm_request->releaseAuthServer();
         debugs(29, 1, "authenticateNTLMHandleReply: Error validating user via NTLM. Error returned '" << reply << "'");
     } else {
         /* protocol error */
