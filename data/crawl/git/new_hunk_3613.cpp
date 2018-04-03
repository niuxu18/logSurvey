			continue;

		if (!submodule_uses_gitfile(name))
			string_list_append(&files, name);
	}
	print_error_files(&files,
			  Q_("the following submodule (or one of its nested "
			     "submodules)\n uses a .git directory:",
			     "the following submodules (or one of its nested "
			     "submodules)\n use a .git directory:",
			     files.nr),
			  _("\n(use 'rm -rf' if you really want to remove "
			    "it including all of its history)"),
			  &errs);
	string_list_clear(&files, 0);

	return errs;
}
