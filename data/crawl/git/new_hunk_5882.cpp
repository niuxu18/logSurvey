			printf("Renaming %s to %s\n", src, dst);
		if (!show_only && mode != INDEX &&
				rename(src, dst) < 0 && !ignore_errors)
			die_errno ("renaming '%s' failed", src);

		if (mode == WORKING_DIRECTORY)
			continue;
