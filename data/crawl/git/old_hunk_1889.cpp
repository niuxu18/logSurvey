	if (is_local) {
		if (option_depth)
			warning(_("--depth is ignored in local clones; use file:// instead."));
		if (!access(mkpath("%s/shallow", path), F_OK)) {
			if (option_local > 0)
				warning(_("source repository is shallow, ignoring --local"));