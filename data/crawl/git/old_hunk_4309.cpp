#	untracked
EOF

test_expect_success C_LOCALE_OUTPUT "--ignore-submodules=untracked doesn't suppress submodule summary" '
	git status --ignore-submodules=untracked > output &&
	test_cmp expect output
'

test_expect_success C_LOCALE_OUTPUT ".gitmodules ignore=untracked doesn't suppress submodule summary" '
	git config --add -f .gitmodules submodule.subname.ignore untracked &&
	git config --add -f .gitmodules submodule.subname.path sm &&
	git status > output &&
	test_cmp expect output &&
	git config -f .gitmodules  --remove-section submodule.subname
'

test_expect_success C_LOCALE_OUTPUT ".git/config ignore=untracked doesn't suppress submodule summary" '
	git config --add -f .gitmodules submodule.subname.ignore none &&
	git config --add -f .gitmodules submodule.subname.path sm &&
	git config --add submodule.subname.ignore untracked &&
	git config --add submodule.subname.path sm &&
	git status > output &&
	test_cmp expect output &&
	git config --remove-section submodule.subname &&
	git config -f .gitmodules  --remove-section submodule.subname
'

test_expect_success C_LOCALE_OUTPUT "--ignore-submodules=dirty doesn't suppress submodule summary" '
	git status --ignore-submodules=dirty > output &&
	test_cmp expect output
'
test_expect_success C_LOCALE_OUTPUT ".gitmodules ignore=dirty doesn't suppress submodule summary" '
	git config --add -f .gitmodules submodule.subname.ignore dirty &&
	git config --add -f .gitmodules submodule.subname.path sm &&
	git status > output &&
	test_cmp expect output &&
	git config -f .gitmodules  --remove-section submodule.subname
'

test_expect_success C_LOCALE_OUTPUT ".git/config ignore=dirty doesn't suppress submodule summary" '
	git config --add -f .gitmodules submodule.subname.ignore none &&
	git config --add -f .gitmodules submodule.subname.path sm &&
	git config --add submodule.subname.ignore dirty &&
	git config --add submodule.subname.path sm &&
	git status > output &&
	test_cmp expect output &&
	git config --remove-section submodule.subname &&
	git config -f .gitmodules  --remove-section submodule.subname
'
