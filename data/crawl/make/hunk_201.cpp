   char *expanded = 0;
 
   if (name[0] == '\0')
-    fatal (NILF, _("empty string invalid as file name"));
+    O (fatal, NILF, _("empty string invalid as file name"));
 
   if (name[0] == '~')
     {
