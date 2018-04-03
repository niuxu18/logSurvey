		clean_cmdnames(&main_cmds);
		fprintf_ln(stderr,
			   _("WARNING: You called a Git command named '%s', "
			     "which does not exist."),
			   cmd);
		if (autocorrect < 0)
			fprintf_ln(stderr,
				   _("Continuing under the assumption that "
				     "you meant '%s'."),
				   assumed);
		else {
			fprintf_ln(stderr,
				   _("Continuing in %0.1f seconds, "
				     "assuming that you meant '%s'."),
				   (float)autocorrect/10.0, assumed);
			sleep_millisec(autocorrect * 100);
		}
		return assumed;