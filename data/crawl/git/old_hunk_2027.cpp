		utb.actime = mtime;
		utb.modtime = mtime;
		if (utime(tmp_file.buf, &utb) < 0)
			warning("failed utime() on %s: %s",
				tmp_file.buf, strerror(errno));
	}

	return finalize_object_file(tmp_file.buf, filename);
