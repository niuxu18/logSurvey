	if (status==SS$_ILLIOFUNC) {
		sys$dassgn(chan);
#ifdef	CTRLY_ENABLED_ANYWAY
		fprintf (stderr,
                         _("-warning, CTRL-Y will leave sub-process(es) around.\n"));
#else
		return;
#endif
