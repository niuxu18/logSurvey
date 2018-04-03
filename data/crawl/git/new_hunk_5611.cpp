			continue;
		}

		remote_hex = sha1_to_hex(remote);
		if (!fetching) {
			struct strbuf c = STRBUF_INIT;
			if (multi_ack)          strbuf_addstr(&c, " multi_ack");
			if (use_sideband == 2)  strbuf_addstr(&c, " side-band-64k");
			if (use_sideband == 1)  strbuf_addstr(&c, " side-band");
			if (args.use_thin_pack) strbuf_addstr(&c, " thin-pack");
			if (args.no_progress)   strbuf_addstr(&c, " no-progress");
			if (args.include_tag)   strbuf_addstr(&c, " include-tag");
			if (prefer_ofs_delta)   strbuf_addstr(&c, " ofs-delta");
			packet_buf_write(&req_buf, "want %s%s\n", remote_hex, c.buf);
			strbuf_release(&c);
		} else
			packet_buf_write(&req_buf, "want %s\n", remote_hex);
		fetching++;
	}

	if (!fetching) {
		strbuf_release(&req_buf);
		packet_flush(fd[1]);
		return 1;
	}

	if (is_repository_shallow())
		write_shallow_commits(&req_buf, 1);
	if (args.depth > 0)
		packet_buf_write(&req_buf, "deepen %d", args.depth);
	packet_buf_flush(&req_buf);

	safe_write(fd[1], req_buf.buf, req_buf.len);

	if (args.depth > 0) {
		char line[1024];
