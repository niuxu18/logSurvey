
	if (output_directory) {
		if (use_stdout)
			die(_("standard output, or directory, which one?"));
		if (mkdir(output_directory, 0777) < 0 && errno != EEXIST)
			die_errno(_("Could not create directory '%s'"),
				  output_directory);
	}

