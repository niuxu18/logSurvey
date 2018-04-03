	struct object *obj = lookup_object(sha1);
	if (!obj)
		return create_object(sha1, alloc_blob_node());
	if (!obj->type)
		obj->type = OBJ_BLOB;
	if (obj->type != OBJ_BLOB) {
		error("Object %s is a %s, not a blob",
		      sha1_to_hex(sha1), typename(obj->type));
		return NULL;
	}
	return (struct blob *) obj;
}

int parse_blob_buffer(struct blob *item, void *buffer, unsigned long size)