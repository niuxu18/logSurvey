 	}
 
 	if (res) {
-		fprintf(stderr, "Automatic %s failed.%s\n",
-			mebuf.buf, help_msg());
+		error("could not %s %s... %s",
+		      action == REVERT ? "revert" : "apply",
+		      find_unique_abbrev(commit->object.sha1, DEFAULT_ABBREV),
+		      msg.subject);
+		fprintf(stderr, help_msg());
 		rerere(allow_rerere_auto);
 	} else {
 		if (!no_commit)