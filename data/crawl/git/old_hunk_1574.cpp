		offset += nr;
	}

	if (!list && !skipped_patch)
		die(_("unrecognized input"));

	if (state->whitespace_error && (state->ws_error_action == die_on_ws_error))
		state->apply = 0;