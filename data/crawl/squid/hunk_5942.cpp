     int tot = rc->total;
 
     storeAppendPrintf(sentry, "\n\n%s histogram:\n", rc->proto);
-    storeAppendPrintf(sentry, "Category\tCount\t%%Total\n");
+    storeAppendPrintf(sentry, "Count\t%%Total\tCategory\n");
 
-#define refreshCountsStatsEntry(name) { \
-	storeAppendPrintf(sentry, "%s\t%6d\t%6.2f\n", \
-	    #name, rc->name, xpercent(rc->name, tot)); \
-    sum += rc->name; \
+#define refreshCountsStatsEntry(code,desc) { \
+	storeAppendPrintf(sentry, "%6d\t%6.2f\t%s\n", \
+	    rc->status[code], xpercent(rc->status[code], tot), desc); \
+    sum += rc->status[code]; \
 }
-    refreshCountsStatsEntry(revalidate_stale);
-    refreshCountsStatsEntry(request_reload2ims_stale);
-    refreshCountsStatsEntry(request_reload_stale);
-    refreshCountsStatsEntry(request_max_age_stale);
-    refreshCountsStatsEntry(min_age_override_exp_fresh);
-    refreshCountsStatsEntry(response_expires_stale);
-    refreshCountsStatsEntry(response_expires_fresh);
-    refreshCountsStatsEntry(conf_max_age_stale);
-    refreshCountsStatsEntry(min_age_override_lmt_fresh);
-    refreshCountsStatsEntry(last_modified_factor_fresh);
-    refreshCountsStatsEntry(last_modified_factor_stale);
-    refreshCountsStatsEntry(response_lmt_now_stale);
-    refreshCountsStatsEntry(conf_min_age_fresh);
-    refreshCountsStatsEntry(default_stale);
+
+    refreshCountsStatsEntry(FRESH_REQUEST_MAX_STALE_ALL,
+	"Fresh: request max-stale wildcard");
+    refreshCountsStatsEntry(FRESH_REQUEST_MAX_STALE_VALUE,
+	"Fresh: request max-stale value");
+    refreshCountsStatsEntry(FRESH_EXPIRES,
+	"Fresh: expires time not reached");
+    refreshCountsStatsEntry(FRESH_LMFACTOR_RULE,
+	"Fresh: refresh_pattern last-mod factor percentage");
+    refreshCountsStatsEntry(FRESH_MIN_RULE,
+	"Fresh: refresh_pattern min value");
+    refreshCountsStatsEntry(FRESH_OVERRIDE_EXPIRES,
+	"Fresh: refresh_pattern override expires");
+    refreshCountsStatsEntry(FRESH_OVERRIDE_LASTMOD,
+	"Fresh: refresh_pattern override lastmod");
+    refreshCountsStatsEntry(STALE_MUST_REVALIDATE,
+	"Stale: response has must-revalidate");
+    refreshCountsStatsEntry(STALE_RELOAD_INTO_IMS,
+	"Stale: changed reload into IMS");
+    refreshCountsStatsEntry(STALE_FORCED_RELOAD,
+	"Stale: request has no-cache directive");
+    refreshCountsStatsEntry(STALE_EXCEEDS_REQUEST_MAX_AGE_VALUE,
+	"Stale: age exceeds request max-age value");
+    refreshCountsStatsEntry(STALE_EXPIRES,
+	"Stale: expires time reached");
+    refreshCountsStatsEntry(STALE_MAX_RULE,
+	"Stale: refresh_pattern max age rule");
+    refreshCountsStatsEntry(STALE_LMFACTOR_RULE,
+	"Stale: refresh_pattern last-mod factor percentage");
+    refreshCountsStatsEntry(STALE_DEFAULT,
+	"Stale: by default");
+
     tot = sum;			/* paranoid: "total" line shows 100% if we forgot nothing */
-    refreshCountsStatsEntry(total);
-    /* maybe counters */
-    storeAppendPrintf(sentry, "\n");
-    refreshCountsStatsEntry(request_reload_ignore_maybe);
-    refreshCountsStatsEntry(response_lmt_future_maybe);
+    storeAppendPrintf(sentry, "%6d\t%6.2f\tTOTAL\n",
+	rc->total, xpercent(rc->total, tot));
+    \
+	storeAppendPrintf(sentry, "\n");
 }
 
 static void
