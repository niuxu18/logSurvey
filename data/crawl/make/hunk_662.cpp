 	{
 	  /* Single-colon.  Combine these dependencies
 	     with others in file's existing record, if any.  */
-	  f = enter_file (name);
+	  f = enter_file (strcache_add (name));
 
 	  if (f->double_colon)
 	    fatal (flocp,
