			if (j == argc)
				continue;
		}
		printf("%s %s\n", sha1_to_hex(r->list[i].sha1),
				r->list[i].name);
	}
	return 0;
