{
	int i;
	for (i = 0; i < ARRAY_SIZE(warn_unconfigured_deny_msg); i++)
		warning(warn_unconfigured_deny_msg[i]);
}

static char *warn_unconfigured_deny_delete_current_msg[] = {