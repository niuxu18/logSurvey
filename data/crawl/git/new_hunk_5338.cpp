		exit(1);
}

struct commit_message {
	char *parent_label;
	const char *label;
	const char *subject;
	char *reencoded_message;
	const char *message;
};

static int get_message(const char *raw_message, struct commit_message *out)
{
	const char *encoding;
	const char *p, *abbrev, *eol;
	char *q;
	int abbrev_len, oneline_len;

	if (!raw_message)
		return -1;
	encoding = get_encoding(raw_message);
	if (!encoding)
		encoding = "UTF-8";
	if (!git_commit_encoding)
		git_commit_encoding = "UTF-8";
	if ((out->reencoded_message = reencode_string(raw_message,
					git_commit_encoding, encoding)))
		out->message = out->reencoded_message;

	abbrev = find_unique_abbrev(commit->object.sha1, DEFAULT_ABBREV);
	abbrev_len = strlen(abbrev);

	/* Find beginning and end of commit subject. */
	p = out->message;
	while (*p && (*p != '\n' || p[1] != '\n'))
		p++;
	if (*p) {
		p += 2;
		for (eol = p + 1; *eol && *eol != '\n'; eol++)
			; /* do nothing */
	} else
		eol = p;
	oneline_len = eol - p;

	out->parent_label = xmalloc(strlen("parent of ") + abbrev_len +
			      strlen("... ") + oneline_len + 1);
	q = out->parent_label;
	q = mempcpy(q, "parent of ", strlen("parent of "));
	out->label = q;
	q = mempcpy(q, abbrev, abbrev_len);
	q = mempcpy(q, "... ", strlen("... "));
	out->subject = q;
	q = mempcpy(q, p, oneline_len);
	*q = '\0';
	return 0;
}

static void free_message(struct commit_message *msg)
{
	free(msg->parent_label);
	free(msg->reencoded_message);
}

static char *get_encoding(const char *message)
