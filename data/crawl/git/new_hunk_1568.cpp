		patch->is_delete = 0;

	if (0 < patch->is_new && oldlines)
		return error(_("new file %s depends on old contents"), patch->new_name);
	if (0 < patch->is_delete && newlines)
		return error(_("deleted file %s still has contents"), patch->old_name);
	if (!patch->is_delete && !newlines && context)
		fprintf_ln(stderr,
			   _("** warning: "
