    storeAppendPrintf(sentry, "avg service time: %.2f msec\n",
	(double) hlp->stats.avg_svc_time / 1000.0);
    storeAppendPrintf(sentry, "\n");
    storeAppendPrintf(sentry, "%7s\t%7s\t%11s\t%s\t%7s\t%7s\t%7s\n",
	"#",
	"FD",
	"# Requests",
	"Flags",
	"Time",
