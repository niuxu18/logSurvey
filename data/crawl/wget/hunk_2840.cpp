     err:
       fprintf (stderr, _("%s: %s: Invalid time period `%s'\n"),
 	       exec_name, com, val);
-      return 0;
+      return false;
     }
 
   switch (TOLOWER (end[-1]))