  */
 
 #include "squid.h"
+#include "HttpRequest.h"
 
-HttpRequest *
-requestCreate(method_t method, protocol_t protocol, const char *aUrlpath)
+
+HttpRequest::HttpRequest() : HttpMsg(hoRequest)
+{
+    fatal("Not implemented");
+}
+
+HttpRequest::HttpRequest(method_t method, protocol_t protocol, const char *aUrlpath) : HttpMsg(hoRequest)
+{
+    fatal("Not implemented");
+}
+
+HttpRequest::~HttpRequest()
+{}
+
+void
+HttpRequest::packFirstLineInto(Packer * p, bool full_uri) const
+{
+    fatal("Not implemented");
+}
+
+bool
+HttpRequest::sanityCheckStartLine(MemBuf *buf, http_status *error)
+{
+    fatal("Not implemented");
+    return false;
+}
+
+void
+HttpRequest::hdrCacheInit()
+{
+    fatal("Not implemented");
+}
+
+void
+HttpRequest::reset()
 {
     fatal("Not implemented");
-    return NULL;
 }
 
-HttpRequest *
-requestLink(HttpRequest * request)
+bool
+HttpRequest::expectingBody(method_t unused, ssize_t&) const
 {
     fatal("Not implemented");
-    return NULL;
+    return false;
 }
 
 void
-requestUnlink(HttpRequest * request)
+HttpRequest::initHTTP(method_t aMethod, protocol_t aProtocol, const char *aUrlpath)
 {
-    if (!request)
-        return;
+    fatal("Not implemented");
+}
 
+bool
+HttpRequest::parseFirstLine(const char *start, const char *end)
+{
     fatal("Not implemented");
+    return false;
 }
 
 /*
