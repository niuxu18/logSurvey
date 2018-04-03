
static int default_refs;

static int fsck_handle_reflog_ent(unsigned char *osha1, unsigned char *nsha1,
		const char *email, unsigned long timestamp, int tz,
		const char *message, void *cb_data)
{
	struct object *obj;

	if (verbose)
		fprintf(stderr, "Checking reflog %s->%s\n",
			sha1_to_hex(osha1), sha1_to_hex(nsha1));

	if (!is_null_sha1(osha1)) {
		obj = lookup_object(osha1);
		if (obj) {
			obj->used = 1;
			mark_object_reachable(obj);
		}
	}
	obj = lookup_object(nsha1);
	if (obj) {
		obj->used = 1;
		mark_object_reachable(obj);
	}
	return 0;
}
