		committer = git_committer_info(IDENT_ERROR_ON_NO_NAME);
		endpos = strchr(committer, '>');
		if (!endpos)
			die(_("bogus committer info %s"), committer);
		add_signoff = xmemdupz(committer, endpos - committer + 1);
	}

