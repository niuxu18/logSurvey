		return 1;
	}
	if (!server.host) {
		if (!server.tunnel) {
			fprintf( stderr, "no imap host specified\n" );
			return 1;
		}
		server.host = "tunnel";
	}

	/* read the messages */