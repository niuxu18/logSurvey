	    fatal(tmp_error_buf);
	}
	for (j = 0; j < e->n_addresses; j++) {
	    debug(2, "--> IP address #%d: %s\n", j, inet_ntoa(e->addresses[j]));
	}
	e->rtt = 1000;

