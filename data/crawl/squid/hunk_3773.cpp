     if (DnsSocket < 0) {
         int port;
 
-        IpAddress addr;
+        IpAddress addr; // since we don't want to alter Config.Addrs.udp_* and dont have one of our own.
 
         if (!Config.Addrs.udp_outgoing.IsNoAddr())
             addr = Config.Addrs.udp_outgoing;
         else
             addr = Config.Addrs.udp_incoming;
 
-        DnsSocket = comm_open(SOCK_DGRAM,
+        debugs(78, 2, "idnsInit: attempt open DNS socket to: " << addr);
+        DnsSocket = comm_open_listener(SOCK_DGRAM,
                               IPPROTO_UDP,
                               addr,
                               COMM_NONBLOCKING,
                               "DNS Socket");
 
-        debugs(78, 2, "idnsInit: attempt open DNS socket to: " << addr);
-
-#if USE_IPV6
-        if ( DnsSocket < 0 && addr.IsIPv6() && addr.SetIPv4() ) {
-            /* attempt to open this IPv4-only. */
-            DnsSocket = comm_open(SOCK_DGRAM,
-                                  IPPROTO_UDP,
-                                  addr,
-                                  COMM_NONBLOCKING,
-                                  "DNS Socket");
-
-            debugs(78, 2, "idnsInit: attempt open DNS socket to: " << addr);
-        }
-#endif
-
         if (DnsSocket < 0)
             fatal("Could not create a DNS socket");
 
