     }
 #endif /* HAVE_KRB5 && HAVE_GSSAPI */
 
-    httpHeaderPutStrf(hdr_out, header, "Basic %s",
-                      old_base64_encode(request->peer_login));
+    blen = base64_encode_update(&ctx, loginbuf, strlen(request->peer_login), reinterpret_cast<const uint8_t*>(request->peer_login));
+    blen += base64_encode_final(&ctx, loginbuf+blen);
+    httpHeaderPutStrf(hdr_out, header, "Basic %.*s", blen, loginbuf);
     return;
 }
 
