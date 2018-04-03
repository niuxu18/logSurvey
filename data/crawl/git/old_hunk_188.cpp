
	transaction = ref_store_transaction_begin(refs, &err);
	if (!transaction ||
	    ref_transaction_delete(transaction, refname,
				   old_oid ? old_oid->hash : NULL,
				   flags, msg, &err) ||
	    ref_transaction_commit(transaction, &err)) {
		error("%s", err.buf);
