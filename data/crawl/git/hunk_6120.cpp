 	char *real_ref, msg[PATH_MAX + 20];
 	struct strbuf ref = STRBUF_INIT;
 	int forcing = 0;
-	int len;
-
-	len = strlen(name);
-	if (interpret_nth_last_branch(name, &ref) != len) {
-		strbuf_reset(&ref);
-		strbuf_add(&ref, name, len);
-	}
-	strbuf_splice(&ref, 0, 0, "refs/heads/", 11);
 
-	if (check_ref_format(ref.buf))
+	if (strbuf_check_branch_ref(&ref, name))
 		die("'%s' is not a valid branch name.", name);
 
 	if (resolve_ref(ref.buf, sha1, 1, NULL)) {
