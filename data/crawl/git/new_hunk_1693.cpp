	if (!obj->used) {
		if (show_dangling)
			printf("dangling %s %s\n", typename(obj->type),
			       describe_object(obj));
		if (write_lost_and_found) {
			char *filename = git_pathdup("lost-found/%s/%s",
				obj->type == OBJ_COMMIT ? "commit" : "other",
				describe_object(obj));
			FILE *f;

			if (safe_create_leading_directories_const(filename)) {