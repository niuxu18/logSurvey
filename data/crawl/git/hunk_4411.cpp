 		usage(*revert_or_cherry_pick_usage());
 
 	if (prepare_revision_walk(revs))
-		die("revision walk setup failed");
+		die(_("revision walk setup failed"));
 
 	if (!revs->commits)
-		die("empty commit set passed");
+		die(_("empty commit set passed"));
 }
 
 static void read_and_refresh_cache(const char *me)
 {
 	static struct lock_file index_lock;
 	int index_fd = hold_locked_index(&index_lock, 0);
 	if (read_index_preload(&the_index, NULL) < 0)
-		die("git %s: failed to read the index", me);
+		die(_("git %s: failed to read the index"), me);
 	refresh_index(&the_index, REFRESH_QUIET|REFRESH_UNMERGED, NULL, NULL, NULL);
 	if (the_index.cache_changed) {
 		if (write_index(&the_index, index_fd) ||
 		    commit_locked_index(&index_lock))
-			die("git %s: failed to refresh the index", me);
+			die(_("git %s: failed to refresh the index"), me);
 	}
 	rollback_lock_file(&index_lock);
 }
