		if (!commit) {
			if (ptr)
				*ptr = '\0';
			die("not something we can merge in %s: %s",
			    filename, merge_names->buf + pos);
		}
		remotes = &commit_list_insert(commit, remotes)->next;
