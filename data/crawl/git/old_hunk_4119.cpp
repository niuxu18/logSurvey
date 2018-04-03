	if (fstat(fd, &st))
		die_errno("cannot stat the open index");

	errno = EINVAL;
	mmap_size = xsize_t(st.st_size);
	if (mmap_size < sizeof(struct cache_header) + 20)
		die("index file smaller than expected");

	mmap = xmmap(NULL, mmap_size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0);
	close(fd);
	if (mmap == MAP_FAILED)
		die_errno("unable to map index file");

	hdr = mmap;
	if (verify_hdr(hdr, mmap_size) < 0)