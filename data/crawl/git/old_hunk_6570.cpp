			or die_error(500, "Open git-diff-tree failed");
	}

	# old/legacy style URI
	if (!%diffinfo && # if new style URI failed
	    defined $hash && defined $hash_parent) {
		# fake git-diff-tree raw output
		$diffinfo{'from_mode'} = $diffinfo{'to_mode'} = "blob";
		$diffinfo{'from_id'} = $hash_parent;
		$diffinfo{'to_id'}   = $hash;
		if (defined $file_name) {
			if (defined $file_parent) {
				$diffinfo{'status'} = '2';
				$diffinfo{'from_file'} = $file_parent;
				$diffinfo{'to_file'}   = $file_name;
			} else { # assume not renamed
				$diffinfo{'status'} = '1';
				$diffinfo{'from_file'} = $file_name;
				$diffinfo{'to_file'}   = $file_name;
			}
		} else { # no filename given
			$diffinfo{'status'} = '2';
			$diffinfo{'from_file'} = $hash_parent;
			$diffinfo{'to_file'}   = $hash;
		}

		# non-textual hash id's can be cached
		if ($hash =~ m/^[0-9a-fA-F]{40}$/ &&
		    $hash_parent =~ m/^[0-9a-fA-F]{40}$/) {
			$expires = '+1d';
		}

		# open patch output
		open $fd, "-|", git_cmd(), "diff", @diff_opts,
			'-p', ($format eq 'html' ? "--full-index" : ()),
			$hash_parent, $hash, "--"
			or die_error(500, "Open git-diff failed");
	} else  {
		die_error(400, "Missing one of the blob diff parameters")
			unless %diffinfo;
	}

	# header