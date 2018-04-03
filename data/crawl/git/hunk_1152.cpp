 		add_pending_object(&revs, &(sb.final->object), ":");
 	}
 	else if (contents_from)
-		die("Cannot use --contents with final commit object name");
+		die(_("cannot use --contents with final commit object name"));
 
 	if (reverse && revs.first_parent_only) {
 		final_commit = find_single_final(sb.revs, NULL);
 		if (!final_commit)
-			die("--reverse and --first-parent together require specified latest commit");
+			die(_("--reverse and --first-parent together require specified latest commit"));
 	}
 
 	/*
