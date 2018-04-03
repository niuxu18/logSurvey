 	if (check_repository_format_gently(gitdir, nongit_ok))
 		return NULL;
 
+	/* --work-tree is set without --git-dir; use discovered one */
+	if (getenv(GIT_WORK_TREE_ENVIRONMENT) || git_work_tree_cfg) {
+		if (offset != len && !is_absolute_path(gitdir))
+			gitdir = xstrdup(make_absolute_path(gitdir));
+		if (chdir(cwd))
+			die_errno("Could not come back to cwd");
+		return setup_explicit_git_dir(gitdir, cwd, len, nongit_ok);
+	}
+
 	/* #16.2, #17.2, #20.2, #21.2, #24, #25, #28, #29 (see t1510) */
 	if (is_bare_repository_cfg > 0) {
 		set_git_dir(offset == len ? gitdir : make_absolute_path(gitdir));