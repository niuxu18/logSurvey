			munmap(idx_map, idx_size);
			return error("wrong index v2 file size in %s", path);
		}
		if (idx_size != min_size) {
			/* make sure we can deal with large pack offsets */
			off_t x = 0x7fffffffUL, y = 0xffffffffUL;
			if (x > (x + 1) || y > (y + 1)) {
				munmap(idx_map, idx_size);
				return error("pack too large for current definition of off_t in %s", path);
			}
		}
	}
