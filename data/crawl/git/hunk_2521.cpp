 		}
 		if (parse_commit(p) < 0)
 			die("cannot simplify commit %s (because of %s)",
-			    sha1_to_hex(commit->object.sha1),
-			    sha1_to_hex(p->object.sha1));
+			    oid_to_hex(&commit->object.oid),
+			    oid_to_hex(&p->object.oid));
 		switch (rev_compare_tree(revs, p, commit)) {
 		case REV_TREE_SAME:
 			if (!revs->simplify_history || !relevant_commit(p)) {
