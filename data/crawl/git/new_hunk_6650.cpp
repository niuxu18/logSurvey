				c = buf[used_0++];
				ofs = (ofs << 7) + (c & 127);
			}
			ofs = entry->in_pack_offset - ofs;
			if (ofs <= 0 || ofs >= entry->in_pack_offset)
				die("delta base offset out of bound for %s",
				    sha1_to_hex(entry->idx.sha1));
			if (reuse_delta && !entry->preferred_base) {
				struct revindex_entry *revidx;
				revidx = find_pack_revindex(p, ofs);