	strbuf_release(&sb);
}

/**
 * Validates the am_state for resuming -- the "msg" and authorship fields must
 * be filled up.
 */
static void validate_resume_state(const struct am_state *state)
{
	if (!state->msg)
		die(_("cannot resume: %s does not exist."),
			am_path(state, "final-commit"));

	if (!state->author_name || !state->author_email || !state->author_date)
		die(_("cannot resume: %s does not exist."),
			am_path(state, "author-script"));
}

/**
 * Applies all queued mail.
 */
