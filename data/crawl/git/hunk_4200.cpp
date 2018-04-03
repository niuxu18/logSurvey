 	/* Remotes are only allowed to fetch actual refs */
 	if (remote) {
 		char *ref = NULL;
-		if (!dwim_ref(name, strlen(name), sha1, &ref))
-			die("no such ref: %s", name);
+		const char *refname, *colon = NULL;
+
+		colon = strchr(name, ':');
+		if (colon)
+			refname = xstrndup(name, colon - name);
+		else
+			refname = name;
+
+		if (!dwim_ref(refname, strlen(refname), sha1, &ref))
+			die("no such ref: %s", refname);
+		if (refname != name)
+			free((void *)refname);
 		free(ref);
 	}
-	else {
-		if (get_sha1(name, sha1))
-			die("Not a valid object name");
-	}
+
+	if (get_sha1(name, sha1))
+		die("Not a valid object name");
 
 	commit = lookup_commit_reference_gently(sha1, 1);
 	if (commit) {