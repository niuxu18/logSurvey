	return 0;
}

static int remove_branches(struct string_list *branches)
{
	struct strbuf err = STRBUF_INIT;
	int i, result = 0;

	if (repack_without_refs(branches, &err))
		result |= error("%s", err.buf);
	strbuf_release(&err);

	for (i = 0; i < branches->nr; i++) {
		const char *refname = branches->items[i].string;

		if (delete_ref(refname, NULL, 0))
			result |= error(_("Could not remove branch %s"), refname);
	}

	return result;
}

static int rm(int argc, const char **argv)
{
	struct option options[] = {