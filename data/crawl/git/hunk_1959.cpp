 		char *another;
 		if (isnull)
 			die(_("git apply: bad git-diff - expected /dev/null, got %s on line %d"),
-			    *name, state_linenr);
+			    *name, state->linenr);
 		another = find_name(state, line, NULL, state->p_value, TERM_TAB);
 		if (!another || memcmp(another, *name, len + 1))
 			die((side == DIFF_NEW_NAME) ?
 			    _("git apply: bad git-diff - inconsistent new filename on line %d") :
-			    _("git apply: bad git-diff - inconsistent old filename on line %d"), state_linenr);
+			    _("git apply: bad git-diff - inconsistent old filename on line %d"), state->linenr);
 		free(another);
 	} else {
 		/* expect "/dev/null" */
 		if (memcmp("/dev/null", line, 9) || line[9] != '\n')
-			die(_("git apply: bad git-diff - expected /dev/null on line %d"), state_linenr);
+			die(_("git apply: bad git-diff - expected /dev/null on line %d"), state->linenr);
 	}
 }
 