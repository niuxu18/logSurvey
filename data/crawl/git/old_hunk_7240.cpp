			return config_error_nonbool(var);
		return add_man_viewer_path(name, subkey - name, value);
	}

	warning("'%s': unsupported man viewer sub key.", subkey);
	return 0;
