		strcpy(hex, sha1_to_hex(revs->commits->item->object.sha1));

	if (flags & BISECT_SHOW_ALL) {
		traverse_commit_list(revs, show_commit, show_object, revs);
		printf("------\n");
	}

