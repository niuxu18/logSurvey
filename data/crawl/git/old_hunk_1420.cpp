				       ren1_dst, branch2);
				if (o->call_depth) {
					struct merge_file_info mfi;
					mfi = merge_file_one(o, ren1_dst, null_sha1, 0,
							 ren1->pair->two->sha1, ren1->pair->two->mode,
							 dst_other.sha1, dst_other.mode,
							 branch1, branch2);
					output(o, 1, _("Adding merged %s"), ren1_dst);
					update_file(o, 0, mfi.sha, mfi.mode, ren1_dst);
					try_merge = 0;
				} else {
					char *new_path = unique_path(o, ren1_dst, branch2);
					output(o, 1, _("Adding as %s instead"), new_path);
					update_file(o, 0, dst_other.sha1, dst_other.mode, new_path);
					free(new_path);
				}
			} else
				try_merge = 1;

			if (try_merge) {
				struct diff_filespec *one, *a, *b;
				src_other.path = (char *)ren1_src;