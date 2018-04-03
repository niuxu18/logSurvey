         else
             urlpath_or_slash = "/";
 
-        str.Printf(SQUIDSBUFPH " " SQUIDSTRINGPH " %s/%d.%d\n",
-                   SQUIDSBUFPRINT(request->method.image()),
-                   SQUIDSTRINGPRINT(urlpath_or_slash),
-                   AnyP::ProtocolType_str[request->http_ver.protocol],
-                   request->http_ver.major, request->http_ver.minor);
+        str.appendf(SQUIDSBUFPH " " SQUIDSTRINGPH " %s/%d.%d\n",
+                    SQUIDSBUFPRINT(request->method.image()),
+                    SQUIDSTRINGPRINT(urlpath_or_slash),
+                    AnyP::ProtocolType_str[request->http_ver.protocol],
+                    request->http_ver.major, request->http_ver.minor);
         request->header.packInto(&str);
     }
 
-    str.Printf("\r\n");
+    str.append("\r\n", 2);
     /* - FTP stuff */
 
     if (ftp.request) {
-        str.Printf("FTP Request: %s\r\n", ftp.request);
-        str.Printf("FTP Reply: %s\r\n", (ftp.reply? ftp.reply:"[none]"));
-        str.Printf("FTP Msg: ");
+        str.appendf("FTP Request: %s\r\n", ftp.request);
+        str.appendf("FTP Reply: %s\r\n", (ftp.reply? ftp.reply:"[none]"));
+        str.append("FTP Msg: ", 9);
         wordlistCat(ftp.server_msg, &str);
-        str.Printf("\r\n");
+        str.append("\r\n", 2);
     }
 
-    str.Printf("\r\n");
-    mb->Printf("&body=%s", rfc1738_escape_part(str.buf));
+    str.append("\r\n", 2);
+    mb->appendf("&body=%s", rfc1738_escape_part(str.buf));
     str.clean();
     return 0;
 }
