		ce->ce_flags = create_ce_flags(stage);
		ce->ce_namelen = namelen;
		hashcpy(ce->sha1, patch->threeway_stage[stage - 1].hash);
		if (add_cache_entry(ce, ADD_CACHE_OK_TO_ADD) < 0) {
			free(ce);
			return error(_("unable to add cache entry for %s"),
				     patch->new_name);
		}
	}

	return 0;
}

static void create_file(struct apply_state *state, struct patch *patch)