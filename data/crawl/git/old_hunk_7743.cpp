	if (len >= ent->len)
		die("git-ls-files: internal error - directory entry not superset of prefix");

	if (pathspec && !match(pathspec, ps_matched, ent->name, len))
		return;

	fputs(tag, stdout);
