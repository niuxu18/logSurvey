    int tot = rc->total;

    storeAppendPrintf(sentry, "\n\n%s histogram:\n", rc->proto);
    storeAppendPrintf(sentry, "Category\tCount\t%%Total\n");

#define refreshCountsStatsEntry(name) { \
	storeAppendPrintf(sentry, "%s\t%6d\t%6.2f\n", \
	    #name, rc->name, xpercent(rc->name, tot)); \
    sum += rc->name; \
}
    refreshCountsStatsEntry(revalidate_stale);
    refreshCountsStatsEntry(request_reload2ims_stale);
    refreshCountsStatsEntry(request_reload_stale);
    refreshCountsStatsEntry(request_max_age_stale);
    refreshCountsStatsEntry(min_age_override_exp_fresh);
    refreshCountsStatsEntry(response_expires_stale);
    refreshCountsStatsEntry(response_expires_fresh);
    refreshCountsStatsEntry(conf_max_age_stale);
    refreshCountsStatsEntry(min_age_override_lmt_fresh);
    refreshCountsStatsEntry(last_modified_factor_fresh);
    refreshCountsStatsEntry(last_modified_factor_stale);
    refreshCountsStatsEntry(response_lmt_now_stale);
    refreshCountsStatsEntry(conf_min_age_fresh);
    refreshCountsStatsEntry(default_stale);
    tot = sum;			/* paranoid: "total" line shows 100% if we forgot nothing */
    refreshCountsStatsEntry(total);
    /* maybe counters */
    storeAppendPrintf(sentry, "\n");
    refreshCountsStatsEntry(request_reload_ignore_maybe);
    refreshCountsStatsEntry(response_lmt_future_maybe);
}

static void