	} else if (!strcmp(arg, "--author-date-order")) {
		revs->sort_order = REV_SORT_BY_AUTHOR_DATE;
		revs->topo_order = 1;
	} else if (!strcmp(arg, "--early-output")) {
		revs->early_output = 100;
		revs->topo_order = 1;
	} else if (skip_prefix(arg, "--early-output=", &optarg)) {
		if (strtoul_ui(optarg, 10, &revs->early_output) < 0)
			die("'%s': not a non-negative integer", optarg);
		revs->topo_order = 1;
	} else if (!strcmp(arg, "--parents")) {
		revs->rewrite_parents = 1;
		revs->print_parents = 1;