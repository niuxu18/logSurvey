	int typelen;
	char type[20];
	unsigned char sha1[20];
	const char *object, *type_line, *tag_line, *tagger_line;

	if (size < 64)
		return error("wanna fool me ? you obviously got the size wrong !");

	buffer[size] = 0;