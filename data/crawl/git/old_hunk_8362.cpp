	if (!obj->type)
		obj->type = OBJ_TAG;
        if (obj->type != OBJ_TAG) {
                error("Object %s is a %s, not a tree",
                      sha1_to_hex(sha1), typename(obj->type));
                return NULL;
        }