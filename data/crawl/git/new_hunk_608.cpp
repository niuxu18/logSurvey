			if (j == argc)
				continue;
		}
		printf("%s %s\n", oid_to_hex(&r->list[i].oid),
				r->list[i].name);
	}
	return 0;
