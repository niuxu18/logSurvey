     }
 }
 
-/* add the [proxy]authorisation header */
-void
-AuthNegotiateUserRequest::addHeader(HttpReply * rep, int accel)
-{
-    http_hdr_type type;
-
-    if (!server_blob)
-        return;
-
-    /* don't add to authentication error pages */
-    if ((!accel && rep->sline.status == HTTP_PROXY_AUTHENTICATION_REQUIRED)
-            || (accel && rep->sline.status == HTTP_UNAUTHORIZED))
-        return;
-
-    type = accel ? HDR_AUTHENTICATION_INFO : HDR_PROXY_AUTHENTICATION_INFO;
-    httpHeaderPutStrf(&rep->header, type, "Negotiate %s", server_blob);
-
-    safe_free(server_blob);
-}
-
-/** send the initial data to a stateful negotiate authenticator module */
 void
 AuthNegotiateUserRequest::module_start(RH * handler, void *data)
 {
