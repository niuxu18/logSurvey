	"\tint\tresult = 1;\n"
	"\tchar\t*token;\n"
	"\tdebug(0,10)(\"parse_line: %%s\\n\", buff);\n"
	"\tif ((token = strtok(buff, w_space)) == NULL) {\n"
	"\t\t/* ignore empty lines */\n"
	"\t\t(void) 0;\n"
	);

    for (entry = head; entry != NULL; entry = entry->next) {
	if (strcmp(entry->name, "comment") == 0)
	    continue;
	fprintf(fp,
	    "\t} else if (!strcmp(token, \"%s\")) {\n",
	    entry->name
	    );
	assert(entry->loc);
	if (entry->ifdef)
	    fprintf(fp, "#if %s\n", entry->ifdef);
	if (strcmp(entry->loc, "none") == 0) {
	    fprintf(fp,
		"\t\tparse_%s();\n",
