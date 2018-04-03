		read_lock();
		src->data = read_sha1_file(src_entry->idx.sha1, &type, &sz);
		read_unlock();
		if (!src->data)
			die("object %s cannot be read",
			    sha1_to_hex(src_entry->idx.sha1));
		if (sz != src_size)
			die("object %s inconsistent object length (%lu vs %lu)",
			    sha1_to_hex(src_entry->idx.sha1), sz, src_size);