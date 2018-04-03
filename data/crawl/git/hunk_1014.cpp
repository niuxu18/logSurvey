 	test_cmp expect output
 '
 
-cat >expect <<\EOF
-boolean: 0
-integer: 0
-magnitude: 0
-timestamp: 0
-string: (not set)
-abbrev: 7
-verbose: -1
-quiet: 3
-dry run: no
-file: (not set)
-EOF
-
 test_expect_success 'multiple quiet levels' '
-	test-parse-options -q -q -q >output 2>output.err &&
-	test_must_be_empty output.err &&
-	test_cmp expect output
+	test-parse-options --expect="quiet: 3" -q -q -q
 '
 
-cat >expect <<\EOF
-boolean: 0
-integer: 0
-magnitude: 0
-timestamp: 0
-string: (not set)
-abbrev: 7
-verbose: 3
-quiet: 0
-dry run: no
-file: (not set)
-EOF
-
 test_expect_success 'multiple verbose levels' '
-	test-parse-options -v -v -v >output 2>output.err &&
-	test_must_be_empty output.err &&
-	test_cmp expect output
+	test-parse-options --expect="verbose: 3" -v -v -v
 '
 
-cat >expect <<\EOF
-boolean: 0
-integer: 0
-magnitude: 0
-timestamp: 0
-string: (not set)
-abbrev: 7
-verbose: -1
-quiet: 0
-dry run: no
-file: (not set)
-EOF
-
 test_expect_success '--no-quiet sets --quiet to 0' '
-	test-parse-options --no-quiet >output 2>output.err &&
-	test_must_be_empty output.err &&
-	test_cmp expect output
+	test-parse-options --expect="quiet: 0" --no-quiet
 '
 
-cat >expect <<\EOF
-boolean: 0
-integer: 0
-magnitude: 0
-timestamp: 0
-string: (not set)
-abbrev: 7
-verbose: -1
-quiet: 0
-dry run: no
-file: (not set)
-EOF
-
 test_expect_success '--no-quiet resets multiple -q to 0' '
-	test-parse-options -q -q -q --no-quiet >output 2>output.err &&
-	test_must_be_empty output.err &&
-	test_cmp expect output
+	test-parse-options --expect="quiet: 0" -q -q -q --no-quiet
 '
 
-cat >expect <<\EOF
-boolean: 0
-integer: 0
-magnitude: 0
-timestamp: 0
-string: (not set)
-abbrev: 7
-verbose: 0
-quiet: 0
-dry run: no
-file: (not set)
-EOF
-
 test_expect_success '--no-verbose sets verbose to 0' '
-	test-parse-options --no-verbose >output 2>output.err &&
-	test_must_be_empty output.err &&
-	test_cmp expect output
+	test-parse-options --expect="verbose: 0" --no-verbose
 '
 
-cat >expect <<\EOF
-boolean: 0
-integer: 0
-magnitude: 0
-timestamp: 0
-string: (not set)
-abbrev: 7
-verbose: 0
-quiet: 0
-dry run: no
-file: (not set)
-EOF
-
 test_expect_success '--no-verbose resets multiple verbose to 0' '
-	test-parse-options -v -v -v --no-verbose >output 2>output.err &&
-	test_must_be_empty output.err &&
-	test_cmp expect output
+	test-parse-options --expect="verbose: 0" -v -v -v --no-verbose
 '
 
 test_done