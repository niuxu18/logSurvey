 	  logprintf (LOG_NOTQUIET, _("Cannot write to `%s' (%s).\n"),
 		     u->local, strerror (errno));
 	  FREEHSTAT (hstat);
-	  free(filename_plus_orig_suffix);  /* must precede every return! */
+	  xfree (filename_plus_orig_suffix); /* must precede every return! */
 	  return err;
 	  break;
 	case NEWLOCATION:
