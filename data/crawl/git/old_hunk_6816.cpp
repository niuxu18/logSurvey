						 branch1,
						 branch2);
				if (mfi.merge || !mfi.clean)
					output(1, "Renaming %s->%s", src, ren1_dst);

				if (mfi.merge)
					output(2, "Auto-merging %s", ren1_dst);

				if (!mfi.clean) {
					output(1, "CONFLICT (content): merge conflict in %s",
					       ren1_dst);
					clean_merge = 0;

