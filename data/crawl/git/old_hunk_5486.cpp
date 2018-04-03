		die("Missing author: %s",
		    sha1_to_hex(commit->object.sha1));
	if (log->user_format) {
		struct strbuf buf = STRBUF_INIT;

		pretty_print_commit(CMIT_FMT_USERFORMAT, commit, &buf,
			DEFAULT_ABBREV, "", "", DATE_NORMAL, 0);
		insert_one_record(log, author, buf.buf);
		strbuf_release(&buf);
		return;
	}
	if (*buffer)
		buffer++;
	insert_one_record(log, author, !*buffer ? "<none>" : buffer);
}

static void get_from_rev(struct rev_info *rev, struct shortlog *log)