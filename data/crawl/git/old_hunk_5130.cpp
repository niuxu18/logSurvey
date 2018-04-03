'
. ./test-lib.sh

date >path0
if test_have_prereq SYMLINKS
then
	ln -s xyzzy path1
else
	date > path1
fi
mkdir path2 path3 path4
date >path2/file2
date >path2-junk
date >path3/file3
date >path3-junk
git update-index --add path3-junk path3/file3

cat >expected1 <<EOF
expected1
expected2
expected3
output
path0
path1
path2-junk
path2/file2
EOF
sed -e 's|path2/file2|path2/|' <expected1 >expected2
cat <expected2 >expected3
echo path4/ >>expected2

test_expect_success \
    'git ls-files --others to show output.' \
    'git ls-files --others >output'

test_expect_success \
    'git ls-files --others should pick up symlinks.' \
    'test_cmp expected1 output'

test_expect_success \
    'git ls-files --others --directory to show output.' \
    'git ls-files --others --directory >output'


test_expect_success \
    'git ls-files --others --directory should not get confused.' \
    'test_cmp expected2 output'

test_expect_success \
    'git ls-files --others --directory --no-empty-directory to show output.' \
    'git ls-files --others --directory --no-empty-directory >output'

test_expect_success \
    '--no-empty-directory hides empty directory' \
    'test_cmp expected3 output'

test_done