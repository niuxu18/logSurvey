
	if (!commit->parents)
		die ("Cannot %s a root commit", me);
	if (commit->parents->next) {
		/* Reverting or cherry-picking a merge commit */
		int cnt;
		struct commit_list *p;

		if (!mainline)
			die("Commit %s is a merge but no -m option was given.",
			    sha1_to_hex(commit->object.sha1));

		for (cnt = 1, p = commit->parents;
		     cnt != mainline && p;
		     cnt++)
			p = p->next;
		if (cnt != mainline || !p)
			die("Commit %s does not have parent %d",
			    sha1_to_hex(commit->object.sha1), mainline);
		parent = p->item;
	} else if (0 < mainline)
		die("Mainline was specified but commit %s is not a merge.",
		    sha1_to_hex(commit->object.sha1));
	else
		parent = commit->parents->item;

	if (!(message = commit->buffer))
		die ("Cannot get commit message for %s",
				sha1_to_hex(commit->object.sha1));