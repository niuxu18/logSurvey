	retval = -1;
	while ((sha1 = get_rev())) {
		packet_buf_write(&req_buf, "have %s\n", sha1_to_hex(sha1));
		if (args->verbose)
			fprintf(stderr, "have %s\n", sha1_to_hex(sha1));
		in_vain++;
		if (flush_at <= ++count) {
			int ack;
