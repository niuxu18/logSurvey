    storeAppendPrintf(sentry, open_bracket);
    storeAppendPrintf(sentry, "{Squid Object Cache: Version %s}\n",
	version_string);
    tod = mkrfc1123(squid_starttime);
    storeAppendPrintf(sentry, "{Start Time:\t%s}\n", tod);
    tod = mkrfc1123(squid_curtime);
    storeAppendPrintf(sentry, "{Current Time:\t%s}\n", tod);
    storeAppendPrintf(sentry, "{Connection information for %s:}\n",
	appname);