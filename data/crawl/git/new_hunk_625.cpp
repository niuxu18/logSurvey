	if (ret)
		return ret;
	if (strcmp(*output, "now")) {
		timestamp_t now = approxidate("now");
		if (approxidate(*output) >= now)
			git_die_config(key, _("Invalid %s: '%s'"), key, *output);
	}
