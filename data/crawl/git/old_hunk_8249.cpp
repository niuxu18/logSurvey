	if (!obj->used) {
		printf("dangling %s %s\n", typename(obj->type),
		       sha1_to_hex(obj->sha1));
		return;
	}

