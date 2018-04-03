#	untracked
EOF

test_expect_success "--ignore-submodules=untracked doesn't suppress submodule summary" '
	git status --ignore-submodules=untracked > output &&
	test_i18ncmp expect output
'

test_expect_success ".gitmodules ignore=untracked doesn't suppress submodule summary" '
	git config --add -f .gitmodules submodule.subname.ignore untracked &&
	git config --add -f .gitmodules submodule.subname.path sm &&
	git status >output &&
	test_i18ncmp expect output &&
	git config -f .gitmodules  --remove-section submodule.subname
'

test_expect_success ".git/config ignore=untracked doesn't suppress submodule summary" '
	git config --add -f .gitmodules submodule.subname.ignore none &&
	git config --add -f .gitmodules submodule.subname.path sm &&
	git config --add submodule.subname.ignore untracked &&
	git config --add submodule.subname.path sm &&
	git status >output &&
	test_i18ncmp expect output &&
	git config --remove-section submodule.subname &&
	git config -f .gitmodules  --remove-section submodule.subname
'

test_expect_success "--ignore-submodules=dirty doesn't suppress submodule summary" '
	git status --ignore-submodules=dirty > output &&
	test_i18ncmp expect output
'
test_expect_success ".gitmodules ignore=dirty doesn't suppress submodule summary" '
	git config --add -f .gitmodules submodule.subname.ignore dirty &&
	git config --add -f .gitmodules submodule.subname.path sm &&
	git status >output &&
	test_i18ncmp expect output &&
	git config -f .gitmodules  --remove-section submodule.subname
'

test_expect_success ".git/config ignore=dirty doesn't suppress submodule summary" '
	git config --add -f .gitmodules submodule.subname.ignore none &&
	git config --add -f .gitmodules submodule.subname.path sm &&
	git config --add submodule.subname.ignore dirty &&
	git config --add submodule.subname.path sm &&
	git status >output &&
	test_i18ncmp expect output &&
	git config --remove-section submodule.subname &&
	git config -f .gitmodules  --remove-section submodule.subname
'