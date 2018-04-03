 	if (is_shallow == -1)
 		die("BUG: shallow must be initialized by now");
 
-	if (!stat_validity_check(&shallow_stat, git_path("shallow")))
+	if (!stat_validity_check(&shallow_stat, git_path_shallow()))
 		die("shallow file has changed since we read it");
 }
 