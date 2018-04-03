 * Clean the index without touching entries that are not modified between
 * `head` and `remote`.
 */
static int clean_index(const struct object_id *head, const struct object_id *remote)
{
	struct tree *head_tree, *remote_tree, *index_tree;
	struct object_id index;

	head_tree = parse_tree_indirect(head->hash);
	if (!head_tree)
		return error(_("Could not parse object '%s'."), oid_to_hex(head));

	remote_tree = parse_tree_indirect(remote->hash);
	if (!remote_tree)
		return error(_("Could not parse object '%s'."), oid_to_hex(remote));

	read_cache_unmerged();

	if (fast_forward_to(head_tree, head_tree, 1))
		return -1;

	if (write_cache_as_tree(index.hash, 0, NULL))
		return -1;

	index_tree = parse_tree_indirect(index.hash);
	if (!index_tree)
		return error(_("Could not parse object '%s'."), oid_to_hex(&index));

	if (fast_forward_to(index_tree, remote_tree, 0))
		return -1;