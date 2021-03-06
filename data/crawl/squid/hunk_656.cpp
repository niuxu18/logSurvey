         fatalf("Unable to generate signing SSL certificate for untrusted sites for %s_port %s", AnyP::ProtocolType_str[transport.protocol], s.toUrl(buf, sizeof(buf)));
     }
 
-    if (crlfile)
-        clientVerifyCrls.reset(Ssl::loadCrl(crlfile, sslContextFlags));
+    if (!secure.crlFile.isEmpty())
+        clientVerifyCrls.reset(Ssl::loadCrl(secure.crlFile.c_str(), secure.parsedFlags));
 
     if (clientca) {
         clientCA.reset(SSL_load_client_CA_file(clientca));
