		opts->revs->reverse ^= 1;

	if (prepare_revision_walk(opts->revs))
		die(_("revision walk setup failed"));

	if (!opts->revs->commits)
		die(_("empty commit set passed"));
}

static void read_and_refresh_cache(struct replay_opts *opts)