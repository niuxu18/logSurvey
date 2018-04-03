 	int err = 0;
 	struct idx_entry *entries;
 
-	/* Note that the pack header checks are actually performed by
-	 * use_pack when it first opens the pack file.  If anything
-	 * goes wrong during those checks then the call will die out
-	 * immediately.
-	 */
+	if (!is_pack_valid(p))
+		return error("packfile %s cannot be accessed", p->pack_name);
 
 	git_SHA1_Init(&ctx);
 	do {