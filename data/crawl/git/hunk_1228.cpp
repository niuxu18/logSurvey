 		 * without metadata change.  A binary patch appears
 		 * empty to us here.
 		 */
-		if ((apply || check) &&
+		if ((state->apply || state->check) &&
 		    (!patch->is_binary && !metadata_changes(patch)))
-			die(_("patch with only garbage at line %d"), linenr);
+			die(_("patch with only garbage at line %d"), state->linenr);
 	}
 
 	return offset + hdrsize + patchsize;