 	Specify the programs that may be used to display help in the
 	'man' format. See linkgit:git-help[1].
 
-merge.summary::
-	Whether to include summaries of merged commits in newly created
-	merge commit messages. False by default.
-
-merge.tool::
-	Controls which merge resolution program is used by
-	linkgit:git-mergetool[1].  Valid built-in values are: "kdiff3",
-	"tkdiff", "meld", "xxdiff", "emerge", "vimdiff", "gvimdiff", and
-	"opendiff".  Any other value is treated is custom merge tool
-	and there must be a corresponing mergetool.<tool>.cmd option.
-
-merge.verbosity::
-	Controls the amount of output shown by the recursive merge
-	strategy.  Level 0 outputs nothing except a final error
-	message if conflicts were detected. Level 1 outputs only
-	conflicts, 2 outputs conflicts and file changes.  Level 5 and
-	above outputs debugging information.  The default is level 2.
-	Can be overridden by 'GIT_MERGE_VERBOSITY' environment variable.
-
-merge.<driver>.name::
-	Defines a human readable name for a custom low-level
-	merge driver.  See linkgit:gitattributes[5] for details.
-
-merge.<driver>.driver::
-	Defines the command that implements a custom low-level
-	merge driver.  See linkgit:gitattributes[5] for details.
-
-merge.<driver>.recursive::
-	Names a low-level merge driver to be used when
-	performing an internal merge between common ancestors.
-	See linkgit:gitattributes[5] for details.
+include::merge-config.txt[]
 
 mergetool.<tool>.path::
 	Override the path for the given tool.  This is useful in case