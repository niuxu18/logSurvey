{
	char *ket = strrchr(string, '>');
	if (!ket || ket[1] != ' ')
		die("Malformed ident string: '%s'", string);
	*++ket = '\0';
	return ket;
}
