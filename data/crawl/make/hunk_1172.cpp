 	  else if (cmds != 0 && f->cmds != 0 && f->is_target)
 	    {
 	      error (&cmds->fileinfo,
-                     "warning: overriding commands for target `%s'", f->name);
+                     _("warning: overriding commands for target `%s'"), f->name);
 	      error (&f->cmds->fileinfo,
-                     "warning: ignoring old commands for target `%s'",
+                     _("warning: ignoring old commands for target `%s'"),
                      f->name);
 	    }
 
