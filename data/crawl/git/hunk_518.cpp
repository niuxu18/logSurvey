 	die("git upload-pack: %s", abort_msg);
 }
 
-static int got_sha1(const char *hex, unsigned char *sha1)
+static int got_oid(const char *hex, struct object_id *oid)
 {
 	struct object *o;
 	int we_knew_they_have = 0;
 
-	if (get_sha1_hex(hex, sha1))
+	if (get_oid_hex(hex, oid))
 		die("git upload-pack: expected SHA1 object, got '%s'", hex);
-	if (!has_sha1_file(sha1))
+	if (!has_object_file(oid))
 		return -1;
 
-	o = parse_object(sha1);
+	o = parse_object(oid->hash);
 	if (!o)
-		die("oops (%s)", sha1_to_hex(sha1));
+		die("oops (%s)", oid_to_hex(oid));
 	if (o->type == OBJ_COMMIT) {
 		struct commit_list *parents;
 		struct commit *commit = (struct commit *)o;
