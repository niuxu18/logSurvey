 				cur_depth = *(int *)commit->util;
 			}
 		}
-		parse_commit(commit);
+		if (parse_commit(commit))
+			die("invalid commit");
 		commit->object.flags |= not_shallow_flag;
 		cur_depth++;
 		for (p = commit->parents, commit = NULL; p; p = p->next) {
