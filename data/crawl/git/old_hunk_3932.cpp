
static struct cmdnames main_cmds, other_cmds;

void list_common_cmds_help(void)
{
	int i, longest = 0;

	for (i = 0; i < ARRAY_SIZE(common_cmds); i++) {
		if (longest < strlen(common_cmds[i].name))
			longest = strlen(common_cmds[i].name);
	}

	puts(_("The most commonly used git commands are:"));
	for (i = 0; i < ARRAY_SIZE(common_cmds); i++) {
		printf("   %s   ", common_cmds[i].name);
		mput_char(' ', longest - strlen(common_cmds[i].name));
		puts(_(common_cmds[i].help));
	}
}

static int is_git_command(const char *s)
{
	return is_in_cmdlist(&main_cmds, s) ||
