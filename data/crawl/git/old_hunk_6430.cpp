		const unsigned char *sha1;
		struct object *o;

		if (is_kept_pack(p, revs))
			continue;
		if (open_pack_index(p))
			die("cannot open pack index");
