	return r;
}

static int handle_octopus(int count, const char **args, int reduce, int show_all)
{
	struct commit_list *revs = NULL;
	struct commit_list *result;
	int i;

	if (reduce)
		show_all = 1;

	for (i = count - 1; i >= 0; i--)
		commit_list_insert(get_commit_reference(args[i]), &revs);

	result = reduce ? reduce_heads(revs) : get_octopus_merge_bases(revs);

	if (!result)
		return 1;
