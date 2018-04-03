 		test_cmp "$expect" actual
 	'
 
-	test_expect_success "$cmd $verb statGraphWidth config" '
-		git -c diff.statGraphWidth=26 $cmd $args >output
-		grep " | " output >actual &&
-		test_cmp "$expect" actual
-	'
-
 	test "$cmd" != diff || continue
 
 	test_expect_success "$cmd --graph $verb not enough COLUMNS (big change)" '
 		COLUMNS=40 git $cmd $args --graph >output
 		grep " | " output >actual &&
 		test_cmp "$expect-graph" actual
 	'
+done <<\EOF
+ignores expect80 format-patch -1 --stdout
+respects expect40 diff HEAD^ HEAD --stat
+respects expect40 show --stat
+respects expect40 log -1 --stat
+EOF
+
+cat >expect40 <<'EOF'
+ abcd | 1000 ++++++++++++++++++++++++++
+EOF
+cat >expect40-graph <<'EOF'
+|  abcd | 1000 ++++++++++++++++++++++++++
+EOF
+while read verb expect cmd args
+do
+	test_expect_success "$cmd $verb statGraphWidth config" '
+		git -c diff.statGraphWidth=26 $cmd $args >output
+		grep " | " output >actual &&
+		test_cmp "$expect" actual
+	'
+
+	test "$cmd" != diff || continue
 
 	test_expect_success "$cmd --graph $verb statGraphWidth config" '
 		git -c diff.statGraphWidth=26 $cmd $args --graph >output