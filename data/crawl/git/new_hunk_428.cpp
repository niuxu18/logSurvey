		abbrev = auto_abbrev + 1;
}

static void sanity_check_on_fail(struct blame_scoreboard *sb, int baa)
{
	int opt = OUTPUT_SHOW_SCORE | OUTPUT_SHOW_NUMBER | OUTPUT_SHOW_NAME;