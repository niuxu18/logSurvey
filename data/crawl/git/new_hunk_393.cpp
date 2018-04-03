	enum object_type type;
	struct rev_note note;

	if (!(msg = read_sha1_file(note_oid->hash, &type, &msglen)) ||
			!msglen || type != OBJ_BLOB) {
		free(msg);
		return 1;
	}
	if (parse_rev_note(msg, &note))
		return 2;
	if (fprintf(file, ":%d %s\n", note.rev_nr, oid_to_hex(object_oid)) < 1)
		return 3;
	return 0;
}