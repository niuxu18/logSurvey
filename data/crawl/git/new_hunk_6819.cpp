					 * t6022 test. If you change
					 * it update the test too.
					 */
					output(o, 3, "Skipped %s (merged same as existing)", ren1_dst);
				else {
					if (mfi.merge || !mfi.clean)
						output(o, 1, "Renaming %s => %s", ren1_src, ren1_dst);
					if (mfi.merge)
						output(o, 2, "Auto-merging %s", ren1_dst);
					if (!mfi.clean) {
						output(o, 1, "CONFLICT (rename/modify): Merge conflict in %s",
						       ren1_dst);
						clean_merge = 0;

						if (!index_only)
							update_stages(ren1_dst,
								      one, a, b, 1);
					}
					update_file(mfi.clean, mfi.sha, mfi.mode, ren1_dst);
				}
