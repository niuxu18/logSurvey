		die_errno("unable to make temporary index file readable");

	strbuf_addf(name_buffer, "%s.pack", sha1_to_hex(sha1));
	free_pack_by_name(name_buffer->buf);

	if (rename(pack_tmp_name, name_buffer->buf))
		die_errno("unable to rename temporary pack file");