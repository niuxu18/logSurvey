   twice, and held onto memory after it has used the data in it
   unnecessarily before it freed.

 * "git diff -B" and "git diff --dirstat" was not counting newly added
   contents correctly.

 * "git format-patch revisions... -- path" issued an incorrect error
   message that suggested to use "--" on the command line when path
   does not exist in the current work tree (it is a separate matter if
