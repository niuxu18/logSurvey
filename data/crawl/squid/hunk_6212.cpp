     assert(label);
     assert(tot_count == hit_count + miss_count);	/* paranoid */
 
+    if (!tot_count) {
+	storeAppendPrintf(sentry, "no guess stats for %s available\n", label);
+	return;
+    }
+
     storeAppendPrintf(sentry, "Digest guesses stats for %s:\n", label);
     storeAppendPrintf(sentry, "guess\t hit\t\t miss\t\t total\t\t\n");
     storeAppendPrintf(sentry, " \t #\t %%\t #\t %%\t #\t %%\t\n");