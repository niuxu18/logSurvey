	EOF
'

test_expect_success C_LOCALE_OUTPUT 'status with added and untracked file in modified submodule' '
	(cd sub && git reset --hard && echo >foo && git add foo) &&
	echo "content" >sub/new-file &&
	git status >output &&
	grep "modified:   sub (new commits, modified content, untracked content)" output
'

test_expect_success 'status with added and untracked file in modified submodule (porcelain)' '
