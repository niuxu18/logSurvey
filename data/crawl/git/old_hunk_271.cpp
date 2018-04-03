	tempfile->fd = git_mkstemps_mode(tempfile->filename.buf, suffixlen, mode);
	if (tempfile->fd < 0) {
		deactivate_tempfile(tempfile);
		return -1;
	}
	activate_tempfile(tempfile);
	return tempfile->fd;
}

int xmks_tempfile_m(struct tempfile *tempfile, const char *template, int mode)
{
	int fd;
	struct strbuf full_template = STRBUF_INIT;

	strbuf_add_absolute_path(&full_template, template);
	fd = mks_tempfile_m(tempfile, full_template.buf, mode);
	if (fd < 0)
		die_errno("Unable to create temporary file '%s'",
			  full_template.buf);

	strbuf_release(&full_template);
	return fd;
}

FILE *fdopen_tempfile(struct tempfile *tempfile, const char *mode)
