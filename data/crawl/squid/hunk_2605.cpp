         no_urlescape = 1;
         break;
 
+    case 'x':
+        if (detail)
+            mb.Printf("%s", detail->errorName());
+        else if (!building_deny_info_url)
+            p = "[Unknown Error Code]";
+        break;
+
     case 'z':
         if (building_deny_info_url) break;
         if (dnsError.size() > 0)
