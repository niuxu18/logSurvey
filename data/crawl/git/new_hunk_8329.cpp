	if (!dir)
		return;

	if (verbose)
		fprintf(stderr, "Checking directory %s\n", path);

	while ((de = readdir(dir)) != NULL) {
		char name[100];
		unsigned char sha1[20];
