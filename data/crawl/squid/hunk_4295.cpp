 void
 BasicUser::extractPassword()
 {
-    passwd = cleartext;
+    passwd = strchr(cleartext, ':');
 
-    if (cleartext == NULL) {
+    if (passwd == NULL) {
         debugs(29, 4, "authenticateBasicDecodeAuth: no password in proxy authorization header '" << httpAuthHeader << "'");
         passwd = NULL;
         currentRequest->setDenyMessage ("no password was present in the HTTP [proxy-]authorization header. This is most likely a browser bug");
-    } else if (*cleartext == '\0') {
-        debugs(29, 4, "authenticateBasicDecodeAuth: Disallowing empty password,user is '" << username() << "'");
-        passwd = NULL;
-        currentRequest->setDenyMessage ("Request denied because you provided an empty password. Users MUST have a password.");
+    } else {
+        ++passwd;
+        if (*passwd == '\0') {
+            debugs(29, 4, "authenticateBasicDecodeAuth: Disallowing empty password,user is '" << username() << "'");
+            passwd = NULL;
+            currentRequest->setDenyMessage ("Request denied because you provided an empty password. Users MUST have a password.");
+        } else {
+            passwd = xstrndup(passwd, USER_IDENT_SZ);
+        }
     }
-
-    if (passwd)
-        passwd = xstrndup(cleartext, USER_IDENT_SZ);
-
-    cleartext = NULL;
 }
 
 void