 		setup_work_tree();
 
 	if (opts.merge) {
-		if (stage < 2)
-			die("just how do you expect me to merge %d trees?", stage-1);
 		switch (stage - 1) {
+		case 0:
+			die("you must specify at least one tree to merge");
+			break;
 		case 1:
 			opts.fn = opts.prefix ? bind_merge : oneway_merge;
 			break;