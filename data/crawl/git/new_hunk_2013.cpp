{
	long pos = ftell(buf->infile);
	if (pos < 0)
		return error_errno("ftell error");
	if (fseek(buf->infile, 0, SEEK_SET))
		return error_errno("seek error");
	return pos;
}
