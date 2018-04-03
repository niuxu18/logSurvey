
	if (has_unstaged_changes(ignore_submodules)) {
		/* TRANSLATORS: the action is e.g. "pull with rebase" */
		error(_("cannot %s: You have unstaged changes."), _(action));
		err = 1;
	}

	if (has_uncommitted_changes(ignore_submodules)) {
		if (err)
			error(_("additionally, your index contains uncommitted changes."));
		else
			error(_("cannot %s: Your index contains uncommitted changes."),
			      _(action));
		err = 1;
	}