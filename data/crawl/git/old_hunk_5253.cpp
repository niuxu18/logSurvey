	       sizeof(*builtin_formats)*ARRAY_SIZE(builtin_formats));
}

static struct cmt_fmt_map *find_commit_format(const char *sought)
{
	struct cmt_fmt_map *found = NULL;
	size_t found_match_len = 0;
	int i;

	if (!commit_formats)
		setup_commit_formats();

	for (i = 0; i < commit_formats_len; i++) {
		size_t match_len;
