 			strbuf_release(&dir);
 			return NULL;
 		}
-		die(_("Not a git repository (or any parent up to mount point %s)\n"
+		die(_("not a git repository (or any parent up to mount point %s)\n"
 		      "Stopping at filesystem boundary (GIT_DISCOVERY_ACROSS_FILESYSTEM not set)."),
 		    dir.buf);
 	default:
