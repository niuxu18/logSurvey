		if (parse_commit(parent))
			return error(_("Could not parse parent commit %s\n"),
				sha1_to_hex(parent->object.sha1));
		ptree_sha1 = parent->tree->object.sha1;
	} else {
		ptree_sha1 = EMPTY_TREE_SHA1_BIN; /* commit is root */
	}

	return !hashcmp(ptree_sha1, commit->tree->object.sha1);
}

/*
