	free_ref_list(&ref_list);

	if (cb.ret)
		error(_("some refs could not be read"));

	return cb.ret;
}
