			oid_to_hex(&commit->object.oid));
		pretty_print_commit(&ctx, commit, &out);
	}
	if (write_in_full(fd, out.buf, out.len) != out.len)
		die_errno(_("Writing SQUASH_MSG"));
	if (close(fd))
		die_errno(_("Finishing SQUASH_MSG"));
	strbuf_release(&out);
}

