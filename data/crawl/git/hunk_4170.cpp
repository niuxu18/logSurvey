 
 int notes_merge_abort(struct notes_merge_options *o)
 {
-	/* Remove .git/NOTES_MERGE_WORKTREE directory and all files within */
+	/*
+	 * Remove all files within .git/NOTES_MERGE_WORKTREE. We do not remove
+	 * the .git/NOTES_MERGE_WORKTREE directory itself, since it might be
+	 * the current working directory of the user.
+	 */
 	struct strbuf buf = STRBUF_INIT;
 	int ret;
 
 	strbuf_addstr(&buf, git_path(NOTES_MERGE_WORKTREE));
 	if (o->verbosity >= 3)
-		printf("Removing notes merge worktree at %s\n", buf.buf);
-	ret = remove_dir_recursively(&buf, 0);
+		printf("Removing notes merge worktree at %s/*\n", buf.buf);
+	ret = remove_dir_recursively(&buf, REMOVE_DIR_KEEP_TOPLEVEL);
 	strbuf_release(&buf);
 	return ret;
 }
