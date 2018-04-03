 	test_cmp expect output
 '
 
+test_expect_success 'setup status submodule summary' '
+	test_create_repo sm && (
+		cd sm &&
+		>foo &&
+		git add foo &&
+		git commit -m "Add foo"
+	) &&
+	git add sm
+'
+
+cat >expect <<EOF
+# On branch master
+# Changes to be committed:
+#   (use "git reset HEAD <file>..." to unstage)
+#
+#	new file:   dir2/added
+#	new file:   sm
+#
+# Changed but not updated:
+#   (use "git add <file>..." to update what will be committed)
+#
+#	modified:   dir1/modified
+#
+# Untracked files:
+#   (use "git add <file>..." to include in what will be committed)
+#
+#	dir1/untracked
+#	dir2/modified
+#	dir2/untracked
+#	expect
+#	output
+#	untracked
+EOF
+test_expect_success 'status submodule summary is disabled by default' '
+	git status >output &&
+	test_cmp expect output
+'
+
+head=$(cd sm && git rev-parse --short=7 --verify HEAD)
+
+cat >expect <<EOF
+# On branch master
+# Changes to be committed:
+#   (use "git reset HEAD <file>..." to unstage)
+#
+#	new file:   dir2/added
+#	new file:   sm
+#
+# Changed but not updated:
+#   (use "git add <file>..." to update what will be committed)
+#
+#	modified:   dir1/modified
+#
+# Modified submodules:
+#
+# * sm 0000000...$head (1):
+#   > Add foo
+#
+# Untracked files:
+#   (use "git add <file>..." to include in what will be committed)
+#
+#	dir1/untracked
+#	dir2/modified
+#	dir2/untracked
+#	expect
+#	output
+#	untracked
+EOF
+test_expect_success 'status submodule summary' '
+	git config status.submodulesummary 10 &&
+	git status >output &&
+	test_cmp expect output
+'
+
+
+cat >expect <<EOF
+# On branch master
+# Changed but not updated:
+#   (use "git add <file>..." to update what will be committed)
+#
+#	modified:   dir1/modified
+#
+# Untracked files:
+#   (use "git add <file>..." to include in what will be committed)
+#
+#	dir1/untracked
+#	dir2/modified
+#	dir2/untracked
+#	expect
+#	output
+#	untracked
+no changes added to commit (use "git add" and/or "git commit -a")
+EOF
+test_expect_success 'status submodule summary (clean submodule)' '
+	git commit -m "commit submodule" &&
+	git config status.submodulesummary 10 &&
+	test_must_fail git status >output &&
+	test_cmp expect output
+'
+
+cat >expect <<EOF
+# On branch master
+# Changes to be committed:
+#   (use "git reset HEAD^1 <file>..." to unstage)
+#
+#	new file:   dir2/added
+#	new file:   sm
+#
+# Changed but not updated:
+#   (use "git add <file>..." to update what will be committed)
+#
+#	modified:   dir1/modified
+#
+# Modified submodules:
+#
+# * sm 0000000...$head (1):
+#   > Add foo
+#
+# Untracked files:
+#   (use "git add <file>..." to include in what will be committed)
+#
+#	dir1/untracked
+#	dir2/modified
+#	dir2/untracked
+#	expect
+#	output
+#	untracked
+EOF
+test_expect_success 'status submodule summary (--amend)' '
+	git config status.submodulesummary 10 &&
+	git status --amend >output &&
+	test_cmp expect output
+'
+
 test_done