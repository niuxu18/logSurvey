	return 0;
}

struct refspec {
	char *src;
	char *dst;
	char force;
};

/*
 * A:B means fast forward remote B with local A.
 * +A:B means overwrite remote B with local A.
 * +A is a shorthand for +A:A.
 * A is a shorthand for A:A.
 * :B means delete remote B.
 */
static struct refspec *parse_ref_spec(int nr_refspec, char **refspec)
{
	int i;
	struct refspec *rs = xcalloc(sizeof(*rs), (nr_refspec + 1));
	for (i = 0; i < nr_refspec; i++) {
		char *sp, *dp, *ep;
		sp = refspec[i];
		if (*sp == '+') {
			rs[i].force = 1;
			sp++;
		}
		ep = strchr(sp, ':');
		if (ep) {
			dp = ep + 1;
			*ep = 0;
		}
		else
			dp = sp;
		rs[i].src = sp;
		rs[i].dst = dp;
	}
	rs[nr_refspec].src = rs[nr_refspec].dst = NULL;
	return rs;
}

static int count_refspec_match(const char *pattern,
			       struct ref *refs,
			       struct ref **matched_ref)
{
	int patlen = strlen(pattern);
	struct ref *matched_weak = NULL;
	struct ref *matched = NULL;
	int weak_match = 0;
	int match = 0;

	for (weak_match = match = 0; refs; refs = refs->next) {
		char *name = refs->name;
		int namelen = strlen(name);
		int weak_match;

		if (namelen < patlen ||
		    memcmp(name + namelen - patlen, pattern, patlen))
			continue;
		if (namelen != patlen && name[namelen - patlen - 1] != '/')
			continue;

		/* A match is "weak" if it is with refs outside
		 * heads or tags, and did not specify the pattern
		 * in full (e.g. "refs/remotes/origin/master") or at
		 * least from the toplevel (e.g. "remotes/origin/master");
		 * otherwise "git push $URL master" would result in
		 * ambiguity between remotes/origin/master and heads/master
		 * at the remote site.
		 */
		if (namelen != patlen &&
		    patlen != namelen - 5 &&
		    prefixcmp(name, "refs/heads/") &&
		    prefixcmp(name, "refs/tags/")) {
			/* We want to catch the case where only weak
			 * matches are found and there are multiple
			 * matches, and where more than one strong
			 * matches are found, as ambiguous.  One
			 * strong match with zero or more weak matches
			 * are acceptable as a unique match.
			 */
			matched_weak = refs;
			weak_match++;
		}
		else {
			matched = refs;
			match++;
		}
	}
	if (!matched) {
		*matched_ref = matched_weak;
		return weak_match;
	}
	else {
		*matched_ref = matched;
		return match;
	}
}

static void link_dst_tail(struct ref *ref, struct ref ***tail)
{
	**tail = ref;
	*tail = &ref->next;
	**tail = NULL;
}

static struct ref *try_explicit_object_name(const char *name)
{
	unsigned char sha1[20];
	struct ref *ref;
	int len;

	if (!*name) {
		ref = xcalloc(1, sizeof(*ref) + 20);
		strcpy(ref->name, "(delete)");
		hashclr(ref->new_sha1);
		return ref;
	}
	if (get_sha1(name, sha1))
		return NULL;
	len = strlen(name) + 1;
	ref = xcalloc(1, sizeof(*ref) + len);
	memcpy(ref->name, name, len);
	hashcpy(ref->new_sha1, sha1);
	return ref;
}

static int match_explicit_refs(struct ref *src, struct ref *dst,
			       struct ref ***dst_tail, struct refspec *rs)
{
	int i, errs;
	for (i = errs = 0; rs[i].src; i++) {
		struct ref *matched_src, *matched_dst;

		matched_src = matched_dst = NULL;
		switch (count_refspec_match(rs[i].src, src, &matched_src)) {
		case 1:
			break;
		case 0:
			/* The source could be in the get_sha1() format
			 * not a reference name.  :refs/other is a
			 * way to delete 'other' ref at the remote end.
			 */
			matched_src = try_explicit_object_name(rs[i].src);
			if (matched_src)
				break;
			errs = 1;
			error("src refspec %s does not match any.",
			      rs[i].src);
			break;
		default:
			errs = 1;
			error("src refspec %s matches more than one.",
			      rs[i].src);
			break;
		}
		switch (count_refspec_match(rs[i].dst, dst, &matched_dst)) {
		case 1:
			break;
		case 0:
			if (!memcmp(rs[i].dst, "refs/", 5)) {
				int len = strlen(rs[i].dst) + 1;
				matched_dst = xcalloc(1, sizeof(*dst) + len);
				memcpy(matched_dst->name, rs[i].dst, len);
				link_dst_tail(matched_dst, dst_tail);
			}
			else if (!strcmp(rs[i].src, rs[i].dst) &&
				 matched_src) {
				/* pushing "master:master" when
				 * remote does not have master yet.
				 */
				int len = strlen(matched_src->name) + 1;
				matched_dst = xcalloc(1, sizeof(*dst) + len);
				memcpy(matched_dst->name, matched_src->name,
				       len);
				link_dst_tail(matched_dst, dst_tail);
			}
			else {
				errs = 1;
				error("dst refspec %s does not match any "
				      "existing ref on the remote and does "
				      "not start with refs/.", rs[i].dst);
			}
			break;
		default:
			errs = 1;
			error("dst refspec %s matches more than one.",
			      rs[i].dst);
			break;
		}
		if (errs)
			continue;
		if (matched_dst->peer_ref) {
			errs = 1;
			error("dst ref %s receives from more than one src.",
			      matched_dst->name);
		}
		else {
			matched_dst->peer_ref = matched_src;
			matched_dst->force = rs[i].force;
		}
	}
	return -errs;
}

static struct ref *find_ref_by_name(struct ref *list, const char *name)
{
	for ( ; list; list = list->next)
		if (!strcmp(list->name, name))
			return list;
	return NULL;
}

int match_refs(struct ref *src, struct ref *dst, struct ref ***dst_tail,
	       int nr_refspec, char **refspec, int all)
{
	struct refspec *rs = parse_ref_spec(nr_refspec, refspec);

	if (nr_refspec)
		return match_explicit_refs(src, dst, dst_tail, rs);

	/* pick the remainder */
	for ( ; src; src = src->next) {
		struct ref *dst_peer;
		if (src->peer_ref)
			continue;
		dst_peer = find_ref_by_name(dst, src->name);
		if ((dst_peer && dst_peer->peer_ref) || (!dst_peer && !all))
			continue;
		if (!dst_peer) {
			/* Create a new one and link it */
			int len = strlen(src->name) + 1;
			dst_peer = xcalloc(1, sizeof(*dst_peer) + len);
			memcpy(dst_peer->name, src->name, len);
			hashcpy(dst_peer->new_sha1, src->new_sha1);
			link_dst_tail(dst_peer, dst_tail);
		}
		dst_peer->peer_ref = src;
	}
	return 0;
}

enum protocol {
	PROTO_LOCAL = 1,
	PROTO_SSH,