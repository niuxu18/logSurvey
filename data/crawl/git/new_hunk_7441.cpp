		if (!err)
			continue;

		error("failed to push some refs to '%s'", remote->url[i]);
		errs++;
	}
	return !!errs;