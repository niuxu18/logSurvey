 		revs->skip_count = atoi(optarg);
 		return argcount;
 	} else if ((*arg == '-') && isdigit(arg[1])) {
-	/* accept -<digit>, like traditional "head" */
-		revs->max_count = atoi(arg + 1);
+		/* accept -<digit>, like traditional "head" */
+		if (strtol_i(arg + 1, 10, &revs->max_count) < 0 ||
+		    revs->max_count < 0)
+			die("'%s': not a non-negative integer", arg + 1);
 		revs->no_walk = 0;
 	} else if (!strcmp(arg, "-n")) {
 		if (argc <= 1)