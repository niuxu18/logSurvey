	} else if (stat_ret < 0) {
		if (patch->is_new < 0)
			goto is_new;
		return error_errno("%s", old_name);
	}

	if (!state->cached && !previous)
