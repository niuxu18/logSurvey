			     o->merge_size);
	if (a && old)
		return o->gently ? -1 :
			error("Entry '%s' overlaps.  Cannot bind.", a->name);
	if (!a)
		return keep_entry(old, o);
	else
