 	if (revs->ancestry_path) {
 		bottom = collect_bottom_commits(list);
 		if (!bottom)
-			die("--ancestry-path given but there is no bottom commits");
+			die("--ancestry-path given but there are no bottom commits");
 	}
 
 	while (list) {