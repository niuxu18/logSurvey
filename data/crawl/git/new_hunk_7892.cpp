
int get_fetch_map(struct ref *remote_refs,
		  const struct refspec *refspec,
		  struct ref ***tail,
		  int missing_ok)
{
	struct ref *ref_map, *rm;

	if (refspec->pattern) {
		ref_map = get_expanded_map(remote_refs, refspec);
	} else {
		const char *name = refspec->src[0] ? refspec->src : "HEAD";

		ref_map = get_remote_ref(remote_refs, name);
		if (!missing_ok && !ref_map)
			die("Couldn't find remote ref %s", name);
		if (ref_map) {
			ref_map->peer_ref = get_local_ref(refspec->dst);
			if (ref_map->peer_ref && refspec->force)
				ref_map->peer_ref->force = 1;
		}
	}

	for (rm = ref_map; rm; rm = rm->next) {
