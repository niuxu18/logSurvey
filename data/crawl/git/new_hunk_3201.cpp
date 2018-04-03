		ssize_t len = xread(ifd, buffer, sizeof(buffer));
		if (!len)
			break;
		if (len < 0)
			return COPY_READ_ERROR;
		if (write_in_full(ofd, buffer, len) < 0)
			return COPY_WRITE_ERROR;
	}
	return 0;
}
