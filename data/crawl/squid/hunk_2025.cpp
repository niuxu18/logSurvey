     if (NULL == request) {
         fatal ("requiresRequest SHOULD have been true for this ACL!!");
         return ACCESS_DENIED;
-    } else if (request->flags.sslBumped_) {
+    } else if (request->flags.sslBumped) {
         debugs(28, 5, "SslBumped request: It is an encapsulated request do not authenticate");
         checklist->auth_user_request = checklist->conn() != NULL ? checklist->conn()->auth_user_request : request->auth_user_request;
         if (checklist->auth_user_request != NULL)
