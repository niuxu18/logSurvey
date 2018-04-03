 	 *  - cannot execute it externally (since it would just do
 	 *    the same thing over again)
 	 *
-	 * So we just directly call the internal command handler, and
-	 * die if that one cannot handle it.
+	 * So we just directly call the builtin handler, and die if
+	 * that one cannot handle it.
 	 */
 	if (starts_with(cmd, "git-")) {
 		cmd += 4;
 		argv[0] = cmd;
-		handle_internal_command(argc, argv);
-		die("cannot handle %s internally", cmd);
+		handle_builtin(argc, argv);
+		die("cannot handle %s as a builtin", cmd);
 	}
 
 	/* Look for flags.. */