		DIFF_FILE_VALID(s) ? "valid" : "invalid",
		s->mode,
		s->sha1_valid ? sha1_to_hex(s->sha1) : "");
	fprintf(stderr, "queue[%d] %s size %lu\n",
		x, one ? one : "",
		s->size);
}

void diff_debug_filepair(const struct diff_filepair *p, int i)
