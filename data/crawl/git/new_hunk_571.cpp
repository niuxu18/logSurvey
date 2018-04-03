			p = uq.buf;
		}
		read_next_command();
		parse_and_store_blob(&last_blob, &oid, 0);
	} else {
		enum object_type expected = S_ISDIR(mode) ?
						OBJ_TREE: OBJ_BLOB;
		enum object_type type = oe ? oe->type :
					sha1_object_info(oid.hash, NULL);
		if (type < 0)
			die("%s not found: %s",
					S_ISDIR(mode) ?  "Tree" : "Blob",
