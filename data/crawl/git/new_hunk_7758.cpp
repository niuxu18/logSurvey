
int cmd_add(int argc, const char **argv, const char *prefix)
{
	int i, newfd;
	const char **pathspec;
	struct dir_struct dir;

	argc = parse_options(argc, argv, builtin_add_options,
			  builtin_add_usage, 0);
	if (add_interactive)
		exit(interactive_add(argc, argv));

	git_config(git_default_config);

