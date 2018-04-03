 
     assert(r->auth_user_request != NULL);
     assert(r->auth_user_request->user()->auth_type == AUTH_BASIC);
-    basic_data *basic_auth = dynamic_cast<basic_data *>(r->auth_user_request->user());
+
+    /* this is okay since we only play with the BasicUser child fields below
+     * and dont pass the pointer itself anywhere */
+    BasicUser *basic_auth = dynamic_cast<BasicUser *>(r->auth_user_request->user().getRaw());
 
     assert(basic_auth != NULL);
 
     if (reply && (strncasecmp(reply, "OK", 2) == 0))
-        basic_auth->flags.credentials_ok = 1;
+        basic_auth->credentials(AuthUser::Ok);
     else {
-        basic_auth->flags.credentials_ok = 3;
+        basic_auth->credentials(AuthUser::Failed);
 
         if (t && *t)
             r->auth_user_request->setDenyMessage(t);
     }
 
-    basic_auth->credentials_checkedtime = squid_curtime;
+    basic_auth->expiretime = squid_curtime;
 
     if (cbdataReferenceValidDone(r->data, &cbdata))
         r->handler(cbdata, NULL);
