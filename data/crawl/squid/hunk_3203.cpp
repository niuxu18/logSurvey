             dom = firstdom;
 
         if (dom == NULL) {
-            (void) printf("ERR\n");
+            SEND_ERR("");
             continue;
         }
         if ((p = popen(shcmd, "w")) == NULL) {
-            (void) printf("ERR\n");
+            SEND_ERR("");
             continue;
         }
         (void) fprintf(p, "%s\n", dom->name);
