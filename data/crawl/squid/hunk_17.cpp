         fatalf("Unable to generate signing SSL certificate for untrusted sites for %s_port %s", AnyP::ProtocolType_str[transport.protocol], s.toUrl(buf, sizeof(buf)));
     }
 
-    if (clientca) {
-        clientCA.reset(SSL_load_client_CA_file(clientca));
-        if (clientCA.get() == NULL) {
-            fatalf("Unable to read client CAs! from %s", clientca);
-        }
-    }
-
     if (!secure.createStaticServerContext(*this)) {
         char buf[128];
         fatalf("%s_port %s initialization error", AnyP::ProtocolType_str[transport.protocol], s.toUrl(buf, sizeof(buf)));
