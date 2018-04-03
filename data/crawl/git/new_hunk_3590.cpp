	}
}

/*
 * An each_ref_entry_fn that writes the entry to a packed-refs file.
 */
static int write_packed_entry_fn(struct ref_entry *entry, void *cb_data)
{
	int *fd = cb_data;
	enum peel_status peel_status = peel_entry(entry, 0);

	if (peel_status != PEEL_PEELED && peel_status != PEEL_NON_TAG)
		error("internal error: %s is not a valid packed reference!",
		      entry->name);
	write_packed_entry(*fd, entry->name, entry->u.value.sha1,
			   peel_status == PEEL_PEELED ?
			   entry->u.value.peeled : NULL);
	return 0;
}

struct ref_to_prune {
	struct ref_to_prune *next;
	unsigned char sha1[20];