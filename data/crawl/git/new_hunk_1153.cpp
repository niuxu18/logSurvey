		}

		if (oidcmp(&c->object.oid, &sb.final->object.oid))
			die(_("--reverse --first-parent together require range along first-parent chain"));
	}

	if (is_null_oid(&sb.final->object.oid)) {
