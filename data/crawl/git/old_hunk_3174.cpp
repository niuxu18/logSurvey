	*fmt |= DIFF_FORMAT_PATCH;
}

int diff_opt_parse(struct diff_options *options, const char **av, int ac)
{
	const char *arg = av[0];
