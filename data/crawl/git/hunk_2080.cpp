 		usage_with_options(merge_file_usage, options);
 	if (quiet) {
 		if (!freopen("/dev/null", "w", stderr))
-			return error("failed to redirect stderr to /dev/null: "
-				     "%s", strerror(errno));
+			return error_errno("failed to redirect stderr to /dev/null");
 	}
 
 	if (prefix)