		char *ref_git_git = mkpathdup("%s/.git", ref_git);
		free(ref_git);
		ref_git = ref_git_git;
	} else if (!is_directory(mkpath("%s/objects", ref_git)))
		die(_("reference repository '%s' is not a local repository."),
		    item->string);

	if (!access(mkpath("%s/shallow", ref_git), F_OK))
		die(_("reference repository '%s' is shallow"), item->string);