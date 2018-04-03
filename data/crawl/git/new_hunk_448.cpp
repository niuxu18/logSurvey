		return -1;
	}

	return refs->be->transaction_prepare(refs, transaction, err);
}

int ref_transaction_abort(struct ref_transaction *transaction,
			  struct strbuf *err)
{
	struct ref_store *refs = transaction->ref_store;
	int ret = 0;

	switch (transaction->state) {
	case REF_TRANSACTION_OPEN:
		/* No need to abort explicitly. */
		break;
	case REF_TRANSACTION_PREPARED:
		ret = refs->be->transaction_abort(refs, transaction, err);
		break;
	case REF_TRANSACTION_CLOSED:
		die("BUG: abort called on a closed reference transaction");
		break;
	default:
		die("BUG: unexpected reference transaction state");
		break;
	}

	ref_transaction_free(transaction);
	return ret;
}

int ref_transaction_commit(struct ref_transaction *transaction,
			   struct strbuf *err)
{
	struct ref_store *refs = transaction->ref_store;
	int ret;

	switch (transaction->state) {
	case REF_TRANSACTION_OPEN:
		/* Need to prepare first. */
		ret = ref_transaction_prepare(transaction, err);
		if (ret)
			return ret;
		break;
	case REF_TRANSACTION_PREPARED:
		/* Fall through to finish. */
		break;
	case REF_TRANSACTION_CLOSED:
		die("BUG: commit called on a closed reference transaction");
		break;
	default:
		die("BUG: unexpected reference transaction state");
		break;
	}

	return refs->be->transaction_finish(refs, transaction, err);
}

int refs_verify_refname_available(struct ref_store *refs,