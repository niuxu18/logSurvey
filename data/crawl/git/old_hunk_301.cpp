	return map_sha1_file_1(NULL, sha1, size);
}

unsigned long unpack_object_header_buffer(const unsigned char *buf,
		unsigned long len, enum object_type *type, unsigned long *sizep)
{
	unsigned shift;
	unsigned long size, c;
	unsigned long used = 0;

	c = buf[used++];
	*type = (c >> 4) & 7;
	size = c & 15;
	shift = 4;
	while (c & 0x80) {
		if (len <= used || bitsizeof(long) <= shift) {
			error("bad object header");
			size = used = 0;
			break;
		}
		c = buf[used++];
		size += (c & 0x7f) << shift;
		shift += 7;
	}
	*sizep = size;
	return used;
}

static int unpack_sha1_short_header(git_zstream *stream,
				    unsigned char *map, unsigned long mapsize,
				    void *buffer, unsigned long bufsiz)