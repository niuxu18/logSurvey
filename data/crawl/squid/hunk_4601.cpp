      * XXX These should use HttpHdr interfaces instead of Printfs
      */
     const ICAPServiceRep &s = service();
-    buf.Printf("%s %s ICAP/1.0\r\n", s.methodStr(), s.uri.buf());
-    buf.Printf("Host: %s:%d\r\n", s.host.buf(), s.port);
+    buf.Printf("%s %s ICAP/1.0\r\n", s.methodStr(), s.uri.c_str());
+    buf.Printf("Host: %s:%d\r\n", s.host.c_str(), s.port);
     buf.Printf("Date: %s\r\n", mkrfc1123(squid_curtime));
 
     if (!TheICAPConfig.reuse_connections)
