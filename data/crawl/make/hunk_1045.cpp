 	{
 	  print_spaces (depth);
 	  if (d_mtime == (FILE_TIMESTAMP) -1)
-	    printf (_("Dependency `%s' does not exist.\n"), dep_name (d));
+	    printf (_("Prerequisite `%s' does not exist.\n"), dep_name (d));
 	  else
-	    printf (_("Dependency `%s' is %s than dependent `%s'.\n"),
+	    printf (_("Prerequisite `%s' is %s than target `%s'.\n"),
 		    dep_name (d), d->changed ? _("newer") : _("older"), file->name);
 	  fflush (stdout);
 	}
