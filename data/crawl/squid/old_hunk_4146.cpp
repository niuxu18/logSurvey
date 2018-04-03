    BOOL Done = FALSE;

try_again:
    if (fgets(buf, BUFFER_SIZE, stdin) == NULL) 
        return 0;

    c = memchr(buf, '\n', BUFFER_SIZE);	/* safer against overrun than strchr */
    if (c) {
	if (oversized) {
	    helperfail("illegal request received");
	    fprintf(stderr, "Illegal request received: '%s'\n", buf);
	    return 1;
	}
	*c = '\0';
    } else {
	fprintf(stderr, "No newline in '%s'\n", buf);
	oversized = 1;
	goto try_again;
    }

    if ((strlen(buf) > 3) && Negotiate_packet_debug_enabled) {
