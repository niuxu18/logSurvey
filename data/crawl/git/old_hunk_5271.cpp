	va_end(args);
	return r;
}

/*
 * This function splits the buffer by newlines and colors the lines individually.
 *
 * Returns 0 on success.
 */
int color_fwrite_lines(FILE *fp, const char *color,
		size_t count, const char *buf)
{
	if (!*color)
		return fwrite(buf, count, 1, fp) != 1;
	while (count) {
		char *p = memchr(buf, '\n', count);
		if (p != buf && (fputs(color, fp) < 0 ||
				fwrite(buf, p ? p - buf : count, 1, fp) != 1 ||
				fputs(GIT_COLOR_RESET, fp) < 0))
			return -1;
		if (!p)
			return 0;
		if (fputc('\n', fp) < 0)
			return -1;
		count -= p + 1 - buf;
		buf = p + 1;
	}
	return 0;
}


