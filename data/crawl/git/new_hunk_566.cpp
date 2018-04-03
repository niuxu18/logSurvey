{
	static const char *msg = "fast-import";
	struct ref_transaction *transaction;
	struct object_id old_oid;
	struct strbuf err = STRBUF_INIT;

	if (is_null_oid(&b->oid)) {
		if (b->delete)
			delete_ref(NULL, b->name, NULL, 0);
		return 0;
	}
	if (read_ref(b->name, old_oid.hash))
		oidclr(&old_oid);
	if (!force_update && !is_null_oid(&old_oid)) {
		struct commit *old_cmit, *new_cmit;

		old_cmit = lookup_commit_reference_gently(old_oid.hash, 0);
		new_cmit = lookup_commit_reference_gently(b->oid.hash, 0);
		if (!old_cmit || !new_cmit)
			return error("Branch %s is missing commits.", b->name);
