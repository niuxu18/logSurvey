     /* RFC 2428 defines EPRT as IPv6 equivalent to IPv4 PORT command. */
     /* Which can be used by EITHER protocol. */
     debugs(9, 3, "Listening for FTP data connection on port" << comm_local_port(data.conn->fd) << " or port?" << data.conn->local.port());
-    mb.Printf("EPRT |%d|%s|%d|%s",
+    mb.appendf("EPRT |%d|%s|%d|%s",
               ( data.conn->local.isIPv6() ? 2 : 1 ),
               data.conn->local.toStr(buf,MAX_IPSTRLEN),
               comm_local_port(data.conn->fd), Ftp::crlf );
