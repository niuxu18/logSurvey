		fd = open_output_fd(path, ce, to_tempfile);
		if (fd < 0) {
			free(new);
			return error_errno("unable to create file %s", path);
		}

		wrote = write_in_full(fd, new, size);
