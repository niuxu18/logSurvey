{
	char *r = prefix_path_gently(prefix, len, NULL, path);
	if (!r)
		die(_("'%s' is outside repository"), path);
	return r;
}

