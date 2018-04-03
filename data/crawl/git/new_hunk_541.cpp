	/* Load data if not already done */
	if (!trg->data) {
		read_lock();
		trg->data = read_sha1_file(trg_entry->idx.oid.hash, &type,
					   &sz);
		read_unlock();
		if (!trg->data)
			die("object %s cannot be read",
			    oid_to_hex(&trg_entry->idx.oid));
		if (sz != trg_size)
			die("object %s inconsistent object length (%lu vs %lu)",
			    oid_to_hex(&trg_entry->idx.oid), sz,
			    trg_size);
		*mem_usage += sz;
	}
	if (!src->data) {
		read_lock();
		src->data = read_sha1_file(src_entry->idx.oid.hash, &type,
					   &sz);
		read_unlock();
		if (!src->data) {
			if (src_entry->preferred_base) {
				static int warned = 0;
				if (!warned++)
					warning("object %s cannot be read",
						oid_to_hex(&src_entry->idx.oid));
				/*
				 * Those objects are not included in the
				 * resulting pack.  Be resilient and ignore
