
static void tree_content_replace(
	struct tree_entry *root,
	const unsigned char *sha1,
	const uint16_t mode,
	struct tree_content *newtree)
{
	if (!S_ISDIR(mode))
		die("Root cannot be a non-directory");
	oidclr(&root->versions[0].oid);
	hashcpy(root->versions[1].oid.hash, sha1);
	if (root->tree)
		release_tree_content_recursive(root->tree);
	root->tree = newtree;
