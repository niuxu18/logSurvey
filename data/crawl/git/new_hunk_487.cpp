test_expect_success 'status -s -b' '

	git status -s -b >output &&
	test_i18ncmp expect output

'
