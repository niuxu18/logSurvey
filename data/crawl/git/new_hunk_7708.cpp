{
	struct commit_list *list = NULL, *backup = NULL, *l;
	int retval = -1;
	char *temp_commit_buffer = NULL;

	if (prefix[0] == '!') {
		if (prefix[1] != '!')
			die ("Invalid search pattern: %s", prefix);
		prefix++;
	}
	for_each_ref(handle_one_ref, &list);
	for (l = list; l; l = l->next)
		commit_list_insert(l->item, &backup);
	while (list) {
		char *p;
		struct commit *commit;
		enum object_type type;
		unsigned long size;

		commit = pop_most_recent_commit(&list, ONELINE_SEEN);
		parse_object(commit->object.sha1);
		if (temp_commit_buffer)
			free(temp_commit_buffer);
		if (commit->buffer)
			p = commit->buffer;
		else {
			p = read_sha1_file(commit->object.sha1, &type, &size);
			if (!p)
				continue;
			temp_commit_buffer = p;
		}
		if (!(p = strstr(p, "\n\n")))
			continue;
		if (!prefixcmp(p + 2, prefix)) {
			hashcpy(sha1, commit->object.sha1);
			retval = 0;
			break;
		}
	}
	if (temp_commit_buffer)
		free(temp_commit_buffer);
	free_commit_list(list);
	for (l = backup; l; l = l->next)
		clear_commit_marks(l->item, ONELINE_SEEN);