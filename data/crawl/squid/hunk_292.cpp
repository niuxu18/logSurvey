         /* yes, fall through, we do not want to loose the first line */
 
         case isBody:
+        {
             /* interpret [and reformat] cache response */
-
+            MemBuf out;
+            out.init();
             if (parse_menu)
-                fputs(munge_menu_line(buf, req), stdout);
+                munge_menu_line(out, buf, req);
             else
-                fputs(munge_other_line(buf, req), stdout);
+                munge_other_line(out, buf, req);
 
-            break;
+            fputs(out.buf, stdout);
+        }
+        break;
 
         case isForward:
             /* forward: no modifications allowed */