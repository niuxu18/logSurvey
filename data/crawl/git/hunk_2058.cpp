 				return error("%s is a directory", path.buf);
 			remove_subtree(&path);
 		} else if (unlink(path.buf))
-			return error("unable to unlink old '%s' (%s)",
-				     path.buf, strerror(errno));
+			return error_errno("unable to unlink old '%s'", path.buf);
 	} else if (state->not_new)
 		return 0;
 