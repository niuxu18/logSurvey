
		} else {
			const char *dst_side = pat->dst ? pat->dst : pat->src;
			dst_name = xmalloc(strlen(dst_side) +
					   strlen(src->name) -
					   strlen(pat->src) + 2);
			strcpy(dst_name, dst_side);
			strcat(dst_name, src->name + strlen(pat->src));
		}
		dst_peer = find_ref_by_name(dst, dst_name);
		if (dst_peer) {
