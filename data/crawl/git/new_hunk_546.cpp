		struct object_entry *oe = find_mark(idnum);
		if (oe->type != OBJ_COMMIT)
			die("Mark :%" PRIuMAX " not a commit", idnum);
		if (oidcmp(&b->oid, &oe->idx.oid)) {
			oidcpy(&b->oid, &oe->idx.oid);
			if (oe->pack_id != MAX_PACK_ID) {
				unsigned long size;
				char *buf = gfi_unpack_entry(oe, &size);
