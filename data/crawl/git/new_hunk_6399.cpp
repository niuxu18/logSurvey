		die("Unexpected option --remote");
	if (exec)
		die("Option --exec can only be used together with --remote");
	if (output)
		die("Unexpected option --output");

	if (!base)
		base = "";

	if (list) {
		for (i = 0; i < ARRAY_SIZE(archivers); i++)
			printf("%s\n", archivers[i].name);
