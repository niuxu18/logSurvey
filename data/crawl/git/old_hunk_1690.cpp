	if (!(obj->flags & HAS_OBJ)) {
		if (parent && !has_object_file(&obj->oid)) {
			printf("broken link from %7s %s\n",
				 typename(parent->type), oid_to_hex(&parent->oid));
			printf("              to %7s %s\n",
				 typename(obj->type), oid_to_hex(&obj->oid));
			errors_found |= ERROR_REACHABLE;
		}
		return 1;
