				fprintf(stderr, "...\n");
				break;
			}
			fprintf(stderr, "%s: unmerged (%s)\n",
				ce->name, sha1_to_hex(ce->sha1));
		}
	}
	if (funny)