             else
                 urlpath_or_slash = "/";
 
-            mb.Printf("%s " SQUIDSTRINGPH " HTTP/%d.%d\n",
+            mb.Printf("%s " SQUIDSTRINGPH " %s/%d.%d\n",
                       RequestMethodStr(request->method),
                       SQUIDSTRINGPRINT(urlpath_or_slash),
+                      AnyP::ProtocolType_str[request->http_ver.protocol],
                       request->http_ver.major, request->http_ver.minor);
             packerToMemInit(&pck, &mb);
             request->header.packInto(&pck);