    fs = (file_state *) hash_lookup(hash, &r->id);
    if (NULL == fs) {
	errno = EBADF;
	DEBUG(1) {
	    fprintf(stderr, "%d WRITE id %d: ", (int) mypid, r->id);
	    perror("do_write");
	}
	return -errno;
    }
    if (r->offset > -1 && r->offset != fs->offset) {
	if (lseek(fs->fd, r->offset, SEEK_SET) < 0) {
	    DEBUG(1) {
		fprintf(stderr, "%d FD %d, offset %d: ", (int) mypid, fs->fd, r->offset);
		perror("lseek");
	    }
	}
    }
    DEBUG(2)
	fprintf(stderr, "%d WRITE %d,%d,%d\n", (int) mypid,
	fs->fd, wrtlen, r->offset);
    x = write(fs->fd, buf, wrtlen);
    if (x < 0) {
	DEBUG(1) {
	    fprintf(stderr, "%d FD %d: ", (int) mypid, fs->fd);
	    perror("write");
	}
	return -errno;
    }
    fs->offset = r->offset + x;
