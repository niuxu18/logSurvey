 	case S_IFLNK:
 		new = read_blob_entry(ce, &size);
 		if (!new)
-			return error("git checkout-index: unable to read sha1 file of %s (%s)",
+			return error("unable to read sha1 file of %s (%s)",
 				path, sha1_to_hex(ce->sha1));
 
 		if (ce_mode_s_ifmt == S_IFLNK && has_symlinks && !to_tempfile) {
 			ret = symlink(new, path);
 			free(new);
 			if (ret)
-				return error("git checkout-index: unable to create symlink %s (%s)",
+				return error("unable to create symlink %s (%s)",
 					     path, strerror(errno));
 			break;
 		}
