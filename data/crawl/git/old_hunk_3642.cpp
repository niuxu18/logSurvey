	cd gitrepo &&
	echo diverge > content &&
	git commit -a -m diverged &&
	test_expect_code 1 git push 2> error &&
	grep "^ ! \[rejected\] *master -> master (non-fast-forward)$" error
	) &&

	check_branch hgrepo default bump
