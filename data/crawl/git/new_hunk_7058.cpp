			return typename(type);
		case OBJ_OFS_DELTA:
			obj_offset = get_delta_base(p, &w_curs, &curpos, type, obj_offset);
			if (!obj_offset)
				die("pack %s contains bad delta base reference of type %s",
				    p->pack_name, typename(type));
			if (*delta_chain_length == 0) {
				revidx = find_pack_revindex(p, obj_offset);
				hashcpy(base_sha1, nth_packed_object_sha1(p, revidx->nr));
