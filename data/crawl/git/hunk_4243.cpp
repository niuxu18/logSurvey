 	t = xcalloc(1, sizeof(struct notes_tree));
 	init_notes(t, "NOTES_MERGE_PARTIAL", combine_notes_overwrite, 0);
 
-	o->local_ref = resolve_ref("NOTES_MERGE_REF", sha1, 0, NULL);
+	o->local_ref = local_ref_to_free =
+		resolve_refdup("NOTES_MERGE_REF", sha1, 0, NULL);
 	if (!o->local_ref)
 		die("Failed to resolve NOTES_MERGE_REF");
-	o->local_ref = xstrdup(o->local_ref);
 
 	if (notes_merge_commit(o, t, partial, sha1))
 		die("Failed to finalize notes merge");
