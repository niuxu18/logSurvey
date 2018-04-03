	printf("git version %s\n", git_version_string);
	return 0;
}

struct similar_ref_cb {
	const char *base_ref;
	struct string_list *similar_refs;
};

static int append_similar_ref(const char *refname, const unsigned char *sha1,
			      int flags, void *cb_data)
{
	struct similar_ref_cb *cb = (struct similar_ref_cb *)(cb_data);
	char *branch = strrchr(refname, '/') + 1;
	/* A remote branch of the same name is deemed similar */
	if (!prefixcmp(refname, "refs/remotes/") &&
	    !strcmp(branch, cb->base_ref))
		string_list_append(cb->similar_refs,
				   refname + strlen("refs/remotes/"));
	return 0;
}

static struct string_list guess_refs(const char *ref)
{
	struct similar_ref_cb ref_cb;
	struct string_list similar_refs = STRING_LIST_INIT_NODUP;

	ref_cb.base_ref = ref;
	ref_cb.similar_refs = &similar_refs;
	for_each_ref(append_similar_ref, &ref_cb);
	return similar_refs;
}

void help_unknown_ref(const char *ref, const char *cmd, const char *error)
{
	int i;
	struct string_list suggested_refs = guess_refs(ref);

	fprintf_ln(stderr, _("%s: %s - %s"), cmd, ref, error);

	if (suggested_refs.nr > 0) {
		fprintf_ln(stderr,
			   Q_("\nDid you mean this?",
			      "\nDid you mean one of these?",
			      suggested_refs.nr));
		for (i = 0; i < suggested_refs.nr; i++)
			fprintf(stderr, "\t%s\n", suggested_refs.items[i].string);
	}

	string_list_clear(&suggested_refs, 0);
	exit(1);
}