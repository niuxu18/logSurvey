		strbuf_add(&template, file, tail - file + 1);
	strbuf_addstr(&template, "git-interpret-trailers-XXXXXX");

	trailers_tempfile = xmks_tempfile_m(template.buf, st.st_mode);
	strbuf_release(&template);
	outfile = fdopen_tempfile(trailers_tempfile, "w");
	if (!outfile)
		die_errno(_("could not open temporary file"));
