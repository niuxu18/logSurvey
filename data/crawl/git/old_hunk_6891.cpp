			if (open_pack_index(p))
				continue;
			packed += p->num_objects;
			num_pack++;
		}
		printf("count: %lu\n", loose);
		printf("size: %lu\n", loose_size / 2);
		printf("in-pack: %lu\n", packed);
		printf("packs: %lu\n", num_pack);
		printf("prune-packable: %lu\n", packed_loose);
		printf("garbage: %lu\n", garbage);
	}
