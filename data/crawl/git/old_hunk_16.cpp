	} else if (opts->track == BRANCH_TRACK_UNSPECIFIED)
		opts->track = git_branch_track;

	if (new->name && !new->commit)
		die(_("Cannot switch branch to a non-commit '%s'"),
		    new->name);

	if (new->path && !opts->force_detach && !opts->new_branch &&
	    !opts->ignore_other_worktrees) {
		int flag;
		char *head_ref = resolve_refdup("HEAD", 0, NULL, &flag);
		if (head_ref &&
		    (!(flag & REF_ISSYMREF) || strcmp(head_ref, new->path)))
			die_if_checked_out(new->path, 1);
		free(head_ref);
	}

	if (!new->commit && opts->new_branch) {
		struct object_id rev;
		int flag;

		if (!read_ref_full("HEAD", 0, &rev, &flag) &&
		    (flag & REF_ISSYMREF) && is_null_oid(&rev))
			return switch_unborn_to_new_branch(opts);
	}
	return switch_branches(opts, new);
}

int cmd_checkout(int argc, const char **argv, const char *prefix)
{
	struct checkout_opts opts;
	struct branch_info new;
	char *conflict_style = NULL;
	int dwim_new_local_branch = 1;
	struct option options[] = {
