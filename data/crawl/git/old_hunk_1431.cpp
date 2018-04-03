		int i;
		for (i = 0; i < num_base_list; ++i) {
			struct commit *base;
			if (!(base = get_ref(base_list[i], sha1_to_hex(base_list[i]))))
				return error(_("Could not parse object '%s'"),
					sha1_to_hex(base_list[i]));
			commit_list_insert(base, &ca);
		}
	}

	hold_locked_index(lock, 1);
	clean = merge_recursive(o, head_commit, next_commit, ca,
			result);
	if (active_cache_changed &&
	    write_locked_index(&the_index, lock, COMMIT_LOCK))
		return error(_("Unable to write index."));

	return clean ? 0 : 1;
}
