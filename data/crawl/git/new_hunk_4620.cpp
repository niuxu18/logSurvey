	}

	if (!opt.pattern_list)
		die(_("no pattern given."));
	if (!opt.fixed && opt.ignore_case)
		opt.regflags |= REG_ICASE;
	if ((opt.regflags != REG_NEWLINE) && opt.fixed)
		die(_("cannot mix --fixed-strings and regexp"));

#ifndef NO_PTHREADS
	if (online_cpus() == 1 || !grep_threads_ok(&opt))