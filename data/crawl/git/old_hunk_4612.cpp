	void *data = lock_and_read_sha1_file(sha1, &type, size);

	if (!data)
		error("'%s': unable to read %s", name, sha1_to_hex(sha1));

	return data;
}
