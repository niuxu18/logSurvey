	return 0;
}

/*
 * We really should allow cb_data... Yuck
 */
static const char *branch_name;
static int branch_name_len;
static char *found_remote;
static char *found_merge;
static int read_branch_config(const char *var, const char *value)
{
	const char *name;
	if (prefixcmp(var, "branch."))
		return 0; /* not ours */
	name = var + strlen("branch.");
	if (strncmp(name, branch_name, branch_name_len) ||
	    name[branch_name_len] != '.')
		return 0; /* not ours either */
	if (!strcmp(name + branch_name_len, ".remote")) {
		/*
		 * Yeah, I know Christian's clean-up should
		 * be used here, but the topic is based on an
		 * older fork point.
		 */
		if (!value)
			return error("'%s' not string", var);
		found_remote = xstrdup(value);
		return 0;
	}
	if (!strcmp(name + branch_name_len, ".merge")) {
		if (!value)
			return error("'%s' not string", var);
		found_merge = xstrdup(value);
		return 0;
	}
	return 0; /* not ours */
}

static int find_build_base(const char *ours, char **base)
{
	struct remote *remote;
	struct refspec spec;

	*base = NULL;

	branch_name = ours + strlen("refs/heads/");
	branch_name_len = strlen(branch_name);
	found_remote = NULL;
	found_merge = NULL;
	git_config(read_branch_config);

	if (!found_remote || !found_merge) {
	cleanup:
		free(found_remote);
		free(found_merge);
		return 0;
	}

	remote = remote_get(found_remote);
	memset(&spec, 0, sizeof(spec));
	spec.src = found_merge;
	if (remote_find_tracking(remote, &spec))
		goto cleanup;
	*base = spec.dst;
	return 1;
}

static void adjust_to_tracking(struct branch_info *new, struct checkout_opts *opts)
{
	/*
