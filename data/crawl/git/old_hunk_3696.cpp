	compare_refs local2 HEAD server HEAD
'

test_expect_failure 'pushing without refspecs' '
	test_when_finished "(cd local2 && git reset --hard origin)" &&
	(cd local2 &&
	echo content >>file &&
	git commit -a -m ten &&
	GIT_REMOTE_TESTGIT_REFSPEC="" git push) &&
	compare_refs local2 HEAD server HEAD
'

test_expect_success 'pulling without marks' '
