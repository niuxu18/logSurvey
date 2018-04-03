     if (virgin.header->header.has(HDR_PROXY_AUTHORIZATION)) {
         String vh=virgin.header->header.getByName("Proxy-Authorization");
         buf.Printf("Proxy-Authorization: " SQUIDSTRINGPH "\r\n", SQUIDSTRINGPRINT(vh));
+    } else if (request->extacl_user.defined() && request->extacl_user.size() && request->extacl_passwd.defined() && request->extacl_passwd.size()) {
+      char loginbuf[256];
+      snprintf(loginbuf, sizeof(loginbuf), SQUIDSTRINGPH ":" SQUIDSTRINGPH,
+              SQUIDSTRINGPRINT(request->extacl_user),
+              SQUIDSTRINGPRINT(request->extacl_passwd));
+      buf.Printf("Proxy-Authorization: Basic %s\r\n", old_base64_encode(loginbuf));
     }
 
-    const HttpRequest *request = &virginRequest();
-
     // share the cross-transactional database records if needed
     if (Adaptation::Config::masterx_shared_name) {
         Adaptation::History::Pointer ah = request->adaptHistory(false);
