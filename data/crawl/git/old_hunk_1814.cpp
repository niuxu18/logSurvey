}

/*
 * Return true iff the reference described by entry can be resolved to
 * an object in the database.  Emit a warning if the referred-to
 * object does not exist.
 */
static int entry_resolves_to_object(struct ref_entry *entry)
{
	if (entry->flag & REF_ISBROKEN)
		return 0;
	if (!has_sha1_file(entry->u.value.oid.hash)) {
		error("%s does not point to a valid object!", entry->name);
		return 0;
	}
	return 1;
}

/*
 * current_ref is a performance hack: when iterating over references
 * using the for_each_ref*() functions, current_ref is set to the