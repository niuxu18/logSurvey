
static int run_status(int code, const char *cmd_name)
{
	if (code > 0)
		error("%s exited with error code %d", cmd_name, code);
	return code;
}