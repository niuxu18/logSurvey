#define USAGE_OPTS_WIDTH 24
#define USAGE_GAP         2

static int usage_with_options_internal(const char * const *usagestr,
				const struct option *opts, int full, int err)
{
	FILE *outfile = err ? stderr : stdout;

	if (!usagestr)
		return PARSE_OPT_HELP;

	fprintf(outfile, "usage: %s\n", *usagestr++);
	while (*usagestr && **usagestr)
		fprintf(outfile, "   or: %s\n", *usagestr++);