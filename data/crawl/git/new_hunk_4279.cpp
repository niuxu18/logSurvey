		if (4 < i && !strncmp(".git", url + i - 3, 4))
			url_len = i - 3;

		strbuf_reset(&note);
		if (*what) {
			if (*kind)
				strbuf_addf(&note, "%s ", kind);
			strbuf_addf(&note, "'%s' of ", what);
		}
		fprintf(fp, "%s\t%s\t%s",
			sha1_to_hex(commit ? commit->object.sha1 :
				    rm->old_sha1),
			rm->merge ? "" : "not-for-merge",
			note.buf);
		for (i = 0; i < url_len; ++i)
			if ('\n' == url[i])
				fputs("\\n", fp);
			else
				fputc(url[i], fp);
		fputc('\n', fp);

		strbuf_reset(&note);
		if (ref) {
			rc |= update_local_ref(ref, what, &note);
			free(ref);
		} else
			strbuf_addf(&note, "* %-*s %-*s -> FETCH_HEAD",
				    TRANSPORT_SUMMARY_WIDTH,
				    *kind ? kind : "branch",
				    REFCOL_WIDTH,
				    *what ? what : "HEAD");
		if (note.len) {
			if (verbosity >= 0 && !shown_url) {
				fprintf(stderr, _("From %.*s\n"),
						url_len, url);
				shown_url = 1;
			}
			if (verbosity >= 0)
				fprintf(stderr, " %s\n", note.buf);
		}
	}
	free(url);
