	}
	status = copy_fd(fdi, fdo);
	if (close(fdo) != 0)
		return error("%s: close error: %s", dst, strerror(errno));

	if (!status && adjust_shared_perm(dst))
		return -1;