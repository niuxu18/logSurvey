         break;
 
     case 'i':
-        mb.Printf("%s", src_addr.NtoA(ntoabuf,MAX_IPSTRLEN));
+        mb.Printf("%s", src_addr.toStr(ntoabuf,MAX_IPSTRLEN));
         break;
 
     case 'I':
         if (request && request->hier.tcpServer != NULL)
-            p = request->hier.tcpServer->remote.NtoA(ntoabuf,MAX_IPSTRLEN);
+            p = request->hier.tcpServer->remote.toStr(ntoabuf,MAX_IPSTRLEN);
         else if (!building_deny_info_url)
             p = "[unknown]";
         break;
