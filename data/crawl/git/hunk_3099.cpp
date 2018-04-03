 	 * is a good one.
 	 */
 	git_config_early(fn, NULL, repo_config);
-	if (GIT_REPO_VERSION < repository_format_version) {
+	if (GIT_REPO_VERSION_READ < repository_format_version) {
 		if (!nongit_ok)
 			die ("Expected git repo version <= %d, found %d",
-			     GIT_REPO_VERSION, repository_format_version);
+			     GIT_REPO_VERSION_READ, repository_format_version);
 		warning("Expected git repo version <= %d, found %d",
-			GIT_REPO_VERSION, repository_format_version);
+			GIT_REPO_VERSION_READ, repository_format_version);
 		warning("Please upgrade Git");
 		*nongit_ok = -1;
 		ret = -1;
 	}
+
+	if (repository_format_version >= 1 && unknown_extensions.nr) {
+		int i;
+
+		if (!nongit_ok)
+			die("unknown repository extension: %s",
+			    unknown_extensions.items[0].string);
+
+		for (i = 0; i < unknown_extensions.nr; i++)
+			warning("unknown repository extension: %s",
+				unknown_extensions.items[i].string);
+		*nongit_ok = -1;
+		ret = -1;
+	}
+
 	strbuf_release(&sb);
 	return ret;
 }
