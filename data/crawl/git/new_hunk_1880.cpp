			warning(_("--depth is ignored in local clones; use file:// instead."));
		if (option_since)
			warning(_("--shallow-since is ignored in local clones; use file:// instead."));
		if (option_not.nr)
			warning(_("--shallow-exclude is ignored in local clones; use file:// instead."));
		if (!access(mkpath("%s/shallow", path), F_OK)) {
			if (option_local > 0)
				warning(_("source repository is shallow, ignoring --local"));