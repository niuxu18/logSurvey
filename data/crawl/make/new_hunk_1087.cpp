		 but give a message to let the user know what's going on.  */
	      if (oldfile->cmds->fileinfo.filenm != 0)
                error (&file->cmds->fileinfo,
                                _("Commands were specified for \
file `%s' at %s:%lu,"),
                                oldname, oldfile->cmds->fileinfo.filenm,
                                oldfile->cmds->fileinfo.lineno);
	      else
		error (&file->cmds->fileinfo,
				_("Commands for file `%s' were found by \
implicit rule search,"),
				oldname);
	      error (&file->cmds->fileinfo,
			      _("but `%s' is now considered the same file \
as `%s'."),
			      oldname, name);
	      error (&file->cmds->fileinfo,
			      _("Commands for `%s' will be ignored \
in favor of those for `%s'."),
			      name, oldname);
	    }
	}
