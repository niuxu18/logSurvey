	struct files_ref_store *refs =
		files_downcast(ref_store, REF_STORE_WRITE | REF_STORE_ODB,
			       "pack_refs");
	struct pack_refs_cb_data cbdata;

	memset(&cbdata, 0, sizeof(cbdata));
	cbdata.flags = flags;

	lock_packed_refs(refs, LOCK_DIE_ON_ERROR);
	cbdata.packed_refs = get_packed_refs(refs);

	do_for_each_entry_in_dir(get_loose_ref_dir(refs),
				 pack_if_possible_fn, &cbdata);

	if (commit_packed_refs(refs))
		die_errno("unable to overwrite old ref-pack file");

	prune_refs(refs, cbdata.ref_to_prune);
	return 0;
}
