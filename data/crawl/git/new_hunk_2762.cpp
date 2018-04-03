		 * "~/foobar/" in the config file, and to expand the ~
		 * when retrieving the value.
		 */
		return xstrdup(value);
	if (types == TYPE_INT)
		return xstrfmt("%"PRId64, git_config_int64(key, value));
	if (types == TYPE_BOOL)
		return xstrdup(git_config_bool(key, value) ?  "true" : "false");
	if (types == TYPE_BOOL_OR_INT) {
		int is_bool, v;
		v = git_config_bool_or_int(key, value, &is_bool);
		if (!is_bool)
			return xstrfmt("%d", v);
		else
			return xstrdup(v ? "true" : "false");
	}

	die("BUG: cannot normalize type %d", types);
}

static int get_color_found;