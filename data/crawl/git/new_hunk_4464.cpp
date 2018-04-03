	EOF
'

test_expect_success C_LOCALE_OUTPUT 'status with added file in modified submodule' '
	(cd sub && git reset --hard && echo >foo && git add foo) &&
	git status >output &&
	grep "modified:   sub (new commits, modified content)" output
