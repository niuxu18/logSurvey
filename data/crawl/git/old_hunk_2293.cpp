
	if (prefix[0] == '!') {
		if (prefix[1] != '!')
			die ("Invalid search pattern: %s", prefix);
		prefix++;
	}

	if (regcomp(&regex, prefix, REG_EXTENDED))
		die("Invalid search pattern: %s", prefix);

	for (l = list; l; l = l->next) {
		l->item->object.flags |= ONELINE_SEEN;
