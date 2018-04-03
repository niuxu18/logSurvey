 		return;
 	}
 
-	strbuf_git_path(sb, "%s", refname);
+	switch (ref_type(refname)) {
+	case REF_TYPE_PER_WORKTREE:
+	case REF_TYPE_PSEUDOREF:
+		strbuf_addf(sb, "%s/%s", refs->gitdir, refname);
+		break;
+	case REF_TYPE_NORMAL:
+		strbuf_addf(sb, "%s/%s", refs->gitcommondir, refname);
+		break;
+	default:
+		die("BUG: unknown ref type %d of ref %s",
+		    ref_type(refname), refname);
+	}
 }
 
 /*