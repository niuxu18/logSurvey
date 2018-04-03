		 * In such a case, path "new_name" does not exist as
		 * far as git is concerned.
		 */
		if (has_symlink_leading_path(strlen(new_name), new_name))
			return 0;

		return error("%s: already exists in working directory", new_name);
