		 * "refs/foo"; if there is a reference with that name,
		 * it is a conflict, *unless* it is in skip.
		 */
		pos = search_ref_dir(dir, dirname.buf, dirname.len);
		if (pos >= 0) {
			/*
			 * We found a reference whose name is a proper
			 * prefix of refname; e.g., "refs/foo".
			 */
			if (skip && string_list_has_string(skip, dirname.buf)) {
				/*
				 * The reference we just found, e.g.,
				 * "refs/foo", is also in skip, so it
				 * is not considered a conflict.
				 * Moreover, the fact that "refs/foo"
				 * exists means that there cannot be
				 * any references anywhere under the
				 * "refs/foo/" namespace (because they
				 * would have conflicted with
				 * "refs/foo"). So we can stop looking
				 * now and return true.
				 */
				ret = 1;
				goto cleanup;
			}
			error("'%s' exists; cannot create '%s'", dirname.buf, refname);
			goto cleanup;
		}


		/*
		 * Otherwise, we can try to continue our search with
		 * the next component. So try to look up the
		 * directory, e.g., "refs/foo/".
		 */
		strbuf_addch(&dirname, '/');
		pos = search_ref_dir(dir, dirname.buf, dirname.len);
		if (pos < 0) {
			/*
			 * There was no directory "refs/foo/", so
			 * there is nothing under this whole prefix,
			 * and we are OK.
			 */
			ret = 1;
			goto cleanup;
		}

		dir = get_ref_dir(dir->entries[pos]);
	}

	/*