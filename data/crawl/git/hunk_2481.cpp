 						PARSE_OPT_KEEP_DASHDASH);
 	parse_args(&pathspec, argv, prefix, patch_mode, &rev);
 
-	unborn = !strcmp(rev, "HEAD") && get_sha1("HEAD", sha1);
+	unborn = !strcmp(rev, "HEAD") && get_sha1("HEAD", oid.hash);
 	if (unborn) {
 		/* reset on unborn branch: treat as reset to empty tree */
-		hashcpy(sha1, EMPTY_TREE_SHA1_BIN);
+		hashcpy(oid.hash, EMPTY_TREE_SHA1_BIN);
 	} else if (!pathspec.nr) {
 		struct commit *commit;
-		if (get_sha1_committish(rev, sha1))
+		if (get_sha1_committish(rev, oid.hash))
 			die(_("Failed to resolve '%s' as a valid revision."), rev);
-		commit = lookup_commit_reference(sha1);
+		commit = lookup_commit_reference(oid.hash);
 		if (!commit)
 			die(_("Could not parse object '%s'."), rev);
-		hashcpy(sha1, commit->object.sha1);
+		oidcpy(&oid, &commit->object.oid);
 	} else {
 		struct tree *tree;
-		if (get_sha1_treeish(rev, sha1))
+		if (get_sha1_treeish(rev, oid.hash))
 			die(_("Failed to resolve '%s' as a valid tree."), rev);
-		tree = parse_tree_indirect(sha1);
+		tree = parse_tree_indirect(oid.hash);
 		if (!tree)
 			die(_("Could not parse object '%s'."), rev);
-		hashcpy(sha1, tree->object.sha1);
+		oidcpy(&oid, &tree->object.oid);
 	}
 
 	if (patch_mode) {