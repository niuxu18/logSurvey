		const char *rb = strchr(force_author, '>');

		if (!lb || !rb)
			die("malformed --author parameter\n");
		name = xstrndup(force_author, lb - force_author);
		email = xstrndup(lb + 2, rb - (lb + 2));
	}
