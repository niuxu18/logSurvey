         else
             urlpath_or_slash = "/";
 
-        str.Printf("%s " SQUIDSTRINGPH " HTTP/%d.%d\n",
+        str.Printf("%s " SQUIDSTRINGPH " %s/%d.%d\n",
                    RequestMethodStr(request->method),
                    SQUIDSTRINGPRINT(urlpath_or_slash),
+                   AnyP::ProtocolType_str[request->http_ver.protocol],
                    request->http_ver.major, request->http_ver.minor);
         packerToMemInit(&pck, &str);
         request->header.packInto(&pck);
