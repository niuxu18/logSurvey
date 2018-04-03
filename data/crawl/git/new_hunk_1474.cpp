	return 0;
}

static int show_tag_object(const struct object_id *oid, struct rev_info *rev)
{
	unsigned long size;
	enum object_type type;
	char *buf = read_sha1_file(oid->hash, &type, &size);
	int offset = 0;

	if (!buf)
		return error(_("Could not read object %s"), oid_to_hex(oid));

	assert(type == OBJ_TAG);
	while (offset < size && buf[offset] != '\n') {
