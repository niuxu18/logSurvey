     storeAppendPrintf(dumpEntry, "---- ------ ---- -------- -------- --------------------- ------------------------------\n");
 #endif
 
-    for (i = 0; i < Squid_MaxFD; ++i) {
-        fd_table[i].dumpStats(*dumpEntry, i);
+    for (int i = 0; i < Squid_MaxFD; ++i) {
+        fde::Table[i].dumpStats(*dumpEntry, i);
     }
 }
 
 char const *
 fde::remoteAddr() const
 {
-    LOCAL_ARRAY(char, buf, MAX_IPSTRLEN );
-
-    if (type != FD_SOCKET)
-        return null_string;
-
-    if ( *ipaddr )
-        snprintf( buf, MAX_IPSTRLEN, "%s:%d", ipaddr, (int)remote_port);
-    else
-        local_addr.toUrl(buf,MAX_IPSTRLEN); // toHostStr does not include port.
+    static char buf[MAX_IPSTRLEN];
+    *buf = 0;
+
+    if (type == FD_SOCKET) {
+        if (*ipaddr)
+            snprintf(buf, MAX_IPSTRLEN, "%s:%u", ipaddr, remote_port);
+        else
+            local_addr.toUrl(buf,MAX_IPSTRLEN); // toHostStr does not include port.
+    }
 
     return buf;
 }
 
-void
-fde::noteUse()
-{
-    ++ pconn.uses;
-}
-
