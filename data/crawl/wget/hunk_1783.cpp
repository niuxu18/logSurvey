   double byte_value;
   if (!parse_bytes_helper (val, &byte_value))
     {
-      fprintf (stderr, _("%s: %s: Invalid byte value `%s'\n"),
-               exec_name, com, val);
+      fprintf (stderr, _("%s: %s: Invalid byte value %s\n"),
+               exec_name, com, quote (val));
       return false;
     }
   *(wgint *)place = (wgint)byte_value;