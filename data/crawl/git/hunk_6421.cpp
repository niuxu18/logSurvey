 	dir = argv[i];
 
 	if (!enter_repo(dir, strict))
-		die("'%s': unable to chdir or not a git archive", dir);
+		die("'%s' does not appear to be a git repository", dir);
 	if (is_repository_shallow())
 		die("attempt to fetch/clone from a shallow repository");
 	if (getenv("GIT_DEBUG_SEND_PACK"))