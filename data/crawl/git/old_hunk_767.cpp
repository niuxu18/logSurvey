		fprintf(stderr, _("Aborting\n"));
}

/*
 * Unlink the last component and schedule the leading directories for
 * removal, such that empty directories get removed.
 */
static void unlink_entry(const struct cache_entry *ce)
{
	if (!check_leading_path(ce->name, ce_namelen(ce)))
		return;
	if (remove_or_warn(ce->ce_mode, ce->name))
