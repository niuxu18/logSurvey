}

static void
gen_conf(Entry * head, FILE * fp, bool verbose_output)
{
    Entry *entry;
    char buf[8192];
    Line *def = NULL;

    for (entry = head; entry != NULL; entry = entry->next) {
        Line *line;
        int enabled = 1;

        if (!strcmp(entry->name, "comment"))
            (void) 0;
	else if (verbose_output) {
	    fprintf(fp, "#  TAG: %s", entry->name);

	    if (entry->comment)
		fprintf(fp, "\t%s", entry->comment);

	    fprintf(fp, "\n");
	}

	if (!defined(entry->ifdef)) {
	    if (verbose_output) {
		fprintf(fp, "# Note: This option is only available if Squid is rebuilt with the\n");
		fprintf(fp, "#       %s\n#\n", available_if(entry->ifdef));
	    }
	    enabled = 0;
        }

	if (verbose_output) {
	    for (line = entry->doc; line != NULL; line = line->next) {
		fprintf(fp, "#%s\n", line->data);
	    }
	}

        if (entry->default_value && strcmp(entry->default_value, "none") != 0) {
            snprintf(buf, sizeof(buf), "%s %s", entry->name, entry->default_value);
