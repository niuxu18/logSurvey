	if (!sub->branch)
		return "master";

	if (!strcmp(sub->branch, ".")) {
		unsigned char sha1[20];
		const char *refname = resolve_ref_unsafe("HEAD", 0, sha1, NULL);

		if (!refname)
			die(_("No such ref: %s"), "HEAD");

		/* detached HEAD */
		if (!strcmp(refname, "HEAD"))
			die(_("Submodule (%s) branch configured to inherit "
			      "branch from superproject, but the superproject "
			      "is not on any branch"), sub->name);

		if (!skip_prefix(refname, "refs/heads/", &refname))
			die(_("Expecting a full ref name, got %s"), refname);
		return refname;
	}

	return sub->branch;
}

