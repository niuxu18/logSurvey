				warning(_("both files modified: '%s' and '%s'."),
					wtdir.buf, rdir.buf);
				warning(_("working tree file has been left."));
				warning("%s", "");
				err = 1;
			} else if (unlink(wtdir.buf) ||
				   copy_file(wtdir.buf, rdir.buf, st.st_mode))