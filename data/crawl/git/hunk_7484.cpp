 #	untracked
 EOF
 
-test_expect_success 'status' '
+test_expect_success 'status (2)' '
 
 	git status > output &&
 	git diff expect output
