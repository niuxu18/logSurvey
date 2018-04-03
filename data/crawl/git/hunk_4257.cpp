 	return 0;
 }
 
+static int continue_single_pick(void)
+{
+	const char *argv[] = { "commit", NULL };
+
+	if (!file_exists(git_path("CHERRY_PICK_HEAD")) &&
+	    !file_exists(git_path("REVERT_HEAD")))
+		return error(_("no cherry-pick or revert in progress"));
+	return run_command_v_opt(argv, RUN_GIT_CMD);
+}
+
 static int sequencer_continue(struct replay_opts *opts)
 {
 	struct commit_list *todo_list = NULL;
 
 	if (!file_exists(git_path(SEQ_TODO_FILE)))
-		return error(_("No %s in progress"), action_name(opts));
+		return continue_single_pick();
 	read_populate_opts(&opts);
 	read_populate_todo(&todo_list, opts);
 
 	/* Verify that the conflict has been resolved */
-	if (!index_differs_from("HEAD", 0))
-		todo_list = todo_list->next;
+	if (file_exists(git_path("CHERRY_PICK_HEAD")) ||
+	    file_exists(git_path("REVERT_HEAD"))) {
+		int ret = continue_single_pick();
+		if (ret)
+			return ret;
+	}
+	if (index_differs_from("HEAD", 0))
+		return error_dirty_index(opts);
+	todo_list = todo_list->next;
 	return pick_commits(todo_list, opts);
 }
 
