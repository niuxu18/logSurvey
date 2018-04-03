     // http://www.haproxy.org/download/1.5/doc/proxy-protocol.txt
 
     // detect and parse PROXY/2.0 protocol header
-    if (in.buf.startsWith(Proxy2p0magic))
+    if (inBuf.startsWith(Proxy2p0magic))
         return parseProxy2p0();
 
     // detect and parse PROXY/1.0 protocol header
-    if (in.buf.startsWith(Proxy1p0magic))
+    if (inBuf.startsWith(Proxy1p0magic))
         return parseProxy1p0();
 
     // detect and terminate other protocols
-    if (in.buf.length() >= Proxy2p0magic.length()) {
+    if (inBuf.length() >= Proxy2p0magic.length()) {
         // PROXY/1.0 magic is shorter, so we know that
         // the input does not start with any PROXY magic
         return proxyProtocolError("PROXY protocol error: invalid header");
