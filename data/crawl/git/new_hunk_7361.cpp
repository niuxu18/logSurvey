
static void print_new_head_line(struct commit *commit)
{
	const char *hex, *body;

	hex = find_unique_abbrev(commit->object.sha1, DEFAULT_ABBREV);
	printf("HEAD is now at %s", hex);
	body = strstr(commit->buffer, "\n\n");
	if (body) {
		const char *eol;
