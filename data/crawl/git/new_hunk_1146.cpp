	o->local_ref = local_ref_to_free =
		resolve_refdup("NOTES_MERGE_REF", 0, sha1, NULL);
	if (!o->local_ref)
		die(_("Failed to resolve NOTES_MERGE_REF"));

	if (notes_merge_commit(o, t, partial, sha1))
		die(_("Failed to finalize notes merge"));

	/* Reuse existing commit message in reflog message */
	memset(&pretty_ctx, 0, sizeof(pretty_ctx));