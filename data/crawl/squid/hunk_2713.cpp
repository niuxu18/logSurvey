     return NULL;
 }
 
-void
-BasicUser::deleteSelf() const
-{
-    delete this;
-}
-
 BasicUser::BasicUser(AuthConfig *aConfig) :
         AuthUser(aConfig),
         passwd(NULL),
         auth_queue(NULL),
-        cleartext(NULL),
-        currentRequest(NULL),
-        httpAuthHeader(NULL)
+        currentRequest(NULL)
 {}
 
-bool
-BasicUser::decodeCleartext()
-{
-    char *sent_auth = NULL;
-
-    /* username and password */
-    sent_auth = xstrdup(httpAuthHeader);
-
-    /* Trim trailing \n before decoding */
-    strtok(sent_auth, "\n");
-
-    cleartext = uudecode(sent_auth);
-
-    safe_free(sent_auth);
-
-    if (!cleartext)
-        return false;
-
-    /*
-     * Don't allow NL or CR in the credentials.
-     * Oezguer Kesim <oec@codeblau.de>
-     */
-    debugs(29, 9, HERE << "'" << cleartext << "'");
-
-    if (strcspn(cleartext, "\r\n") != strlen(cleartext)) {
-        debugs(29, 1, HERE << "bad characters in authorization header '" << httpAuthHeader << "'");
-        safe_free(cleartext);
-        return false;
-    }
-    return true;
-}
-
-void
-BasicUser::extractUsername()
+char *
+AuthBasicConfig::decodeCleartext(const char *httpAuthHeader)
 {
-    char * seperator = strchr(cleartext, ':');
-
-    if (seperator == NULL) {
-        username(cleartext);
-    } else {
-        /* terminate the username */
-        *seperator = '\0';
+    const char *proxy_auth = httpAuthHeader;
 
-        username(cleartext);
-
-        /* replace the colon so we can find the password */
-        *seperator = ':';
-    }
-
-    if (!static_cast<AuthBasicConfig*>(config)->casesensitive)
-        Tolower((char *)username());
-}
+    /* trim BASIC from string */
+    while (xisgraph(*proxy_auth))
+        proxy_auth++;
 
-void
-BasicUser::extractPassword()
-{
-    passwd = strchr(cleartext, ':');
+    /* Trim leading whitespace before decoding */
+    while (xisspace(*proxy_auth))
+        proxy_auth++;
 
-    if (passwd == NULL) {
-        debugs(29, 4, HERE << "no password in proxy authorization header '" << httpAuthHeader << "'");
-        passwd = NULL;
-        currentRequest->setDenyMessage("no password was present in the HTTP [proxy-]authorization header. This is most likely a browser bug");
-    } else {
-        ++passwd;
-        if (*passwd == '\0') {
-            debugs(29, 4, HERE << "Disallowing empty password,user is '" << username() << "'");
-            passwd = NULL;
-            currentRequest->setDenyMessage("Request denied because you provided an empty password. Users MUST have a password.");
-        } else {
-            passwd = xstrndup(passwd, USER_IDENT_SZ);
+    /* Trim trailing \n before decoding */
+    // XXX: really? is the \n actually still there? does the header parse not drop it?
+    char *eek = xstrdup(proxy_auth);
+    strtok(eek, "\n");
+    char *cleartext = uudecode(eek);
+    safe_free(eek);
+
+    if (cleartext) {
+        /*
+         * Don't allow NL or CR in the credentials.
+         * Oezguer Kesim <oec@codeblau.de>
+         */
+        debugs(29, 9, HERE << "'" << cleartext << "'");
+
+        if (strcspn(cleartext, "\r\n") != strlen(cleartext)) {
+            debugs(29, DBG_IMPORTANT, "WARNING: Bad characters in authorization header '" << httpAuthHeader << "'");
+            safe_free(cleartext);
         }
     }
-}
-
-void
-BasicUser::decode(char const *proxy_auth, AuthUserRequest::Pointer auth_user_request)
-{
-    currentRequest = auth_user_request;
-    httpAuthHeader = proxy_auth;
-    if (decodeCleartext()) {
-        extractUsername();
-        extractPassword();
-    }
-    currentRequest = NULL; // AYJ: why ?? we have only just filled it with data!
-    // so that we dont have circular UserRequest->User->UseRequest loops persisting outside the auth decode sequence????
-
-    // okay we dont need the original buffer string any more.
-    httpAuthHeader = NULL;
+    return cleartext;
 }
 
 bool
