 		if (!strcmp(ext, "noop"))
 			;
 		else if (!strcmp(ext, "preciousobjects"))
-			repository_format_precious_objects = git_config_bool(var, value);
+			data->precious_objects = git_config_bool(var, value);
 		else
-			string_list_append(&unknown_extensions, ext);
+			string_list_append(&data->unknown_extensions, ext);
 	}
 	return 0;
 }
 
+static int read_repository_format_1(struct repository_format *, config_fn_t,
+				    const char *);
+
 static int check_repository_format_gently(const char *gitdir, int *nongit_ok)
 {
 	struct strbuf sb = STRBUF_INIT;
-	const char *repo_config;
+	struct strbuf err = STRBUF_INIT;
+	struct repository_format candidate;
 	config_fn_t fn;
-	int ret = 0;
-
-	string_list_clear(&unknown_extensions, 0);
 
 	if (get_common_dir(&sb, gitdir))
 		fn = check_repo_format;
 	else
 		fn = check_repository_format_version;
+
 	strbuf_addstr(&sb, "/config");
-	repo_config = sb.buf;
+	read_repository_format_1(&candidate, fn, sb.buf);
+	strbuf_release(&sb);
 
 	/*
-	 * Ignore return value; for historical reasons, we must treat a missing
-	 * config file as a noop (git-init relies on this).
+	 * For historical use of check_repository_format() in git-init,
+	 * we treat a missing config as a silent "ok", even when nongit_ok
+	 * is unset.
 	 */
-	git_config_from_file(fn, repo_config, NULL);
-	if (GIT_REPO_VERSION_READ < repository_format_version) {
-		if (!nongit_ok)
-			die ("Expected git repo version <= %d, found %d",
-			     GIT_REPO_VERSION_READ, repository_format_version);
-		warning("Expected git repo version <= %d, found %d",
-			GIT_REPO_VERSION_READ, repository_format_version);
-		warning("Please upgrade Git");
-		*nongit_ok = -1;
-		ret = -1;
+	if (candidate.version < 0)
+		return 0;
+
+	if (verify_repository_format(&candidate, &err) < 0) {
+		if (nongit_ok) {
+			warning("%s", err.buf);
+			strbuf_release(&err);
+			*nongit_ok = -1;
+			return -1;
+		}
+		die("%s", err.buf);
 	}
 
-	if (repository_format_version >= 1 && unknown_extensions.nr) {
+	repository_format_version = candidate.version;
+	repository_format_precious_objects = candidate.precious_objects;
+	string_list_clear(&candidate.unknown_extensions, 0);
+	if (candidate.is_bare != -1) {
+		is_bare_repository_cfg = candidate.is_bare;
+		if (is_bare_repository_cfg == 1)
+			inside_work_tree = -1;
+	}
+	if (candidate.work_tree) {
+		free(git_work_tree_cfg);
+		git_work_tree_cfg = candidate.work_tree;
+		inside_work_tree = -1;
+	}
+
+	return 0;
+}
+
+static int read_repository_format_1(struct repository_format *format,
+				    config_fn_t fn, const char *path)
+{
+	memset(format, 0, sizeof(*format));
+	format->version = -1;
+	format->is_bare = -1;
+	string_list_init(&format->unknown_extensions, 1);
+	git_config_from_file(fn, path, format);
+	return format->version;
+}
+
+int read_repository_format(struct repository_format *format, const char *path)
+{
+	return read_repository_format_1(format, check_repository_format_version, path);
+}
+
+int verify_repository_format(const struct repository_format *format,
+			     struct strbuf *err)
+{
+	if (GIT_REPO_VERSION_READ < format->version) {
+		strbuf_addf(err, "Expected git repo version <= %d, found %d",
+			    GIT_REPO_VERSION_READ, format->version);
+		return -1;
+	}
+
+	if (format->version >= 1 && format->unknown_extensions.nr) {
 		int i;
 
-		if (!nongit_ok)
-			die("unknown repository extension: %s",
-			    unknown_extensions.items[0].string);
+		strbuf_addstr(err, "unknown repository extensions found:");
 
-		for (i = 0; i < unknown_extensions.nr; i++)
-			warning("unknown repository extension: %s",
-				unknown_extensions.items[i].string);
-		*nongit_ok = -1;
-		ret = -1;
+		for (i = 0; i < format->unknown_extensions.nr; i++)
+			strbuf_addf(err, "\n\t%s",
+				    format->unknown_extensions.items[i].string);
+		return -1;
 	}
 
-	strbuf_release(&sb);
-	return ret;
+	return 0;
 }
 
 /*