 	if (!use_sideband && daemon_mode)
 		no_progress = 1;
 
-	if (depth == 0 && shallows.nr == 0)
+	if (depth == 0 && !deepen_rev_list && shallows.nr == 0)
 		return;
+	if (depth > 0 && deepen_rev_list)
+		die("git upload-pack: deepen and deepen-since cannot be used together");
 	if (depth > 0)
 		deepen(depth, &shallows);
+	else if (deepen_rev_list) {
+		struct argv_array av = ARGV_ARRAY_INIT;
+		int i;
+
+		argv_array_push(&av, "rev-list");
+		if (deepen_since)
+			argv_array_pushf(&av, "--max-age=%lu", deepen_since);
+		for (i = 0; i < want_obj.nr; i++) {
+			struct object *o = want_obj.objects[i].item;
+			argv_array_push(&av, oid_to_hex(&o->oid));
+		}
+		deepen_by_rev_list(av.argc, av.argv, &shallows);
+		argv_array_clear(&av);
+	}
 	else
 		if (shallows.nr > 0) {
 			int i;
