
		if (data_valid && !data)
			err = error("cannot unpack %s from %s at offset %"PRIuMAX"",
				    oid_to_hex(entries[i].oid.oid), p->pack_name,
				    (uintmax_t)entries[i].offset);
		else if (check_sha1_signature(entries[i].oid.hash, data, size, typename(type)))
			err = error("packed %s from %s is corrupt",
				    oid_to_hex(entries[i].oid.oid), p->pack_name);
		else if (fn) {
			int eaten = 0;
			err |= fn(entries[i].oid.oid, type, size, data, &eaten);
			if (eaten)
				data = NULL;
		}
