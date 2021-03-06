	return ret;
}

static void update_tracking_ref(struct remote *remote, struct ref *ref)
{
	struct refspec rs;

	if (ref->status != REF_STATUS_OK && ref->status != REF_STATUS_UPTODATE)
		return;

	rs.src = ref->name;
	rs.dst = NULL;

	if (!remote_find_tracking(remote, &rs)) {
		if (args.verbose)
			fprintf(stderr, "updating local tracking ref '%s'\n", rs.dst);
		if (ref->deletion) {
			delete_ref(rs.dst, NULL, 0);
		} else
			update_ref("update by push", rs.dst,
					ref->new_sha1, NULL, 0, 0);
		free(rs.dst);
	}
}

#define SUMMARY_WIDTH (2 * DEFAULT_ABBREV + 3)

static void print_ref_status(char flag, const char *summary, struct ref *to, struct ref *from, const char *msg)
{
	fprintf(stderr, " %c %-*s ", flag, SUMMARY_WIDTH, summary);
	if (from)
		fprintf(stderr, "%s -> %s", prettify_refname(from->name), prettify_refname(to->name));
	else
		fputs(prettify_refname(to->name), stderr);
	if (msg) {
		fputs(" (", stderr);
		fputs(msg, stderr);
		fputc(')', stderr);
	}
	fputc('\n', stderr);
}

static const char *status_abbrev(unsigned char sha1[20])
{
	return find_unique_abbrev(sha1, DEFAULT_ABBREV);
}

static void print_ok_ref_status(struct ref *ref)
{
	if (ref->deletion)
		print_ref_status('-', "[deleted]", ref, NULL, NULL);
	else if (is_null_sha1(ref->old_sha1))
		print_ref_status('*',
			(!prefixcmp(ref->name, "refs/tags/") ? "[new tag]" :
			  "[new branch]"),
			ref, ref->peer_ref, NULL);
	else {
		char quickref[84];
		char type;
		const char *msg;

		strcpy(quickref, status_abbrev(ref->old_sha1));
		if (ref->nonfastforward) {
			strcat(quickref, "...");
			type = '+';
			msg = "forced update";
		} else {
			strcat(quickref, "..");
			type = ' ';
			msg = NULL;
		}
		strcat(quickref, status_abbrev(ref->new_sha1));

		print_ref_status(type, quickref, ref, ref->peer_ref, msg);
	}
}

static int print_one_push_status(struct ref *ref, const char *dest, int count)
{
	if (!count)
		fprintf(stderr, "To %s\n", dest);

	switch(ref->status) {
	case REF_STATUS_NONE:
		print_ref_status('X', "[no match]", ref, NULL, NULL);
		break;
	case REF_STATUS_REJECT_NODELETE:
		print_ref_status('!', "[rejected]", ref, NULL,
				"remote does not support deleting refs");
		break;
	case REF_STATUS_UPTODATE:
		print_ref_status('=', "[up to date]", ref,
				ref->peer_ref, NULL);
		break;
	case REF_STATUS_REJECT_NONFASTFORWARD:
		print_ref_status('!', "[rejected]", ref, ref->peer_ref,
				"non-fast-forward");
		break;
	case REF_STATUS_REMOTE_REJECT:
		print_ref_status('!', "[remote rejected]", ref,
				ref->deletion ? NULL : ref->peer_ref,
				ref->remote_status);
		break;
	case REF_STATUS_EXPECTING_REPORT:
		print_ref_status('!', "[remote failure]", ref,
				ref->deletion ? NULL : ref->peer_ref,
				"remote failed to report status");
		break;
	case REF_STATUS_OK:
		print_ok_ref_status(ref);
		break;
	}

	return 1;
}

static void print_push_status(const char *dest, struct ref *refs)
{
	struct ref *ref;
	int n = 0;

	if (args.verbose) {
		for (ref = refs; ref; ref = ref->next)
			if (ref->status == REF_STATUS_UPTODATE)
				n += print_one_push_status(ref, dest, n);
	}

	for (ref = refs; ref; ref = ref->next)
		if (ref->status == REF_STATUS_OK)
			n += print_one_push_status(ref, dest, n);

	for (ref = refs; ref; ref = ref->next) {
		if (ref->status != REF_STATUS_NONE &&
		    ref->status != REF_STATUS_UPTODATE &&
		    ref->status != REF_STATUS_OK)
			n += print_one_push_status(ref, dest, n);
	}
}

static int refs_pushed(struct ref *ref)
{
	for (; ref; ref = ref->next) {
		switch(ref->status) {
		case REF_STATUS_NONE:
		case REF_STATUS_UPTODATE:
			break;
		default:
			return 1;
		}
	}
	return 0;
}

static void print_helper_status(struct ref *ref)
{
	struct strbuf buf = STRBUF_INIT;
