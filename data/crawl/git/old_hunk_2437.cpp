
	if (item->object.parsed)
		return 0;
	buffer = read_sha1_file(get_object_hash(item->object), &type, &size);
	if (!buffer)
		return quiet_on_missing ? -1 :
			error("Could not read %s",
