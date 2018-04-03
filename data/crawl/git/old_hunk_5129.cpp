			seen = find_used_pathspec(pathspec);
		for (i = 0; pathspec[i]; i++) {
			if (!seen[i] && pathspec[i][0]
			    && !file_exists(pathspec[i]))
				die("pathspec '%s' did not match any files",
				    pathspec[i]);
		}
		free(seen);
	}