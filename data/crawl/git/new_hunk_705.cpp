	char *tmpfile = git_pathdup("REPLACE_EDITOBJ");
	enum object_type type;
	struct object_id old, new, prev;
	struct strbuf ref = STRBUF_INIT;

	if (get_oid(object_ref, &old) < 0)
		die("Not a valid object name: '%s'", object_ref);
