
static void show_stats(struct patch *patch)
{
	struct strbuf qname;
	char *cp = patch->new_name ? patch->new_name : patch->old_name;
	int max, add, del;

	strbuf_init(&qname, 0);
	quote_c_style(cp, &qname, NULL, 0);

	/*
	 * "scale" the filename
	 */
	max = max_len;
	if (max > 50)
		max = 50;

	if (qname.len > max) {
		cp = strchr(qname.buf + qname.len + 3 - max, '/');
		if (!cp)
			cp = qname.buf + qname.len + 3 - max;
		strbuf_splice(&qname, 0, cp - qname.buf, "...", 3);
	}

	if (patch->is_binary) {
		printf(" %-*s |  Bin\n", max, qname.buf);
		strbuf_release(&qname);
		return;
	}

	printf(" %-*s |", max, qname.buf);
	strbuf_release(&qname);

	/*
	 * scale the add/delete
	 */
	max = max + max_change > 70 ? 70 - max : max_change;
	add = patch->lines_added;
	del = patch->lines_deleted;

	if (max_change > 0) {
		int total = ((add + del) * max + max_change / 2) / max_change;
		add = (add * max + max_change / 2) / max_change;
		del = total - add;
	}
	printf("%5d %.*s%.*s\n", patch->lines_added + patch->lines_deleted,
		add, pluses, del, minuses);
}

static int read_old_data(struct stat *st, const char *path, struct strbuf *buf)
