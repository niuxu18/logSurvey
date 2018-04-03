   struct file *deleted_file;
   struct file *f;
 
+  /* If it's already that name, we're done.  */
   file_key.hname = to_hname;
-  if (0 == file_hash_cmp (from_file, &file_key))
+  if (! file_hash_cmp (from_file, &file_key))
     return;
 
+  /* Find the end of the renamed list for the "from" file.  */
   file_key.hname = from_file->hname;
   while (from_file->renamed != 0)
     from_file = from_file->renamed;
   if (file_hash_cmp (from_file, &file_key))
-    /* hname changed unexpectedly */
+    /* hname changed unexpectedly!! */
     abort ();
 
+  /* Remove the "from" file from the hash.  */
   deleted_file = hash_delete (&files, from_file);
   if (deleted_file != from_file)
     /* from_file isn't the one stored in files */
     abort ();
 
+  /* Find where the newly renamed file will go in the hash.  */
   file_key.hname = to_hname;
   file_slot = (struct file **) hash_find_slot (&files, &file_key);
   to_file = *file_slot;
 
+  /* Change the hash name for this file.  */
   from_file->hname = to_hname;
   for (f = from_file->double_colon; f != 0; f = f->prev)
     f->hname = to_hname;
 
+  /* If the new name doesn't exist yet just set it to the renamed file.  */
   if (HASH_VACANT (to_file))
-    hash_insert_at (&files, from_file, file_slot);
-  else
     {
-      /* TO_FILE already exists under TO_HNAME.
-	 We must retain TO_FILE and merge FROM_FILE into it.  */
+      hash_insert_at (&files, from_file, file_slot);
+      return;
+    }
 
-      if (from_file->cmds != 0)
-	{
-	  if (to_file->cmds == 0)
-	    to_file->cmds = from_file->cmds;
-	  else if (from_file->cmds != to_file->cmds)
-	    {
-	      /* We have two sets of commands.  We will go with the
-		 one given in the rule explicitly mentioning this name,
-		 but give a message to let the user know what's going on.  */
-	      if (to_file->cmds->fileinfo.filenm != 0)
-                error (&from_file->cmds->fileinfo,
-		       _("Commands were specified for file `%s' at %s:%lu,"),
-		       from_file->name, to_file->cmds->fileinfo.filenm,
-		       to_file->cmds->fileinfo.lineno);
-	      else
-		error (&from_file->cmds->fileinfo,
-		       _("Commands for file `%s' were found by implicit rule search,"),
-		       from_file->name);
-	      error (&from_file->cmds->fileinfo,
-		     _("but `%s' is now considered the same file as `%s'."),
-		     from_file->name, to_hname);
-	      error (&from_file->cmds->fileinfo,
-		     _("Commands for `%s' will be ignored in favor of those for `%s'."),
-		     to_hname, from_file->name);
-	    }
-	}
+  /* TO_FILE already exists under TO_HNAME.
+     We must retain TO_FILE and merge FROM_FILE into it.  */
 
-      /* Merge the dependencies of the two files.  */
+  if (from_file->cmds != 0)
+    {
+      if (to_file->cmds == 0)
+        to_file->cmds = from_file->cmds;
+      else if (from_file->cmds != to_file->cmds)
+        {
+          /* We have two sets of commands.  We will go with the
+             one given in the rule explicitly mentioning this name,
+             but give a message to let the user know what's going on.  */
+          if (to_file->cmds->fileinfo.filenm != 0)
+            error (&from_file->cmds->fileinfo,
+                   _("Commands were specified for file `%s' at %s:%lu,"),
+                   from_file->name, to_file->cmds->fileinfo.filenm,
+                   to_file->cmds->fileinfo.lineno);
+          else
+            error (&from_file->cmds->fileinfo,
+                   _("Commands for file `%s' were found by implicit rule search,"),
+                   from_file->name);
+          error (&from_file->cmds->fileinfo,
+                 _("but `%s' is now considered the same file as `%s'."),
+                 from_file->name, to_hname);
+          error (&from_file->cmds->fileinfo,
+                 _("Commands for `%s' will be ignored in favor of those for `%s'."),
+                 to_hname, from_file->name);
+        }
+    }
 
-      if (to_file->deps == 0)
-	to_file->deps = from_file->deps;
-      else
-	{
-	  register struct dep *deps = to_file->deps;
-	  while (deps->next != 0)
-	    deps = deps->next;
-	  deps->next = from_file->deps;
-	}
+  /* Merge the dependencies of the two files.  */
 
-      merge_variable_set_lists (&to_file->variables, from_file->variables);
+  if (to_file->deps == 0)
+    to_file->deps = from_file->deps;
+  else
+    {
+      struct dep *deps = to_file->deps;
+      while (deps->next != 0)
+        deps = deps->next;
+      deps->next = from_file->deps;
+    }
 
-      if (to_file->double_colon && from_file->is_target && !from_file->double_colon)
-	fatal (NILF, _("can't rename single-colon `%s' to double-colon `%s'"),
-	       from_file->name, to_hname);
-      if (!to_file->double_colon  && from_file->double_colon)
-	{
-	  if (to_file->is_target)
-	    fatal (NILF, _("can't rename double-colon `%s' to single-colon `%s'"),
-		   from_file->name, to_hname);
-	  else
-	    to_file->double_colon = from_file->double_colon;
-	}
+  merge_variable_set_lists (&to_file->variables, from_file->variables);
+
+  if (to_file->double_colon && from_file->is_target && !from_file->double_colon)
+    fatal (NILF, _("can't rename single-colon `%s' to double-colon `%s'"),
+           from_file->name, to_hname);
+  if (!to_file->double_colon  && from_file->double_colon)
+    {
+      if (to_file->is_target)
+        fatal (NILF, _("can't rename double-colon `%s' to single-colon `%s'"),
+               from_file->name, to_hname);
+      else
+        to_file->double_colon = from_file->double_colon;
+    }
 
-      if (from_file->last_mtime > to_file->last_mtime)
-	/* %%% Kludge so -W wins on a file that gets vpathized.  */
-	to_file->last_mtime = from_file->last_mtime;
+  if (from_file->last_mtime > to_file->last_mtime)
+    /* %%% Kludge so -W wins on a file that gets vpathized.  */
+    to_file->last_mtime = from_file->last_mtime;
 
-      to_file->mtime_before_update = from_file->mtime_before_update;
+  to_file->mtime_before_update = from_file->mtime_before_update;
 
 #define MERGE(field) to_file->field |= from_file->field
-      MERGE (precious);
-      MERGE (tried_implicit);
-      MERGE (updating);
-      MERGE (updated);
-      MERGE (is_target);
-      MERGE (cmd_target);
-      MERGE (phony);
-      MERGE (ignore_vpath);
+  MERGE (precious);
+  MERGE (tried_implicit);
+  MERGE (updating);
+  MERGE (updated);
+  MERGE (is_target);
+  MERGE (cmd_target);
+  MERGE (phony);
+  MERGE (ignore_vpath);
 #undef MERGE
 
-      from_file->renamed = to_file;
+  from_file->renamed = to_file;
+}
+
+/* Rename FILE to NAME.  This is not as simple as resetting
+   the `name' member, since it must be put in a new hash bucket,
+   and possibly merged with an existing file called NAME.  */
+
+void
+rename_file (struct file *from_file, const char *to_hname)
+{
+  rehash_file (from_file, to_hname);
+  while (from_file)
+    {
+      from_file->name = from_file->hname;
+      from_file = from_file->prev;
     }
 }
 
