	EOF
'

test_expect_success 'status with added file in submodule' '
	(cd sub && git reset --hard && echo >foo && git add foo) &&
	git status >output &&
	test_i18ngrep "modified:   sub (modified content)" output
'

test_expect_success 'status with added file in submodule (porcelain)' '
