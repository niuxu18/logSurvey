			if (rmdir(patch->old_name))
				warning("unable to remove submodule %s",
					patch->old_name);
		} else if (!unlink_or_warn(patch->old_name) && rmdir_empty) {
			remove_path(patch->old_name);
		}
	}
