		}
	}

	if (!opt.pattern_list)
		die("no pattern given.");
	if ((opt.regflags != REG_NEWLINE) && opt.fixed)
