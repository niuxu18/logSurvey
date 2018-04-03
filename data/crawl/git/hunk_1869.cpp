 
 int error_resolve_conflict(const char *me)
 {
-	error("%s is not possible because you have unmerged files.", me);
+	if (!strcmp(me, "cherry-pick"))
+		error(_("Cherry-picking is not possible because you have unmerged files."));
+	else if (!strcmp(me, "commit"))
+		error(_("Committing is not possible because you have unmerged files."));
+	else if (!strcmp(me, "merge"))
+		error(_("Merging is not possible because you have unmerged files."));
+	else if (!strcmp(me, "pull"))
+		error(_("Pulling is not possible because you have unmerged files."));
+	else if (!strcmp(me, "revert"))
+		error(_("Reverting is not possible because you have unmerged files."));
+	else
+		error(_("It is not possible to %s because you have unmerged files."),
+			me);
+
 	if (advice_resolve_conflict)
 		/*
 		 * Message used both when 'git commit' fails and when
