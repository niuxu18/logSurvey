 	test_i18ngrep "ignoring dangling symref refs/tags/shadow" err
 '
 
+test_expect_success 'for-each-ref emits warnings for broken names' '
+	cp .git/refs/heads/master .git/refs/heads/broken...ref &&
+	test_when_finished "rm -f .git/refs/heads/broken...ref" &&
+	printf "ref: refs/heads/broken...ref\n" >.git/refs/heads/badname &&
+	test_when_finished "rm -f .git/refs/heads/badname" &&
+	printf "ref: refs/heads/master\n" >.git/refs/heads/broken...symref &&
+	test_when_finished "rm -f .git/refs/heads/broken...symref" &&
+	git for-each-ref >output 2>error &&
+	! grep -e "broken\.\.\.ref" output &&
+	! grep -e "badname" output &&
+	! grep -e "broken\.\.\.symref" output &&
+	test_i18ngrep "ignoring ref with broken name refs/heads/broken\.\.\.ref" error &&
+	test_i18ngrep "ignoring broken ref refs/heads/badname" error &&
+	test_i18ngrep "ignoring ref with broken name refs/heads/broken\.\.\.symref" error
+'
+
 test_expect_success 'update-ref --no-deref -d can delete reference to broken name' '
 	printf "ref: refs/heads/broken...ref\n" >.git/refs/heads/badname &&
 	test_when_finished "rm -f .git/refs/heads/badname" &&