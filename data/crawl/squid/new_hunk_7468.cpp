	Config.cleanRate = 86400 * 365;		/* one year */
    if (Config.Announce.rate < 1)
	Config.Announce.rate = 86400 * 365;	/* one year */
    if (Config.dnsChildren < 0)
	Config.dnsChildren = 0;
    if (Config.dnsChildren < 1) {
	printf("WARNING: dnsservers are disabled!\n");
	printf("WARNING: Cache performance may be very poor\n");
    } else if (Config.dnsChildren > DefaultDnsChildrenMax) {
	printf("WARNING: dns_children was set to a bad value: %d\n",
	    Config.dnsChildren);
	printf("Setting it to the maximum (%d).\n", DefaultDnsChildrenMax);
	Config.dnsChildren = DefaultDnsChildrenMax;
    }
    if (Config.program.redirect) {
        if (Config.redirectChildren < 1) {
	    Config.redirectChildren = 0;
	    safe_free(Config.program.redirect);
        } else if (Config.redirectChildren > DefaultRedirectChildrenMax) {
	    printf("WARNING: redirect_children was set to a bad value: %d\n",
	        Config.redirectChildren);
	    printf("Setting it to the maximum (%d).\n", DefaultRedirectChildrenMax);
	    Config.redirectChildren = DefaultRedirectChildrenMax;
        }
    }
    fclose(fp);
    configDoConfigure();
    return 0;
}
