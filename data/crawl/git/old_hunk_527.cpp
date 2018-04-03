		enum object_type has_type;
		unsigned long has_size;
		read_lock();
		has_type = sha1_object_info(sha1, &has_size);
		if (has_type < 0)
			die(_("cannot read existing object info %s"), sha1_to_hex(sha1));
		if (has_type != type || has_size != size)
			die(_("SHA1 COLLISION FOUND WITH %s !"), sha1_to_hex(sha1));
		has_data = read_sha1_file(sha1, &has_type, &has_size);
		read_unlock();
		if (!data)
			data = new_data = get_data_from_pack(obj_entry);
		if (!has_data)
			die(_("cannot read existing object %s"), sha1_to_hex(sha1));
		if (size != has_size || type != has_type ||
		    memcmp(data, has_data, size) != 0)
			die(_("SHA1 COLLISION FOUND WITH %s !"), sha1_to_hex(sha1));
		free(has_data);
	}

	if (strict) {
		read_lock();
		if (type == OBJ_BLOB) {
			struct blob *blob = lookup_blob(sha1);
			if (blob)
				blob->object.flags |= FLAG_CHECKED;
			else
				die(_("invalid blob object %s"), sha1_to_hex(sha1));
		} else {
			struct object *obj;
			int eaten;
