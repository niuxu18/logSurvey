	}

	/* Write a .git file in the submodule to redirect to the superproject. */
	strbuf_addf(&sb, "%s/.git", path);
	if (safe_create_leading_directories_const(sb.buf) < 0)
		die(_("could not create leading directories of '%s'"), sb.buf);
	submodule_dot_git = fopen(sb.buf, "w");