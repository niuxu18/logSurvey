	}

	if (!git_default_email[0]) {
		if (!pw)
			pw = getpwuid(getuid());
		if (!pw)
			die("You don't exist. Go away!");
		copy_email(pw);
	}

	/* And set the default date */