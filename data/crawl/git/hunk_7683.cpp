 	int len;
 
 	if (!*signingkey) {
-		if (strlcpy(signingkey, git_committer_info(1),
+		if (strlcpy(signingkey, git_committer_info(IDENT_ERROR_ON_NO_NAME),
 				sizeof(signingkey)) > sizeof(signingkey) - 1)
 			return error("committer info too long.");
 		bracket = strchr(signingkey, '>');
