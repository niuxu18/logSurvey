 
 static int write_entry(struct cache_entry *ce, char *path, const struct checkout *state, int to_tempfile)
 {
-	int fd;
-	long wrote;
-
-	switch (ce->ce_mode & S_IFMT) {
-		char *new;
-		struct strbuf buf;
-		unsigned long size;
+	unsigned int ce_mode_s_ifmt = ce->ce_mode & S_IFMT;
+	int fd, ret, fstat_done = 0;
+	char *new;
+	struct strbuf buf = STRBUF_INIT;
+	unsigned long size;
+	size_t wrote, newsize = 0;
+	struct stat st;
 
+	switch (ce_mode_s_ifmt) {
 	case S_IFREG:
-		new = read_blob_entry(ce, path, &size);
+	case S_IFLNK:
+		new = read_blob_entry(ce, &size);
 		if (!new)
 			return error("git checkout-index: unable to read sha1 file of %s (%s)",
 				path, sha1_to_hex(ce->sha1));
 
+		if (ce_mode_s_ifmt == S_IFLNK && has_symlinks && !to_tempfile) {
+			ret = symlink(new, path);
+			free(new);
+			if (ret)
+				return error("git checkout-index: unable to create symlink %s (%s)",
+					     path, strerror(errno));
+			break;
+		}
+
 		/*
 		 * Convert from git internal format to working tree format
 		 */
-		strbuf_init(&buf, 0);
-		if (convert_to_working_tree(ce->name, new, size, &buf)) {
-			size_t newsize = 0;
+		if (ce_mode_s_ifmt == S_IFREG &&
+		    convert_to_working_tree(ce->name, new, size, &buf)) {
 			free(new);
 			new = strbuf_detach(&buf, &newsize);
 			size = newsize;
 		}
 
 		if (to_tempfile) {
-			strcpy(path, ".merge_file_XXXXXX");
+			if (ce_mode_s_ifmt == S_IFREG)
+				strcpy(path, ".merge_file_XXXXXX");
+			else
+				strcpy(path, ".merge_link_XXXXXX");
 			fd = mkstemp(path);
-		} else
+		} else if (ce_mode_s_ifmt == S_IFREG) {
 			fd = create_file(path, ce->ce_mode);
+		} else {
+			fd = create_file(path, 0666);
+		}
 		if (fd < 0) {
 			free(new);
 			return error("git checkout-index: unable to create file %s (%s)",
 				path, strerror(errno));
 		}
 
 		wrote = write_in_full(fd, new, size);
+		/* use fstat() only when path == ce->name */
+		if (state->refresh_cache && !to_tempfile && !state->base_dir_len) {
+			fstat(fd, &st);
+			fstat_done = 1;
+		}
 		close(fd);
 		free(new);
 		if (wrote != size)
 			return error("git checkout-index: unable to write file %s", path);
 		break;
-	case S_IFLNK:
-		new = read_blob_entry(ce, path, &size);
-		if (!new)
-			return error("git checkout-index: unable to read sha1 file of %s (%s)",
-				path, sha1_to_hex(ce->sha1));
-		if (to_tempfile || !has_symlinks) {
-			if (to_tempfile) {
-				strcpy(path, ".merge_link_XXXXXX");
-				fd = mkstemp(path);
-			} else
-				fd = create_file(path, 0666);
-			if (fd < 0) {
-				free(new);
-				return error("git checkout-index: unable to create "
-						 "file %s (%s)", path, strerror(errno));
-			}
-			wrote = write_in_full(fd, new, size);
-			close(fd);
-			free(new);
-			if (wrote != size)
-				return error("git checkout-index: unable to write file %s",
-					path);
-		} else {
-			wrote = symlink(new, path);
-			free(new);
-			if (wrote)
-				return error("git checkout-index: unable to create "
-						 "symlink %s (%s)", path, strerror(errno));
-		}
-		break;
 	case S_IFGITLINK:
 		if (to_tempfile)
 			return error("git checkout-index: cannot create temporary subproject %s", path);