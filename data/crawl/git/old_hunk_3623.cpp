'
. ./test-lib.sh

date >path0
if test_have_prereq SYMLINKS
then
	ln -s xyzzy path1
else
	date > path1
fi
mkdir path2 path3
date >path2/file2
date >path3/file3
: >path7
date >path8
: >path9
date >path10
test_expect_success \
    'git update-index --add to add various paths.' \
    "git update-index --add -- path0 path1 path?/file? path7 path8 path9 path10"

rm -fr path? ;# leave path10 alone
date >path2
if test_have_prereq SYMLINKS
then
	ln -s frotz path3
	ln -s nitfol path5
else
	date > path3
	date > path5
fi
mkdir path0 path1 path6
date >path0/file0
date >path1/file1
date >path6/file6
date >path7
: >path8
: >path9
touch path10

test_expect_success \
    'git ls-files -k to show killed files.' \
    'git ls-files -k >.output'
cat >.expected <<EOF
path0/file0
path1/file1
path2
path3
EOF

test_expect_success \
    'validate git ls-files -k output.' \
    'test_cmp .expected .output'

test_expect_success \
    'git ls-files -m to show modified files.' \
    'git ls-files -m >.output'
cat >.expected <<EOF
path0
path1
path2/file2
path3/file3
path7
path8
EOF

test_expect_success \
    'validate git ls-files -m output.' \
    'test_cmp .expected .output'

test_done