 }
 
 /* Helpers for fetching packs */
-static int fetch_pack_index(unsigned char *sha1, const char *base_url)
+static char *fetch_pack_index(unsigned char *sha1, const char *base_url)
 {
-	int ret = 0;
-	char *filename;
-	char *url = NULL;
+	char *url, *tmp;
 	struct strbuf buf = STRBUF_INIT;
 
-	if (has_pack_index(sha1)) {
-		ret = 0;
-		goto cleanup;
-	}
-
 	if (http_is_verbose)
 		fprintf(stderr, "Getting index for pack %s\n", sha1_to_hex(sha1));
 
 	end_url_with_slash(&buf, base_url);
 	strbuf_addf(&buf, "objects/pack/pack-%s.idx", sha1_to_hex(sha1));
 	url = strbuf_detach(&buf, NULL);
 
-	filename = sha1_pack_index_name(sha1);
-	if (http_get_file(url, filename, 0) != HTTP_OK)
-		ret = error("Unable to get pack index %s\n", url);
+	strbuf_addf(&buf, "%s.temp", sha1_pack_index_name(sha1));
+	tmp = strbuf_detach(&buf, NULL);
+
+	if (http_get_file(url, tmp, 0) != HTTP_OK) {
+		error("Unable to get pack index %s\n", url);
+		free(tmp);
+		tmp = NULL;
+	}
 
-cleanup:
 	free(url);
-	return ret;
+	return tmp;
 }
 
 static int fetch_and_setup_pack_index(struct packed_git **packs_head,
 	unsigned char *sha1, const char *base_url)
 {
 	struct packed_git *new_pack;
+	char *tmp_idx = NULL;
+	int ret;
+
+	if (has_pack_index(sha1)) {
+		new_pack = parse_pack_index(sha1, NULL);
+		if (!new_pack)
+			return -1; /* parse_pack_index() already issued error message */
+		goto add_pack;
+	}
 
-	if (fetch_pack_index(sha1, base_url))
+	tmp_idx = fetch_pack_index(sha1, base_url);
+	if (!tmp_idx)
 		return -1;
 
-	new_pack = parse_pack_index(sha1, sha1_pack_index_name(sha1));
-	if (!new_pack)
+	new_pack = parse_pack_index(sha1, tmp_idx);
+	if (!new_pack) {
+		unlink(tmp_idx);
+		free(tmp_idx);
+
 		return -1; /* parse_pack_index() already issued error message */
+	}
+
+	ret = verify_pack_index(new_pack);
+	if (!ret) {
+		close_pack_index(new_pack);
+		ret = move_temp_to_file(tmp_idx, sha1_pack_index_name(sha1));
+	}
+	free(tmp_idx);
+	if (ret)
+		return -1;
+
+add_pack:
 	new_pack->next = *packs_head;
 	*packs_head = new_pack;
 	return 0;
