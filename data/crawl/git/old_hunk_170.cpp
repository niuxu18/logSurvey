	if (wt->is_bare)
		printf("bare\n");
	else {
		printf("HEAD %s\n", sha1_to_hex(wt->head_sha1));
		if (wt->is_detached)
			printf("detached\n");
		else if (wt->head_ref)
