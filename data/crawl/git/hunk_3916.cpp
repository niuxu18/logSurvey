 
 		if (!argc) {
 			if (detached)
-				die("Cannot give description to detached HEAD");
+				die(_("Cannot give description to detached HEAD"));
 			branch_name = head;
 		} else if (argc == 1)
 			branch_name = argv[0];
