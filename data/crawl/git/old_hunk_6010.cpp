void *read_sha1_file(const unsigned char *sha1, enum object_type *type,
		     unsigned long *size)
{
	void *data = read_object(sha1, type, size);
	/* legacy behavior is to die on corrupted objects */
	if (!data && (has_loose_object(sha1) || has_packed_and_bad(sha1)))
		die("object %s is corrupted", sha1_to_hex(sha1));
	return data;
}
