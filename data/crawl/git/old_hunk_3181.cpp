	return ret;
}

static int add_info_ref(const char *path, const unsigned char *sha1, int flag, void *cb_data)
{
	FILE *fp = cb_data;
	struct object *o = parse_object(sha1);
	if (!o)
		return -1;

	if (fprintf(fp, "%s	%s\n", sha1_to_hex(sha1), path) < 0)
		return -1;

	if (o->type == OBJ_TAG) {
