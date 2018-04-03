		if (buf.buf[0] == '@')
			(*tail)->symref = xstrdup(buf.buf + 1);
		else if (buf.buf[0] != '?')
			get_oid_hex(buf.buf, &(*tail)->old_oid);
		if (eon) {
			if (has_attribute(eon + 1, "unchanged")) {
				(*tail)->status |= REF_STATUS_UPTODATE;
				if (read_ref((*tail)->name,
					     (*tail)->old_oid.hash) < 0)
					die(N_("Could not read ref %s"),
					    (*tail)->name);
			}
