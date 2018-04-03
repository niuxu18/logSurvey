	cp.out = -1;
	cp.dir = path;
	if (start_command(&cp))
		die("Could not run 'git status --porcelain' in submodule %s", path);

	fp = xfdopen(cp.out, "r");
	while (strbuf_getwholeline(&buf, fp, '\n') != EOF) {
		if ((buf.buf[0] == '?') && (buf.buf[1] == '?'))
			dirty_submodule |= DIRTY_SUBMODULE_UNTRACKED;
		else
			dirty_submodule |= DIRTY_SUBMODULE_MODIFIED;