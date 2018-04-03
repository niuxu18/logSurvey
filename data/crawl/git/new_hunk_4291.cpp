	test ! -f .git/MERGE_HEAD &&
	# Merge successfully completed
	post_merge_head="$(git rev-parse HEAD)" &&
	test_must_fail git merge --abort 2>output &&
	test_i18ngrep MERGE_HEAD output
'

test_expect_success 'fails without MERGE_HEAD (completed merge): .git/MERGE_HEAD sanity' '
