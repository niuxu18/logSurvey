    storeAppendPrintf(sentry, "Squid Object Cache: Version %s\n",
                      version_string);

    storeAppendPrintf(sentry, "Start Time:\t%s\n",
                      mkrfc1123(squid_start.tv_sec));

