	memset(rbuf, '\0', 512);
	rl = recv(s, rbuf, 512, 0);
	{
	    unsigned short rid;
	    int i;
	    int n;
	    rfc1035_rr *answers = NULL;
	    n = rfc1035AnswersUnpack(rbuf,
		rl,
		&answers,
		&rid);
	    if (rid != sid) {
		printf("ERROR, ID mismatch (%#hx, %#hx)\n", sid, rid);
	    } else if (n < 0) {
		printf("ERROR %d\n", rfc1035_errno);
	    } else {
		printf("%d answers\n", n);
		for (i = 0; i < n; i++) {