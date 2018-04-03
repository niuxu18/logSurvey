 		grep "^ ! \[rejected\][ ]*$BRANCH -> $BRANCH (non-fast-forward)$" output
 	'
 
-	test_expect_success C_LOCALE_OUTPUT 'non-fast-forward push shows help message' '
-		grep "To prevent you from losing history, non-fast-forward updates were rejected" \
-			output
+	test_expect_success 'non-fast-forward push shows help message' '
+		test_i18ngrep "To prevent you from losing history, non-fast-forward updates were rejected" output
 	'
 }
