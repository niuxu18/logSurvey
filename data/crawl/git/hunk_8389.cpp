 	Read from stdin, append "(<rev_name>)" to all sha1's of nameable
 	commits, and pass to stdout
 
+--name-only::
+	Instead of printing both the SHA-1 and the name, print only
+	the name.  If given with --tags the usual tag prefix of
+	"tags/" is also ommitted from the name, matching the output
+	of gitlink::git-describe[1] more closely.  This option
+	cannot be combined with --stdin.
+
 EXAMPLE
 -------
 
