			MAP_PRIVATE, in_fd, 0);
		close(in_fd);

		if (chmod(lock->filename.buf, st.st_mode & 07777) < 0) {
			error("chmod on %s failed: %s",
				lock->filename.buf, strerror(errno));
			ret = CONFIG_NO_WRITE;
			goto out_free;
		}
