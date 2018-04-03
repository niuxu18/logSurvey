 Mgr::Inquirer::noteCommClosed(const CommCloseCbParams& params)
 {
     debugs(16, 5, HERE);
-    Must(fd < 0 || fd == params.fd);
-    fd = -1;
+    Must(!Comm::IsConnOpen(conn) && params.conn.getRaw() == conn.getRaw());
+    conn = NULL;
     mustStop("commClosed");
 }
 