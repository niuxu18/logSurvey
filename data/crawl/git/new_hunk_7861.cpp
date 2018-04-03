	return wantarray ? %res : \%res;
}

# wrapper: return parsed line of git-diff-tree "raw" output
# (the argument might be raw line, or parsed info)
sub parsed_difftree_line {
	my $line_or_ref = shift;

	if (ref($line_or_ref) eq "HASH") {
		# pre-parsed (or generated by hand)
		return $line_or_ref;
	} else {
		return parse_difftree_raw_line($line_or_ref);
	}
}

# parse line of git-ls-tree output
sub parse_ls_tree_line ($;%) {
	my $line = shift;
