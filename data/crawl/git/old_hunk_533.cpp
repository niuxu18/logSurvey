		if (stat_only)
			continue;
		printf("%s %-6s %lu %lu %"PRIuMAX,
		       sha1_to_hex(obj->idx.sha1),
		       typename(obj->real_type), obj->size,
		       (unsigned long)(obj[1].idx.offset - obj->idx.offset),
		       (uintmax_t)obj->idx.offset);
		if (is_delta_type(obj->type)) {
			struct object_entry *bobj = &objects[obj_stat[i].base_object_no];
			printf(" %u %s", obj_stat[i].delta_depth, sha1_to_hex(bobj->idx.sha1));
		}
		putchar('\n');
	}
