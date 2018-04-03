 	object_ref = argc ? argv[0] : "HEAD";
 
 	if (get_sha1(object_ref, object))
-		die(_("Failed to resolve '%s' as a valid ref."), object_ref);
+		die(_("failed to resolve '%s' as a valid ref."), object_ref);
 
 	t = init_notes_check("show", 0);
 	note = get_note(t, object);
 
 	if (!note)
-		retval = error(_("No note found for object %s."),
+		retval = error(_("no note found for object %s."),
 			       sha1_to_hex(object));
 	else {
 		const char *show_args[3] = {"show", sha1_to_hex(note), NULL};
