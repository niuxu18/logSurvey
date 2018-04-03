# Copyright (c) Petr Baudis, 2006
# Minimal changes to "port" it to core-git (c) Johannes Schindelin, 2007
#
# Lets you rewrite GIT revision history by creating a new branch from
# your current branch by applying custom filters on each revision.
# Those filters can modify each tree (e.g. removing a file or running
# a perl rewrite on all files) or information about each commit.
# Otherwise, all information (including original commit times or merge
# information) will be preserved.
#
# The command takes the new branch name as a mandatory argument and
# the filters as optional arguments. If you specify no filters, the
# commits will be recommitted without any changes, which would normally
# have no effect and result with the new branch pointing to the same
# branch as your current branch. (Nevertheless, this may be useful in
# the future for compensating for some Git bugs or such, therefore
# such a usage is permitted.)
#
# WARNING! The rewritten history will have different ids for all the
# objects and will not converge with the original branch. You will not
# be able to easily push and distribute the rewritten branch. Please do
# not use this command if you do not know the full implications, and
# avoid using it anyway - do not do what a simple single commit on top
# of the current version would fix.
#
# Always verify that the rewritten version is correct before disposing
# the original branch.
#
# Note that since this operation is extensively I/O expensive, it might
# be a good idea to do it off-disk, e.g. on tmpfs. Reportedly the speedup
# is very noticeable.
#
# OPTIONS
# -------
# -d TEMPDIR:: The path to the temporary tree used for rewriting
#	When applying a tree filter, the command needs to temporary
#	checkout the tree to some directory, which may consume
#	considerable space in case of large projects. By default it
#	does this in the '.git-rewrite/' directory but you can override
#	that choice by this parameter.
#
# Filters
# ~~~~~~~
# The filters are applied in the order as listed below. The COMMAND
# argument is always evaluated in shell using the 'eval' command.
# The $GIT_COMMIT environment variable is permanently set to contain
# the id of the commit being rewritten. The author/committer environment
# variables are set before the first filter is run.
#
# A 'map' function is available that takes an "original sha1 id" argument
# and outputs a "rewritten sha1 id" if the commit has been already
# rewritten, fails otherwise; the 'map' function can return several
# ids on separate lines if your commit filter emitted multiple commits
# (see below).
#
# --env-filter COMMAND:: The filter for modifying environment
#	This is the filter for modifying the environment in which
#	the commit will be performed. Specifically, you might want
#	to rewrite the author/committer name/email/time environment
#	variables (see `git-commit` for details). Do not forget to
#	re-export the variables.
#
# --tree-filter COMMAND:: The filter for rewriting tree (and its contents)
#	This is the filter for rewriting the tree and its contents.
#	The COMMAND argument is evaluated in shell with the working
#	directory set to the root of the checked out tree. The new tree
#	is then used as-is (new files are auto-added, disappeared files
#	are auto-removed - .gitignore files nor any other ignore rules
#	HAVE NO EFFECT!).
#
# --index-filter COMMAND:: The filter for rewriting index
#	This is the filter for rewriting the Git's directory index.
#	It is similar to the tree filter but does not check out the
#	tree, which makes it much faster. However, you must use the
#	lowlevel Git index manipulation commands to do your work.
#
# --parent-filter COMMAND:: The filter for rewriting parents
#	This is the filter for rewriting the commit's parent list.
#	It will receive the parent string on stdin and shall output
#	the new parent string on stdout. The parent string is in
#	format accepted by `git commit-tree`: empty for initial
#	commit, "-p parent" for a normal commit and "-p parent1
#	-p parent2 -p parent3 ..." for a merge commit.
#
# --msg-filter COMMAND:: The filter for rewriting commit message
#	This is the filter for rewriting the commit messages.
#	The COMMAND argument is evaluated in shell with the original
#	commit message on standard input; its standard output is
#	is used as the new commit message.
#
# --commit-filter COMMAND:: The filter for performing the commit
#	If this filter is passed, it will be called instead of the
#	`git commit-tree` command, with those arguments:
#
#		TREE_ID [-p PARENT_COMMIT_ID]...
#
#	and the log message on stdin. The commit id is expected on
#	stdout. As a special extension, the commit filter may emit
#	multiple commit ids; in that case, all of them will be used
#	as parents instead of the original commit in further commits.
#
# --tag-name-filter COMMAND:: The filter for rewriting tag names.
#	If this filter is passed, it will be called for every tag ref
#	that points to a rewritten object (or to a tag object which
#	points to a rewritten object). The original tag name is passed
#	via standard input, and the new tag name is expected on standard
#	output.
#
#	The original tags are not deleted, but can be overwritten;
#	use "--tag-name-filter=cat" to simply update the tags. In this
#	case, be very careful and make sure you have the old tags
#	backed up in case the conversion has run afoul.
#
#	Note that there is currently no support for proper rewriting of
#	tag objects; in layman terms, if the tag has a message or signature
#	attached, the rewritten tag won't have it. Sorry. (It is by
#	definition impossible to preserve signatures at any rate, though.)
#
# --subdirectory-filter DIRECTORY:: Only regard the history, as seen by
#	the given subdirectory. The result will contain that directory as
#	its project root.
#
# EXAMPLE USAGE
# -------------
# Suppose you want to remove a file (containing confidential information
# or copyright violation) from all commits:
#
#	git-filter-branch --tree-filter 'rm filename' newbranch
#
# A significantly faster version:
#
#	git-filter-branch --index-filter 'git update-index --remove filename' newbranch
#
# Now, you will get the rewritten history saved in the branch 'newbranch'
# (your current branch is left untouched).
#
# To "etch-graft" a commit to the revision history (set a commit to be
# the parent of the current initial commit and propagate that):
#
#	git-filter-branch --parent-filter sed\ 's/^$/-p graftcommitid/' newbranch
#
# (if the parent string is empty - therefore we are dealing with the
# initial commit - add graftcommit as a parent). Note that this assumes
# history with a single root (that is, no git-merge without common ancestors
# happened). If this is not the case, use:
#
#	git-filter-branch --parent-filter 'cat; [ "$GIT_COMMIT" = "COMMIT" ] && echo "-p GRAFTCOMMIT"' newbranch
#
# To remove commits authored by "Darl McBribe" from the history:
#
#	git-filter-branch --commit-filter 'if [ "$GIT_AUTHOR_NAME" = "Darl McBribe" ]; then shift; while [ -n "$1" ]; do shift; echo "$1"; shift; done; else git commit-tree "$@"; fi' newbranch
#
# (the shift magic first throws away the tree id and then the -p
# parameters). Note that this handles merges properly! In case Darl
# committed a merge between P1 and P2, it will be propagated properly
# and all children of the merge will become merge commits with P1,P2
# as their parents instead of the merge commit.
#
# To restrict rewriting to only part of the history, specify a revision
# range in addition to the new branch name. The new branch name will
# point to the top-most revision that a 'git rev-list' of this range
# will print.
#
# Consider this history:
#
#	     D--E--F--G--H
#	    /     /
#	A--B-----C
#
# To rewrite commits D,E,F,G,H, use:
#
#	git-filter-branch ... new-H C..H
#
# To rewrite commits E,F,G,H, use one of these:
#
#	git-filter-branch ... new-H C..H --not D
#	git-filter-branch ... new-H D..H --not C
#
# To move the whole tree into a subdirectory, or remove it from there:
#
# git-filter-branch --index-filter \
#	'git ls-files -s | sed "s-\t-&newsubdir/-" |
#		GIT_INDEX_FILE=$GIT_INDEX_FILE.new \
#			git update-index --index-info &&
#	 mv $GIT_INDEX_FILE.new $GIT_INDEX_FILE' directorymoved

# Testsuite: TODO

set -e
