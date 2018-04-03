 func_findstring (char *o, char **argv, const char *funcname UNUSED)
 {
   /* Find the first occurrence of the first string in the second.  */
-  int i = strlen (argv[0]);
-  if (sindex (argv[1], 0, argv[0], i) != 0)
-    o = variable_buffer_output (o, argv[0], i);
+  if (strstr (argv[1], argv[0]) != 0)
+    o = variable_buffer_output (o, argv[0], strlen (argv[0]));
 
   return o;
 }
