 	   Pretend it was successfully remade.  */
 	file->update_status = 0;
       else
-	{
-	  /* This is a dependency file we cannot remake.  Fail.  */
-	  static const char msg_noparent[]
-	    = "%sNo rule to make target `%s'%s";
-	  static const char msg_parent[]
-	    = "%sNo rule to make target `%s', needed by `%s'%s";
-	  if (keep_going_flag || file->dontcare)
-	    {
-	      if (!file->dontcare)
-		{
-		  if (file->parent == 0)
-		    error (msg_noparent, "*** ", file->name, ".");
-		  else
-		    error (msg_parent, "*** ",
-			   file->name, file->parent->name, ".");
-		}
- 	      file->update_status = 2;
-	    }
-	  else
-	    {
-	      if (file->parent == 0)
-		fatal (msg_noparent, "", file->name, "");
-	      else
-		fatal (msg_parent, "", file->name, file->parent->name, "");
-	    }
-	}
+        no_rule_error(file);
     }
   else
     {