 
 	ref = (flags & NOTES_INIT_WRITABLE) ? t->update_ref : t->ref;
 	if (!starts_with(ref, "refs/notes/"))
-		die("Refusing to %s notes in %s (outside of refs/notes/)",
+		/* TRANSLATORS: the first %s will be replaced by a
+		   git notes command: 'add', 'merge', 'remove', etc.*/
+		die(_("Refusing to %s notes in %s (outside of refs/notes/)"),
 		    subcommand, ref);
 	return t;
 }
