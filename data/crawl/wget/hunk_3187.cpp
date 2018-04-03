 #else
 
 static uerr_t
-ftp_do_pasv (struct rbuf *rbuf, ip_address *addr, int *port)
+ftp_do_pasv (int csock, ip_address *addr, int *port)
 {
   if (!opt.server_response)
     logputs (LOG_VERBOSE, "==> PASV ... ");
-  return ftp_pasv (rbuf, addr, port);
+  return ftp_pasv (csock, addr, port);
 }
 
 static uerr_t
-ftp_do_port (struct rbuf *rbuf, int *local_sock)
+ftp_do_port (int csock, int *local_sock)
 {
   if (!opt.server_response)
     logputs (LOG_VERBOSE, "==> PORT ... ");
-  return ftp_port (rbuf, local_sock);
+  return ftp_port (csock, local_sock);
 }
 #endif
 
