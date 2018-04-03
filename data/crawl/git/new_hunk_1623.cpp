	return 0;
}

static const char *remote_submodule_branch(const char *path)
{
	const struct submodule *sub;
	gitmodules_config();
	git_config(submodule_config, NULL);

	sub = submodule_from_path(null_sha1, path);
	if (!sub)
		return NULL;

	if (!sub->branch)
		return "master";

	return sub->branch;
}

static int resolve_remote_submodule_branch(int argc, const char **argv,
		const char *prefix)
{
	const char *ret;
	struct strbuf sb = STRBUF_INIT;
	if (argc != 2)
		die("submodule--helper remote-branch takes exactly one arguments, got %d", argc);

	ret = remote_submodule_branch(argv[1]);
	if (!ret)
		die("submodule %s doesn't exist", argv[1]);

	printf("%s", ret);
	strbuf_release(&sb);
	return 0;
}

struct cmd_struct {
	const char *cmd;
	int (*fn)(int, const char **, const char *);
