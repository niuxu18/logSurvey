         return 0;
 }
 
-int main(int argc, const char **argv)
+static void cleanup(struct walker *walker)
+{
+	struct walker_data *data = walker->data;
+	http_cleanup();
+
+	curl_slist_free_all(data->no_pragma_header);
+}
+
+struct walker *get_http_walker(const char *url)
 {
-	int commits;
-	const char **write_ref = NULL;
-	char **commit_id;
-	const char *url;
 	char *s;
-	int arg = 1;
-	int rc = 0;
-
-	setup_git_directory();
-	git_config(git_default_config);
-
-	while (arg < argc && argv[arg][0] == '-') {
-		if (argv[arg][1] == 't') {
-			get_tree = 1;
-		} else if (argv[arg][1] == 'c') {
-			get_history = 1;
-		} else if (argv[arg][1] == 'a') {
-			get_all = 1;
-			get_tree = 1;
-			get_history = 1;
-		} else if (argv[arg][1] == 'v') {
-			get_verbosely = 1;
-		} else if (argv[arg][1] == 'w') {
-			write_ref = &argv[arg + 1];
-			arg++;
-		} else if (!strcmp(argv[arg], "--recover")) {
-			get_recover = 1;
-		} else if (!strcmp(argv[arg], "--stdin")) {
-			commits_on_stdin = 1;
-		}
-		arg++;
-	}
-	if (argc < arg + 2 - commits_on_stdin) {
-		usage("git-http-fetch [-c] [-t] [-a] [-v] [--recover] [-w ref] [--stdin] commit-id url");
-		return 1;
-	}
-	if (commits_on_stdin) {
-		commits = pull_targets_stdin(&commit_id, &write_ref);
-	} else {
-		commit_id = (char **) &argv[arg++];
-		commits = 1;
-	}
-	url = argv[arg];
+	struct walker_data *data = xmalloc(sizeof(struct walker_data));
+	struct walker *walker = xmalloc(sizeof(struct walker));
 
 	http_init();
 
-	no_pragma_header = curl_slist_append(no_pragma_header, "Pragma:");
+	data->no_pragma_header = curl_slist_append(NULL, "Pragma:");
 
-	alt = xmalloc(sizeof(*alt));
-	alt->base = xmalloc(strlen(url) + 1);
-	strcpy(alt->base, url);
-	for (s = alt->base + strlen(alt->base) - 1; *s == '/'; --s)
+	data->alt = xmalloc(sizeof(*data->alt));
+	data->alt->base = xmalloc(strlen(url) + 1);
+	strcpy(data->alt->base, url);
+	for (s = data->alt->base + strlen(data->alt->base) - 1; *s == '/'; --s)
 		*s = 0;
-	alt->got_indices = 0;
-	alt->packs = NULL;
-	alt->next = NULL;
 
-#ifdef USE_CURL_MULTI
-	add_fill_function(NULL, fill_active_slot);
-#endif
+	data->alt->got_indices = 0;
+	data->alt->packs = NULL;
+	data->alt->next = NULL;
+	data->got_alternates = -1;
 
-	if (pull(commits, commit_id, write_ref, url))
-		rc = 1;
+	walker->corrupt_object_found = 0;
+	walker->fetch = fetch;
+	walker->fetch_ref = fetch_ref;
+	walker->prefetch = prefetch;
+	walker->cleanup = cleanup;
+	walker->data = data;
 
-	http_cleanup();
-
-	curl_slist_free_all(no_pragma_header);
-
-	if (commits_on_stdin)
-		pull_targets_free(commits, commit_id, write_ref);
+#ifdef USE_CURL_MULTI
+	add_fill_function(walker, (int (*)(void *)) fill_active_slot);
+#endif
 
-	if (corrupt_object_found) {
-		fprintf(stderr,
-"Some loose object were found to be corrupt, but they might be just\n"
-"a false '404 Not Found' error message sent with incorrect HTTP\n"
-"status code.  Suggest running git-fsck.\n");
-	}
-	return rc;
+	return walker;
 }
