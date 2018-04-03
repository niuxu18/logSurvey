	struct entry *entry;

	if (get_sha1_hex(buffer, sha1))
		die("expected sha1, got '%s'", (char*) buffer);
	entry = convert_entry(sha1);
	memcpy(buffer, sha1_to_hex(entry->new_sha1), 40);
}
