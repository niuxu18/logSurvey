		len--;
	}

	fputs(diff_get_color(1, color), file);
	fwrite(ptr, len, 1, file);
	fputs(diff_get_color(1, DIFF_RESET), file);

	if (eol) {
		if (suppress_newline)
			buffer->suppressed_newline = 1;
		else
			putc('\n', file);
	}
}
