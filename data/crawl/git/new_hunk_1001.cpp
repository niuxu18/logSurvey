		return 1;
}

enum todo_command {
	TODO_PICK = 0,
	TODO_REVERT
};

static const char *todo_command_strings[] = {
	"pick",
	"revert"
};

static const char *command_to_string(const enum todo_command command)
{
	if (command < ARRAY_SIZE(todo_command_strings))
		return todo_command_strings[command];
	die("Unknown command: %d", command);
}


static int do_pick_commit(enum todo_command command, struct commit *commit,
		struct replay_opts *opts)
{
	unsigned char head[20];
	struct commit *base, *next, *parent;
