			c = c->parents->item;
		}

		if (oidcmp(&c->object.oid, &sb.final->object.oid))
			die("--reverse --first-parent together require range along first-parent chain");
	}

	if (is_null_oid(&sb.final->object.oid)) {
		o = sb.final->util;
		sb.final_buf = xmemdupz(o->file.ptr, o->file.size);
		sb.final_buf_size = o->file.size;
