			free(refname);
		}
		else
			create_branch(opts->new_branch, new->name,
				      opts->new_branch_force ? 1 : 0,
				      opts->new_branch_force ? 1 : 0,
				      opts->new_branch_log,
				      opts->quiet,
				      opts->track);
		new->name = opts->new_branch;
		setup_branch_path(new);
	}

	old_desc = old->name;
	if (!old_desc && old->commit)
		old_desc = oid_to_hex(&old->commit->object.oid);

	reflog_msg = getenv("GIT_REFLOG_ACTION");
	if (!reflog_msg)
		strbuf_addf(&msg, "checkout: moving from %s to %s",
			old_desc ? old_desc : "(invalid)", new->name);
	else
		strbuf_insert(&msg, 0, reflog_msg, strlen(reflog_msg));

	if (!strcmp(new->name, "HEAD") && !new->path && !opts->force_detach) {
		/* Nothing to do. */
	} else if (opts->force_detach || !new->path) {	/* No longer on any branch. */
		update_ref(msg.buf, "HEAD", &new->commit->object.oid, NULL,
			   REF_NO_DEREF, UPDATE_REFS_DIE_ON_ERR);
		if (!opts->quiet) {
			if (old->path &&
			    advice_detached_head && !opts->force_detach)
				detach_advice(new->name);
			describe_detached_head(_("HEAD is now at"), new->commit);
		}
	} else if (new->path) {	/* Switch branches. */
		if (create_symref("HEAD", new->path, msg.buf) < 0)
			die(_("unable to update HEAD"));
		if (!opts->quiet) {
			if (old->path && !strcmp(new->path, old->path)) {
				if (opts->new_branch_force)
					fprintf(stderr, _("Reset branch '%s'\n"),
						new->name);
				else
					fprintf(stderr, _("Already on '%s'\n"),
						new->name);
			} else if (opts->new_branch) {
				if (opts->branch_exists)
					fprintf(stderr, _("Switched to and reset branch '%s'\n"), new->name);
				else
					fprintf(stderr, _("Switched to a new branch '%s'\n"), new->name);
			} else {
				fprintf(stderr, _("Switched to branch '%s'\n"),
					new->name);
			}
		}
		if (old->path && old->name) {
			if (!ref_exists(old->path) && reflog_exists(old->path))
				delete_reflog(old->path);
		}
	}
	remove_branch_state();
	strbuf_release(&msg);
	if (!opts->quiet &&
	    (new->path || (!opts->force_detach && !strcmp(new->name, "HEAD"))))
		report_tracking(new);
}

static int add_pending_uninteresting_ref(const char *refname,
