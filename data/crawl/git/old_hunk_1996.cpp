		 */
		if ((apply || check) &&
		    (!patch->is_binary && !metadata_changes(patch)))
			die(_("patch with only garbage at line %d"), linenr);
	}

	return offset + hdrsize + patchsize;