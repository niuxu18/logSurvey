 		}
 	}
 	if (!name)
-		die(_("unable to find filename in patch at line %d"), state_linenr);
+		die(_("unable to find filename in patch at line %d"), state->linenr);
 }
 
 static int gitdiff_hdrend(struct apply_state *state,
