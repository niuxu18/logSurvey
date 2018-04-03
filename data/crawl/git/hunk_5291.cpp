 	test_cmp expect output
 '
 
+cat >expect <<EOF
+:100644 100644 e69de29bb2d1d6434b8b29ae775ad8c2e48c5391 0000000000000000000000000000000000000000 M	dir1/modified
+EOF
+test_expect_failure 'status refreshes the index' '
+	touch dir2/added &&
+	git status &&
+	git diff-files >output &&
+	test_cmp expect output
+'
+
 test_expect_success 'setup status submodule summary' '
 	test_create_repo sm && (
 		cd sm &&