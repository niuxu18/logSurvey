		git difftool --dir-diff $symlinks --extcmd ls v1 -- .>output &&
		# "sub" exists in v1 and HEAD
		# "file" is filtered out by the pathspec
		test "2" = $(grep sub output | wc -l) &&
		test "0" = $(grep file output | wc -l)
	)
'
