	if (errno == ENOENT)
		die("ambiguous argument '%s': unknown revision or path not in the working tree.\n"
		    "Use '--' to separate paths from revisions", arg);
	die("'%s': %s", arg, strerror(errno));
}

/*
