GIT v1.5.2.1 Release Notes
==========================

Fixes since v1.5.2
------------------

* Bugfixes

  - Temporary files that are used when invoking external diff
    programs did not tolerate a long TMPDIR.

  - git-daemon did not notice when it could not write into its
    pid file.

  - git-status did not honor core.excludesFile configuration like
    git-add did.

  - git-annotate did not work from a subdirectory while
    git-blame did.

  - git-cvsserver should have disabled access to a repository
    with "gitcvs.pserver.enabled = false" set even when
    "gitcvs.enabled = true" was set at the same time.  It
    didn't.

  - git-cvsimport did not work correctly in a repository with
    its branch heads were packed with pack-refs.

  - ident unexpansion to squash "$Id: xxx $" that is in the
    repository copy removed incorrect number of bytes.

  - git-svn misbehaved when the subversion repository did not
    provide MD5 checksums for files.

  - git rebase (and git am) misbehaved on commits that have '\n'
    (literally backslash and en, not a linefeed) in the title.

  - code to decode base85 used in binary patches had one error
    return codepath wrong.

  - RFC2047 Q encoding output by git-format-patch used '_' for a
    space, which is not understood by some programs.  It uses =20
    which is safer.

  - git-fastimport --import-marks was broken; fixed.

  - A lot of documentation updates, clarifications and fixes.

--
exec >/var/tmp/1
O=v1.5.2-65-g996e2d6
echo O=`git describe refs/heads/maint`
git shortlog --no-merges $O..refs/heads/maint
