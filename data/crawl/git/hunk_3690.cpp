 		return DIFF_STATUS_MODIFIED;
 }
 
+static const char *add_would_remove_warning = N_(
+	"You ran 'git add' with neither '-A (--all)' or '--no-all', whose\n"
+"behaviour will change in Git 2.0 with respect to paths you removed from\n"
+"your working tree. Paths like '%s' that are\n"
+"removed are ignored with this version of Git.\n"
+"\n"
+"* 'git add --no-all <pathspec>', which is the current default, ignores\n"
+"  paths you removed from your working tree.\n"
+"\n"
+"* 'git add --all <pathspec>' will let you also record the removals.\n"
+"\n"
+"Run 'git status' to check the paths you removed from your working tree.\n");
+
 static void warn_add_would_remove(const char *path)
 {
-	warning(_("In Git 2.0, 'git add <pathspec>...' will also update the\n"
-		  "index for paths removed from the working tree that match\n"
-		  "the given pathspec. If you want to 'add' only changed\n"
-		  "or newly created paths, say 'git add --no-all <pathspec>...'"
-		  " instead.\n\n"
-		  "'%s' would be removed from the index without --no-all."),
-		path);
+	warning(_(add_would_remove_warning), path);
 }
 
 static void update_callback(struct diff_queue_struct *q,