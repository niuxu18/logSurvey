
	map = map_sha1_file(sha1, &mapsize);
	if (!map)
		return error("unable to find %s", sha1_to_hex(sha1));
	if (unpack_sha1_header(&stream, map, mapsize, hdr, sizeof(hdr)) < 0)
		status = error("unable to unpack %s header",
			       sha1_to_hex(sha1));