	strbuf_addstr(&template, "XXXXXX_");
	strbuf_addstr(&template, base);

	fd = mks_tempfile_ts(&temp->tempfile, template.buf, strlen(base) + 1);
	if (fd < 0)
		die_errno("unable to create temp-file");
	if (convert_to_working_tree(path,
			(const char *)blob, (size_t)size, &buf)) {
		blob = buf.buf;
		size = buf.len;
	}
	if (write_in_full(fd, blob, size) != size ||
	    close_tempfile_gently(&temp->tempfile))
		die_errno("unable to write temp-file");
	temp->name = get_tempfile_path(&temp->tempfile);
	oid_to_hex_r(temp->hex, oid);
	xsnprintf(temp->mode, sizeof(temp->mode), "%06o", mode);
	strbuf_release(&buf);
