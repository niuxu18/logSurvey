 	if (active_cache_changed &&
 	    (write_cache(index_fd, active_cache, active_nr) ||
 	     commit_locked_index(&index_lock)))
-		die("%s: Unable to write new index file", me);
+		/* TRANSLATORS: %s will be "revert" or "cherry-pick" */
+		die(_("%s: Unable to write new index file"), me);
 	rollback_lock_file(&index_lock);
 
 	if (!clean) {
