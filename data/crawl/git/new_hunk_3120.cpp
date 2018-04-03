	memset(&sigc, 0, sizeof(sigc));

	len = parse_signature(buf, size);

	if (size == len) {
		if (verbose)
			write_in_full(1, buf, len);
		return error("no signature found");
	}

	ret = check_signature(buf, len, buf + len, size - len, &sigc);
	print_signature_buffer(&sigc, verbose ? GPG_VERIFY_VERBOSE : 0);

	signature_check_clear(&sigc);
	return ret;
