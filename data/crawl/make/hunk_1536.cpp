 	  if (!f->dontcare)
 	    {
 	      if (sig)
-		error ("*** Deleting file `%s'", f->name);
+		error ("*** Deleting intermediate file `%s'", f->name);
 	      else if (!silent_flag)
 		{
 		  if (! doneany)
