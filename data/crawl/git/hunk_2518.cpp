 	struct name_entry entry;
 	struct object *obj = &tree->object;
 
-	if (!has_sha1_file(obj->sha1))
+	if (!has_object_file(&obj->oid))
 		return;
 	if (parse_tree(tree) < 0)
-		die("bad tree %s", sha1_to_hex(obj->sha1));
+		die("bad tree %s", oid_to_hex(&obj->oid));
 
 	init_tree_desc(&desc, tree->buffer, tree->size);
 	while (tree_entry(&desc, &entry)) {
