 	return 0;
 }
 
-struct commit_graft *read_graft_line(char *buf, int len)
+struct commit_graft *read_graft_line(struct strbuf *line)
 {
 	/* The format is just "Commit Parent1 Parent2 ...\n" */
 	int i;
 	struct commit_graft *graft = NULL;
 	const int entry_size = GIT_SHA1_HEXSZ + 1;
 
-	while (len && isspace(buf[len-1]))
-		buf[--len] = '\0';
-	if (buf[0] == '#' || buf[0] == '\0')
+	strbuf_rtrim(line);
+	if (!line->len || line->buf[0] == '#')
 		return NULL;
-	if ((len + 1) % entry_size)
+	if ((line->len + 1) % entry_size)
 		goto bad_graft_data;
-	i = (len + 1) / entry_size - 1;
+	i = (line->len + 1) / entry_size - 1;
 	graft = xmalloc(st_add(sizeof(*graft), st_mult(GIT_SHA1_RAWSZ, i)));
 	graft->nr_parent = i;
-	if (get_oid_hex(buf, &graft->oid))
+	if (get_oid_hex(line->buf, &graft->oid))
 		goto bad_graft_data;
-	for (i = GIT_SHA1_HEXSZ; i < len; i += entry_size) {
-		if (buf[i] != ' ')
+	for (i = GIT_SHA1_HEXSZ; i < line->len; i += entry_size) {
+		if (line->buf[i] != ' ')
 			goto bad_graft_data;
-		if (get_sha1_hex(buf + i + 1, graft->parent[i/entry_size].hash))
+		if (get_sha1_hex(line->buf + i + 1, graft->parent[i/entry_size].hash))
 			goto bad_graft_data;
 	}
 	return graft;
 
 bad_graft_data:
-	error("bad graft data: %s", buf);
+	error("bad graft data: %s", line->buf);
 	free(graft);
 	return NULL;
 }
