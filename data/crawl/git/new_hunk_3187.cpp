		if (data->format == REPLACE_FORMAT_SHORT)
			printf("%s\n", refname);
		else if (data->format == REPLACE_FORMAT_MEDIUM)
			printf("%s -> %s\n", refname, oid_to_hex(oid));
		else { /* data->format == REPLACE_FORMAT_LONG */
			struct object_id object;
			enum object_type obj_type, repl_type;

			if (get_sha1(refname, object.hash))
				return error("Failed to resolve '%s' as a valid ref.", refname);

			obj_type = sha1_object_info(object.hash, NULL);
			repl_type = sha1_object_info(oid->hash, NULL);

			printf("%s (%s) -> %s (%s)\n", refname, typename(obj_type),
			       oid_to_hex(oid), typename(repl_type));
		}
	}

