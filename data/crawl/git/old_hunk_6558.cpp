	struct packed_git *p = packed_git;

	if (strlen(filename) < 40)
		die("Bad pack filename: %s\n", filename);

	while (p) {
		if (strstr(p->pack_name, filename))
			return add_pack(p);
		p = p->next;
	}
	die("Filename %s not found in packed_git\n", filename);
}

static void load_all(void)