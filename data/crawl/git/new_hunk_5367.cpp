	 */
	if (opt->count && count) {
		char buf[32];
		output_color(opt, name, strlen(name), opt->color_filename);
		output_sep(opt, ':');
		snprintf(buf, sizeof(buf), "%u\n", count);
		opt->output(opt, buf, strlen(buf));
	}
	return !!last_hit;