 		return rerere(flags);
 
 	if (!strcmp(argv[0], "forget")) {
-		const char **pathspec = get_pathspec(prefix, argv + 1);
+		const char **pathspec;
+		if (argc < 2)
+			warning("'git rerere forget' without paths is deprecated");
+		pathspec = get_pathspec(prefix, argv + 1);
 		return rerere_forget(pathspec);
 	}
 