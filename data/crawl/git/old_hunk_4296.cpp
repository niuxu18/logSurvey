# Untracked files not listed
EOF
git config advice.statusHints false
test_expect_success C_LOCALE_OUTPUT 'status -uno (advice.statusHints false)' '
	git status -uno >output &&
	test_cmp expect output
'
git config --unset advice.statusHints

