 		matched_src = try_explicit_object_name(rs->src);
 		if (!matched_src)
 			return error("src refspec %s does not match any.", rs->src);
+		copy_src = 0;
 		break;
 	default:
 		return error("src refspec %s matches more than one.", rs->src);
