 			die(_("--reflog option needs one branch name"));
 
 		if (MAX_REVS < reflog)
-			die("Only %d entries can be shown at one time.",
-			    MAX_REVS);
+			die(Q_("only %d entry can be shown at one time.",
+			       "only %d entries can be shown at one time.",
+			       MAX_REVS), MAX_REVS);
 		if (!dwim_ref(*av, strlen(*av), oid.hash, &ref))
 			die(_("no such ref %s"), *av);
 