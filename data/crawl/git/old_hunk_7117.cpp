	}
	qsort(entries, nr_objects, sizeof(*entries), compare_entries);

	for (i = 0, err = 0; i < nr_objects; i++) {
		void *data;
		enum object_type type;
		unsigned long size;

		data = unpack_entry(p, entries[i].offset, &type, &size);
		if (!data) {
			err = error("cannot unpack %s from %s",
				    sha1_to_hex(entries[i].sha1), p->pack_name);
			continue;
		}
		if (check_sha1_signature(entries[i].sha1, data, size, typename(type))) {
			err = error("packed %s from %s is corrupt",
				    sha1_to_hex(entries[i].sha1), p->pack_name);
			free(data);
			continue;
		}
		free(data);
	}
