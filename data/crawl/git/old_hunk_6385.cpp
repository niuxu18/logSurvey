		die ("Could not run rsync to get refs");

	strbuf_reset(&buf);
	strbuf_addstr(&buf, transport->url);
	strbuf_addstr(&buf, "/packed-refs");

	args[2] = buf.buf;