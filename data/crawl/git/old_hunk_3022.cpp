		--expire=never \
		--expire-unreachable=never \
		--all &&
	test_line_count = 4 .git/logs/refs/heads/master
'

test_expect_success 'gc.reflogexpire=never' '

	git config gc.reflogexpire never &&
	git config gc.reflogexpireunreachable never &&
	git reflog expire --verbose --all &&
	test_line_count = 4 .git/logs/refs/heads/master
'

test_expect_success 'gc.reflogexpire=false' '

	git config gc.reflogexpire false &&
	git config gc.reflogexpireunreachable false &&
	git reflog expire --verbose --all &&
	test_line_count = 4 .git/logs/refs/heads/master &&

	git config --unset gc.reflogexpire &&
	git config --unset gc.reflogexpireunreachable
