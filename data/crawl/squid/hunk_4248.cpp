         break;
 
     case 'm':
-        p = err->auth_user_request->denyMessage("[not available]");
+        p = auth_user_request->denyMessage("[not available]");
 
         break;
 
     case 'M':
-        p = r ? RequestMethodStr(r->method) : "[unknown method]";
+        p = request ? RequestMethodStr(request->method) : "[unknown method]";
 
         break;
 