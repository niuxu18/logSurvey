	data.lineno = 0;
	data.color_diff = DIFF_OPT_TST(o, COLOR_DIFF);
	data.ws_rule = whitespace_rule(attr_path);
	data.file = o->file;

	if (fill_mmfile(&mf1, one) < 0 || fill_mmfile(&mf2, two) < 0)
		die("unable to read files to diff");
