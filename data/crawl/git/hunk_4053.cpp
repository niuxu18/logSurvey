 	if (argc == 2) {
 		if (svndump_init(argv[1]))
 			return 1;
-		svndump_read(NULL);
+		svndump_read(NULL, "refs/heads/master");
 		svndump_deinit();
 		svndump_reset();
 		return 0;
