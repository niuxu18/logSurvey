
		buf = read_sha1_file(oid->hash, &type, &size);
		if (!buf)
			die(_("cannot read object %s '%s'"), oid_to_hex(oid), path);
		if (type != OBJ_BLOB)
			die(_("blob expected for %s '%s'"), oid_to_hex(oid), path);
		if (S_ISREG(mode)) {
			struct strbuf strbuf = STRBUF_INIT;
			if (convert_to_working_tree(path, buf, size, &strbuf)) {
