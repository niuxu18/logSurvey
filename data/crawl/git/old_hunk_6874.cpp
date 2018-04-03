
			if (string_list_has_string(&current_directory_set, ren1_dst)) {
				clean_merge = 0;
				output(1, "CONFLICT (rename/directory): Renamed %s->%s in %s "
				       " directory %s added in %s",
				       ren1_src, ren1_dst, branch1,
				       ren1_dst, branch2);
				conflict_rename_dir(ren1, branch1);
			} else if (sha_eq(src_other.sha1, null_sha1)) {
				clean_merge = 0;
				output(1, "CONFLICT (rename/delete): Renamed %s->%s in %s "
				       "and deleted in %s",
				       ren1_src, ren1_dst, branch1,
				       branch2);