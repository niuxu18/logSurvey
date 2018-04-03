{
	if (*arg == '-')
		die("bad flag '%s' used after filename", arg);
	if (check_filename(prefix, arg) || !no_wildcard(arg))
		return;
	die_verify_filename(prefix, arg, diagnose_misspelt_rev);
}
