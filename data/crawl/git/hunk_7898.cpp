 
 void help_unknown_cmd(const char *cmd)
 {
-	printf("git: '%s' is not a git-command\n\n", cmd);
-	list_common_cmds_help();
+	fprintf(stderr, "git: '%s' is not a git-command. See --help\n\n", cmd);
 	exit(1);
 }
 