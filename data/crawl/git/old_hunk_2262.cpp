	usage_with_options(builtin_config_usage, builtin_config_options);
}

static int show_all_config(const char *key_, const char *value_, void *cb)
{
	if (!omit_values && value_)
		printf("%s%c%s%c", key_, delim, value_, term);
	else
