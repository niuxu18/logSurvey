	 */

	if (delete_ref("NOTES_MERGE_PARTIAL", NULL, 0))
		ret += error(_("Failed to delete ref NOTES_MERGE_PARTIAL"));
	if (delete_ref("NOTES_MERGE_REF", NULL, REF_NODEREF))
		ret += error(_("Failed to delete ref NOTES_MERGE_REF"));
	if (notes_merge_abort(o))
		ret += error(_("Failed to remove 'git notes merge' worktree"));
	return ret;
}

