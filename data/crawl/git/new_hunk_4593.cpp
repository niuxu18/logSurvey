{
	if (!strcmp(var, "format.headers")) {
		if (!value)
			die(_("format.headers without value"));
		add_header(value);
		return 0;
	}