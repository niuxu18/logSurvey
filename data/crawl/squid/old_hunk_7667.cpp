		fatal_dump("Select Loop failed!");
	    break;
	case COMM_TIMEOUT:
	    if (getCleanRate() > 0 && squid_curtime >= next_cleaning) {
		debug(1, 1, "Performing a garbage collection...\n");
		n = storePurgeOld();
		debug(1, 1, "Garbage collection done, %d objects removed\n", n);
		next_cleaning = squid_curtime + getCleanRate();
	    }
	    if ((n = getAnnounceRate()) > 0) {
		if (squid_curtime > last_announce + n)
		    send_announce();
		last_announce = squid_curtime;
