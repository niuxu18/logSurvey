   if (val == end)
     {
     err:
-      fprintf (stderr, _("%s: Invalid byte value `%s'\n"), com, val);
+      fprintf (stderr, _("%s: %s: Invalid byte value `%s'\n"),
+	       exec_name, com, val);
       return 0;
     }
 
