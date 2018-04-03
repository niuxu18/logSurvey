	for (i = 0; i < *num_changes; i++) {
		struct notes_merge_pair *p = changes + i;
		trace_printf("\t\t%.7s: %.7s -> %.7s/%.7s\n",
		       sha1_to_hex(p->obj), sha1_to_hex(p->base),
		       sha1_to_hex(p->local), sha1_to_hex(p->remote));

		if (!hashcmp(p->base, p->remote)) {
			/* no remote change; nothing to do */
			trace_printf("\t\t\tskipping (no remote change)\n");
		} else if (!hashcmp(p->local, p->remote)) {
			/* same change in local and remote; nothing to do */
			trace_printf("\t\t\tskipping (local == remote)\n");
		} else if (!hashcmp(p->local, uninitialized) ||
			   !hashcmp(p->local, p->base)) {
			/* no local change; adopt remote change */
			trace_printf("\t\t\tno local change, adopted remote\n");
			if (add_note(t, p->obj, p->remote,
				     combine_notes_overwrite))
				die("BUG: combine_notes_overwrite failed");
		} else {