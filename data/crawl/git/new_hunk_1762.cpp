			result.clean = (merge_status == 0);
		} else if (S_ISGITLINK(a->mode)) {
			result.clean = merge_submodule(result.sha,
						       one->path,
						       one->oid.hash,
						       a->oid.hash,
						       b->oid.hash,
						       !o->call_depth);
		} else if (S_ISLNK(a->mode)) {
			hashcpy(result.sha, a->oid.hash);

			if (!sha_eq(a->oid.hash, b->oid.hash))
				result.clean = 0;
		} else {
			die(_("unsupported object type in the tree"));
