	fatal("Don't run Squid as root, set 'cache_effective_user'!");
    }
    if (httpPortNumOverride != 1)
	Config.Port.http[0] = (u_short) httpPortNumOverride;
    if (icpPortNumOverride != 1)
	Config.Port.icp = (u_short) icpPortNumOverride;
