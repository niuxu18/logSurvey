	strbuf_release(&sb);
}

void show_submodule_summary(FILE *f, const char *path,
		const char *line_prefix,
		unsigned char one[20], unsigned char two[20],
