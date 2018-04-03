    strcpy((char *) bufp, (char *) Community);
    return (bufp);
}

/*
 * Sends the input pdu on the session after calling snmp_build to create
 * a serialized packet.  If necessary, set some of the pdu data from the
 * session defaults.  Add a request corresponding to this pdu to the list
 * of outstanding requests on this session, then send the pdu.
 * Returns the request id of the generated packet if applicable, otherwise 1.
 * On any error, 0 is returned.
 * The pdu is freed by snmp_send() unless a failure occured.
 */
#if 0
int
snmp_send(struct snmp_session *session, struct snmp_pdu *pdu)
{
    struct session_list *slp;
    struct snmp_internal_session *isp = NULL;
    u_char packet[PACKET_LENGTH];
    int length = PACKET_LENGTH;
    struct request_list *rp;
    struct timeval tv;

    if (Reqid == 0)
	init_snmp();

    for (slp = Sessions; slp; slp = slp->next) {
	if (slp->session == session) {
	    isp = slp->internal;
	    break;
	}
    }
    if (isp == NULL) {
	snmp_errno = SNMPERR_BAD_SESSION;
	return 0;
    }
    if (pdu->command == SNMP_PDU_GET ||
	pdu->command == SNMP_PDU_GETNEXT ||
	pdu->command == SNMP_PDU_RESPONSE ||
	pdu->command == SNMP_PDU_SET) {

	if (pdu->reqid == SNMP_DEFAULT_REQID)
	    pdu->reqid = ++Reqid;
	if (pdu->errstat == SNMP_DEFAULT_ERRSTAT)
	    pdu->errstat = 0;
	if (pdu->errindex == SNMP_DEFAULT_ERRINDEX)
	    pdu->errindex = 0;

    } else if (pdu->command == SNMP_PDU_INFORM ||
	    pdu->command == SNMP_PDU_GETBULK ||
	pdu->command == SNMP_PDU_V2TRAP) {

	if (session->Version != SNMP_VERSION_2) {
	    snmplib_debug(3, "Cant send SNMPv2 PDU's in SNMP message.\n");
	    snmp_errno = SNMPERR_GENERR;	/* Fix this XXXXX */
	    return 0;
	}
	if (pdu->reqid == SNMP_DEFAULT_REQID)
	    pdu->reqid = ++Reqid;
	if (pdu->errstat == SNMP_DEFAULT_ERRSTAT)
	    pdu->errstat = 0;
	if (pdu->errindex == SNMP_DEFAULT_ERRINDEX)
	    pdu->errindex = 0;

    } else {
	/* fill in trap defaults */
	pdu->reqid = 1;		/* give a bogus non-error reqid for traps */
	if (pdu->enterprise_length == SNMP_DEFAULT_ENTERPRISE_LENGTH) {
	    pdu->enterprise = (oid *) xmalloc(sizeof(DEFAULT_ENTERPRISE));
	    xmemcpy((char *) pdu->enterprise, (char *) DEFAULT_ENTERPRISE,
		sizeof(DEFAULT_ENTERPRISE));
	    pdu->enterprise_length = sizeof(DEFAULT_ENTERPRISE) / sizeof(oid);
	}
	if (pdu->time == SNMP_DEFAULT_TIME)
	    pdu->time = DEFAULT_TIME;
    }

    if (pdu->address.sin_addr.s_addr == SNMP_DEFAULT_ADDRESS) {
	if (isp->addr.sin_addr.s_addr != SNMP_DEFAULT_ADDRESS) {
	    xmemcpy((char *) &pdu->address, (char *) &isp->addr,
		sizeof(pdu->address));
	} else {
	    snmplib_debug(3, "No remote IP address specified\n");
	    snmp_errno = SNMPERR_BAD_ADDRESS;
	    return 0;
	}
    }
    if (snmp_build(session, pdu, packet, &length) < 0) {
	snmplib_debug(3, "Error building packet\n");
	snmp_errno = SNMPERR_GENERR;
	return 0;
    }
    snmp_dump(packet, length, "sending", pdu->address.sin_addr);

    gettimeofday(&tv, (struct timezone *) 0);
    if (sendto(isp->sd, (char *) packet, length, 0,
	    (struct sockaddr *) &pdu->address, sizeof(pdu->address)) < 0) {
	perror("sendto");
	snmp_errno = SNMPERR_GENERR;
	return 0;
    }
    snmplib_debug(6, "LIBSNMP:  Sent PDU %s, Reqid %d\n",
	snmp_pdu_type(pdu), pdu->reqid);

    if (pdu->command == SNMP_PDU_GET ||
	pdu->command == SNMP_PDU_GETNEXT ||
	pdu->command == SNMP_PDU_SET ||
	pdu->command == SNMP_PDU_GETBULK ||
	pdu->command == SNMP_PDU_INFORM) {

	snmplib_debug(6, "LIBSNMP:  Setting up to recieve a response for reqid %d\n",
	    pdu->reqid);

	/* set up to expect a response */
	rp = (struct request_list *) xmalloc(sizeof(struct request_list));
	rp->next_request = isp->requests;
	isp->requests = rp;

	rp->pdu = pdu;
	rp->request_id = pdu->reqid;

	rp->retries = 1;
	rp->timeout = session->timeout;
	rp->time = tv;
	tv.tv_usec += rp->timeout;
	tv.tv_sec += tv.tv_usec / 1000000L;
	tv.tv_usec %= 1000000L;
	rp->expire = tv;
    }
    return (pdu->reqid);
}

/*
 * Checks to see if any of the fd's set in the fdset belong to
 * snmp.  Each socket with it's fd set has a packet read from it
 * and snmp_parse is called on the packet received.  The resulting pdu
 * is passed to the callback routine for that session.  If the callback
 * routine returns successfully, the pdu and it's request are deleted.
 */
void
snmp_read(fdset)
     fd_set *fdset;
{
    struct session_list *slp;
    struct snmp_session *sp;
    struct snmp_internal_session *isp;
    u_char packet[PACKET_LENGTH];
    struct sockaddr_in from;
    int length, fromlength;
    struct snmp_pdu *pdu;
    struct request_list *rp, *orp;
    u_char *bufp;

    for (slp = Sessions; slp; slp = slp->next) {
	if (FD_ISSET(slp->internal->sd, fdset)) {
	    sp = slp->session;
	    isp = slp->internal;
	    fromlength = sizeof from;
	    length = recvfrom(isp->sd, (char *) packet,
		PACKET_LENGTH, 0, (struct sockaddr *) &from,
		&fromlength);
	    if (length == -1)
		perror("recvfrom");

	    snmp_dump(packet, length, "received", from.sin_addr);

	    pdu = snmp_pdu_create(0);
	    pdu->address = from;
	    pdu->reqid = 0;

	    /* Parse the incoming packet */
	    bufp = snmp_parse(sp, pdu, packet, length);
	    if (bufp == NULL) {
		snmplib_debug(3, "Mangled packet\n");
		snmp_free_pdu(pdu);
		return;
	    }
	    if (sp->community)
		xfree(sp->community);
	    sp->community = bufp;
	    sp->community_len = strlen((char *) bufp);

	    snmplib_debug(6, "LIBSNMP:  Read PDU %s, ReqId %d\n", snmp_pdu_type(pdu), pdu->reqid);

	    if (pdu->command == SNMP_PDU_RESPONSE) {
		for (rp = isp->requests; rp; rp = rp->next_request) {
		    if (rp->request_id == pdu->reqid) {
			snmplib_debug(6, "LIBSNMP:  ReqId %d:  Calling callback\n", pdu->reqid);
			if (sp->callback(RECEIVED_MESSAGE, sp,
				pdu->reqid, pdu,
				sp->callback_magic) == 1) {
			    /* successful, so delete request */
			    snmplib_debug(6, "LIBSNMP:  ReqId %d:  Success.  Removing ReqId.\n", pdu->reqid);
			    orp = rp;
			    if (isp->requests == orp) {
				/* first in list */
				isp->requests = orp->next_request;
			    } else {
				for (rp = isp->requests; rp; rp = rp->next_request) {
				    if (rp->next_request == orp) {
					/* link around it */
					rp->next_request = orp->next_request;
					break;
				    }
				}
			    }
			    snmp_free_pdu(orp->pdu);
			    xfree((char *) orp);
			    /* there shouldn't be another req with the same reqid */
			    break;
			}
		    }
		}
	    } else if (pdu->command == SNMP_PDU_GET ||
		    pdu->command == SNMP_PDU_GETNEXT ||
		    pdu->command == TRP_REQ_MSG ||
		    pdu->command == SNMP_PDU_SET ||
		    pdu->command == SNMP_PDU_GETBULK ||
		    pdu->command == SNMP_PDU_INFORM ||
		pdu->command == SNMP_PDU_V2TRAP) {
		sp->callback(RECEIVED_MESSAGE, sp, pdu->reqid,
		    pdu, sp->callback_magic);
	    }
	    snmp_free_pdu(pdu);
	}
    }
}

/*
 * Returns info about what snmp requires from a select statement.
 * numfds is the number of fds in the list that are significant.
 * All file descriptors opened for SNMP are OR'd into the fdset.
 * If activity occurs on any of these file descriptors, snmp_read
 * should be called with that file descriptor set
 *
 * The timeout is the latest time that SNMP can wait for a timeout.  The
 * select should be done with the minimum time between timeout and any other
 * timeouts necessary.  This should be checked upon each invocation of select.
 * If a timeout is received, snmp_timeout should be called to check if the
 * timeout was for SNMP.  (snmp_timeout is idempotent)
 *
 * Block is 1 if the select is requested to block indefinitely, rather than time out.
 * If block is input as 1, the timeout value will be treated as undefined, but it must
 * be available for setting in snmp_select_info.  On return, if block is true, the value
 * of timeout will be undefined.
 *
 * snmp_select_info returns the number of open sockets.  (i.e. The number of sessions open)
 */
int
snmp_select_info(numfds, fdset, timeout, block)
     int *numfds;
     fd_set *fdset;
     struct timeval *timeout;
     int *block;		/* should the select block until input arrives (i.e. no input) */
{
    struct session_list *slp;
    struct snmp_internal_session *isp;
    struct request_list *rp;
    struct timeval now, earliest;
    int active = 0, requests = 0;

    timerclear(&earliest);
    /*
     * For each request outstanding, add it's socket to the fdset,
     * and if it is the earliest timeout to expire, mark it as lowest.
     */
    for (slp = Sessions; slp; slp = slp->next) {

	active++;
	isp = slp->internal;
	if ((isp->sd + 1) > *numfds)
	    *numfds = (isp->sd + 1);
	FD_SET(isp->sd, fdset);
	snmplib_debug(6, "LIBSNMP:  select():  Adding port %d\n", isp->sd);
	if (isp->requests) {
	    /* found another session with outstanding requests */
	    requests++;
	    for (rp = isp->requests; rp; rp = rp->next_request) {
		if (!timerisset(&earliest) ||
		    timercmp(&rp->expire, &earliest, <))
		    earliest = rp->expire;
	    }
	}
    }
    snmplib_debug(6, "LIBSNMP:  Select Info:  %d active, %d requests pending.\n",
	active, requests);

    if (requests == 0)		/* if none are active, skip arithmetic */
	return active;

    /*
     * Now find out how much time until the earliest timeout.  This
     * transforms earliest from an absolute time into a delta time, the
     * time left until the select should timeout.
     */
    gettimeofday(&now, (struct timezone *) 0);
    earliest.tv_sec--;		/* adjust time to make arithmetic easier */
    earliest.tv_usec += 1000000L;
    earliest.tv_sec -= now.tv_sec;
    earliest.tv_usec -= now.tv_usec;
    while (earliest.tv_usec >= 1000000L) {
	earliest.tv_usec -= 1000000L;
	earliest.tv_sec += 1;
    }
    if (earliest.tv_sec < 0) {
	earliest.tv_sec = 0;
	earliest.tv_usec = 0;
    }
    /* if it was blocking before or our delta time is less, reset timeout */
    if (*block == 1 || timercmp(&earliest, timeout, <)) {
	*timeout = earliest;
	*block = 0;
    }
    return active;
}

/*
 * snmp_timeout should be called whenever the timeout from snmp_select_info 
 * expires, but it is idempotent, so snmp_timeout can be polled (probably a 
 * cpu expensive proposition).  snmp_timeout checks to see if any of the 
 * sessions have an outstanding request that has timed out.  If it finds one 
 * (or more), and that pdu has more retries available, a new packet is formed
 * from the pdu and is resent.  If there are no more retries available, the 
 * callback for the session is used to alert the user of the timeout.
 */
void
snmp_timeout(void)
{
    struct session_list *slp;
    struct snmp_session *sp;
    struct snmp_internal_session *isp;
    struct request_list *rp, *orp, *freeme = NULL;
    struct timeval now;

    gettimeofday(&now, (struct timezone *) 0);

    /*
     * For each request outstanding, check to see if it has expired.
     */
    for (slp = Sessions; slp; slp = slp->next) {
	sp = slp->session;
	isp = slp->internal;
	orp = NULL;
	snmplib_debug(6, "LIBSNMP:  Checking session %s\n",
	    (sp->peername != NULL) ? sp->peername : "<NULL>");
	for (rp = isp->requests; rp; rp = rp->next_request) {
	    snmplib_debug(6, "LIBSNMP:  Checking session request %d, expire at %u, Retry %d/%d\n",
		rp->request_id, rp->expire.tv_sec, rp->retries, sp->retries);

	    if (freeme != NULL) {
		/* frees rp's after the for loop goes on to the next_request */
		xfree((char *) freeme);
		freeme = NULL;
	    }
	    if (timercmp(&rp->expire, &now, <)) {

		snmplib_debug(6, "LIBSNMP:  Expired.\n");

		/* this timer has expired */
		if (rp->retries >= sp->retries) {
		    /* No more chances, delete this entry */
		    sp->callback(TIMED_OUT, sp, rp->pdu->reqid,
			rp->pdu, sp->callback_magic);
		    if (orp == NULL) {
			isp->requests = rp->next_request;
		    } else {
			orp->next_request = rp->next_request;
		    }
		    snmp_free_pdu(rp->pdu);
		    freeme = rp;
		    continue;	/* don't update orp below */
		} else {
		    u_char packet[PACKET_LENGTH];
		    int length = PACKET_LENGTH;
		    struct timeval tv;

		    snmplib_debug(6, "LIBSNMP:  Retransmitting.\n");
		    /* retransmit this pdu */
		    rp->retries++;
		    rp->timeout <<= 1;
		    if (snmp_build(sp, rp->pdu, packet, &length) < 0) {
			snmplib_debug(3, "Error building packet\n");
		    }
		    snmp_dump(packet, length,
			"sending", rp->pdu->address.sin_addr);

		    gettimeofday(&tv, (struct timezone *) 0);
		    if (sendto(isp->sd, (char *) packet, length, 0, (struct sockaddr *) &rp->pdu->address, sizeof(rp->pdu->address)) < 0) {
			perror("sendto");
		    }
		    rp->time = tv;
		    tv.tv_usec += rp->timeout;
		    tv.tv_sec += tv.tv_usec / 1000000L;
		    tv.tv_usec %= 1000000L;
		    rp->expire = tv;
		}
	    }
	    orp = rp;
	}
	if (freeme != NULL) {
	    xfree((char *) freeme);
	    freeme = NULL;
	}
    }
}


/* Print some API stats */
void
snmp_api_stats(void *outP)
{
    struct session_list *slp;
    struct request_list *rp;
    struct snmp_internal_session *isp;
    FILE *out = (FILE *) outP;

    int active = 0;
    int requests = 0;
    int count = 0;
    int rcount = 0;

    fprintf(out, "LIBSNMP: Session List Dump\n");
    fprintf(out, "LIBSNMP: ----------------------------------------\n");
    for (slp = Sessions; slp; slp = slp->next) {

	isp = slp->internal;
	active++;
	count++;
	fprintf(out, "LIBSNMP: %2d: Host %s\n", count,
	    (slp->session->peername == NULL) ? "NULL" : slp->session->peername);

	if (isp->requests) {
	    /* found another session with outstanding requests */
	    requests++;
	    rcount = 0;
	    for (rp = isp->requests; rp; rp = rp->next_request) {
		rcount++;
		{
		    struct hostent *hp;
		    hp = gethostbyaddr((char *) &(rp->pdu->address),
			sizeof(u_int), AF_INET);
		    fprintf(out, "LIBSNMP: %2d: ReqId %d (%s) (%s)\n",
			rcount, rp->request_id, snmp_pdu_type(rp->pdu),
			(hp == NULL) ? "NULL" : hp->h_name);
		}
	    }
	}
	fprintf(out, "LIBSNMP: ----------------------------------------\n");
    }
    fprintf(out, "LIBSNMP: Session List: %d active, %d have requests pending.\n",
	active, requests);
}
#endif
