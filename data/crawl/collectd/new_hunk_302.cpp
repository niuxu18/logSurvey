	else
	{
		if (print_timestamp)
			fprintf (fh, "[%s] %s%s\n", timestamp_str, level_str, msg);
		else
			fprintf (fh, "%s%s\n", level_str, msg);

		if (do_close != 0)
			fclose (fh);