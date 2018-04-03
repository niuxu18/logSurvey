 	argc = parse_options(argc, argv, builtin_config_options, builtin_config_usage,
 			     PARSE_OPT_STOP_AT_NON_OPTION);
 
+	if (use_global_config + use_system_config + !!given_config_file > 1) {
+		error("only one config file at a time.");
+		usage_with_options(builtin_config_usage, builtin_config_options);
+	}
+
 	if (use_global_config) {
 		char *home = getenv("HOME");
 		if (home) {