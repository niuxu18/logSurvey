			return; /* it is in pack - forget about it */
		if (connectivity_only && has_object_file(&obj->oid))
			return;
		printf("missing %s %s\n", typename(obj->type), oid_to_hex(&obj->oid));
		errors_found |= ERROR_REACHABLE;
		return;
	}
