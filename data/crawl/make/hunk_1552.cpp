 	printf (" %s", dep_name (d));
       putchar ('\n');
 
-      if (r->subdir)
-	{
-	  ++subdir;
-	  puts ("#  references nonexistent subdirectory.");
-	}
-
       if (r->cmds != 0)
 	print_commands (r->cmds);
     }
