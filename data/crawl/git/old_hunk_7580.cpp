		    write_in_full(out_fd, path, length) != length)
			die("unable to write rerere record");
	}
	if (close(out_fd) != 0)
		die("unable to write rerere record");
	return commit_lock_file(&write_lock);
}

static int handle_file(const char *path,
