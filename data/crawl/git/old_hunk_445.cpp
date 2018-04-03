
	assert(err);

	for (i = 1; i < n; i++)
		if (!strcmp(refnames->items[i - 1].string, refnames->items[i].string)) {
			strbuf_addf(err,
				    "multiple updates for ref '%s' not allowed.",
				    refnames->items[i].string);
			return 1;
		}
	return 0;
}