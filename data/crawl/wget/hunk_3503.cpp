 
   log_set_flush (0);
 
+  if (dp->dots == 0)
+    logprintf (LOG_VERBOSE, "\n%5ldK", dp->rows * row_bytes / 1024);
   for (i = dp->dots; i < opt.dots_in_line; i++)
     {
       if (i % opt.dot_spacing == 0)
