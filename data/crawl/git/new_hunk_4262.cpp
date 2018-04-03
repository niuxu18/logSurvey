	return strcmp(one->name, two->name);
}

/*
 * Emit a warning and return true iff ref1 and ref2 have the same name
 * and the same sha1.  Die if they have the same name but different
 * sha1s.
 */
static int is_dup_ref(const struct ref_entry *ref1, const struct ref_entry *ref2)
{
	if (!strcmp(ref1->name, ref2->name)) {
		/* Duplicate name; make sure that the SHA1s match: */
		if (hashcmp(ref1->sha1, ref2->sha1))
			die("Duplicated ref, and SHA1s don't match: %s",
			    ref1->name);
		warning("Duplicated ref: %s", ref1->name);
		return 1;
	} else {
		return 0;
	}
}

static void sort_ref_array(struct ref_array *array)
{
	int i, j;

	/* Nothing to sort unless there are at least two entries */
	if (array->nr < 2)
