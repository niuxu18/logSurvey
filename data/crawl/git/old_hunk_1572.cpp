			if (git_hdr_len <= len)
				continue;
			if (!patch->old_name && !patch->new_name) {
				if (!patch->def_name)
					die(Q_("git diff header lacks filename information when removing "
					       "%d leading pathname component (line %d)",
					       "git diff header lacks filename information when removing "
					       "%d leading pathname components (line %d)",
					       state->p_value),
					    state->p_value, state->linenr);
				patch->old_name = xstrdup(patch->def_name);
				patch->new_name = xstrdup(patch->def_name);
			}
			if (!patch->is_delete && !patch->new_name)
				die("git diff header lacks filename information "
				    "(line %d)", state->linenr);
			patch->is_toplevel_relative = 1;
			*hdrsize = git_hdr_len;
			return offset;