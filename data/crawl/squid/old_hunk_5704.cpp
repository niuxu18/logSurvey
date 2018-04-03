}
#endif

#if HAVE_POLL
static int
comm_check_incoming_poll_handlers(int nfds, int *fds)
{
    int i;
    int fd;
    PF *hdl = NULL;
    int npfds;
    struct pollfd pfds[3 + MAXHTTPPORTS];
    incoming_sockets_accepted = 0;
    for (i = npfds = 0; i < nfds; i++) {
	int events;
	fd = fds[i];
	events = 0;
	if (fd_table[fd].read_handler)
	    events |= POLLRDNORM;
	if (fd_table[fd].write_handler)
	    events |= POLLWRNORM;
	if (events) {
	    pfds[npfds].fd = fd;
	    pfds[npfds].events = events;
	    pfds[npfds].revents = 0;
	    npfds++;
	}
    }
    if (!nfds)
	return -1;
#if !ALARM_UPDATES_TIME
    getCurrentTime();
#endif
    statCounter.syscalls.polls++;
    if (poll(pfds, npfds, 0) < 1)
	return incoming_sockets_accepted;
    for (i = 0; i < npfds; i++) {
	int revents;
	if (((revents = pfds[i].revents) == 0) || ((fd = pfds[i].fd) == -1))
	    continue;
	if (revents & (POLLRDNORM | POLLIN | POLLHUP | POLLERR)) {
	    if ((hdl = fd_table[fd].read_handler)) {
		fd_table[fd].read_handler = NULL;
		hdl(fd, fd_table[fd].read_data);
	    } else if (pfds[i].events & POLLRDNORM)
		debug(5, 1) ("comm_poll_incoming: FD %d NULL read handler\n",
		    fd);
	}
	if (revents & (POLLWRNORM | POLLOUT | POLLHUP | POLLERR)) {
	    if ((hdl = fd_table[fd].write_handler)) {
		fd_table[fd].write_handler = NULL;
		hdl(fd, fd_table[fd].write_data);
	    } else if (pfds[i].events & POLLWRNORM)
		debug(5, 1) ("comm_poll_incoming: FD %d NULL write_handler\n",
		    fd);
	}
    }
    return incoming_sockets_accepted;
}

static void
comm_poll_icp_incoming(void)
{
    int nfds = 0;
    int fds[2];
    int nevents;
    icp_io_events = 0;
    if (theInIcpConnection >= 0)
	fds[nfds++] = theInIcpConnection;
    if (theInIcpConnection != theOutIcpConnection)
	if (theOutIcpConnection >= 0)
	    fds[nfds++] = theOutIcpConnection;
    if (nfds == 0)
	return;
    nevents = comm_check_incoming_poll_handlers(nfds, fds);
    incoming_icp_interval += Config.comm_incoming.icp_average - nevents;
    if (incoming_icp_interval < Config.comm_incoming.icp_min_poll)
	incoming_icp_interval = Config.comm_incoming.icp_min_poll;
    if (incoming_icp_interval > MAX_INCOMING_INTERVAL)
	incoming_icp_interval = MAX_INCOMING_INTERVAL;
    if (nevents > INCOMING_ICP_MAX)
	nevents = INCOMING_ICP_MAX;
    statHistCount(&statCounter.comm_icp_incoming, nevents);
}

static void
comm_poll_http_incoming(void)
{
    int nfds = 0;
    int fds[MAXHTTPPORTS];
    int j;
    int nevents;
    http_io_events = 0;
    for (j = 0; j < NHttpSockets; j++) {
	if (HttpSockets[j] < 0)
	    continue;
	if (commDeferRead(HttpSockets[j]))
	    continue;
	fds[nfds++] = HttpSockets[j];
    }
    nevents = comm_check_incoming_poll_handlers(nfds, fds);
    incoming_http_interval = incoming_http_interval
	+ Config.comm_incoming.http_average - nevents;
    if (incoming_http_interval < Config.comm_incoming.http_min_poll)
	incoming_http_interval = Config.comm_incoming.http_min_poll;
    if (incoming_http_interval > MAX_INCOMING_INTERVAL)
	incoming_http_interval = MAX_INCOMING_INTERVAL;
    if (nevents > INCOMING_HTTP_MAX)
	nevents = INCOMING_HTTP_MAX;
    statHistCount(&statCounter.comm_http_incoming, nevents);
}

/* poll all sockets; call handlers for those that are ready. */
int
comm_poll(int msec)
{
    struct pollfd pfds[SQUID_MAXFD];
#if DELAY_POOLS
    fd_set slowfds;
#endif
    PF *hdl = NULL;
    int fd;
    int i;
    int maxfd;
    unsigned long nfds;
    unsigned long npending;
    int num;
    int callicp = 0, callhttp = 0;
    int calldns = 0;
    static time_t last_timeout = 0;
    double timeout = current_dtime + (msec / 1000.0);
    do {
#if !ALARM_UPDATES_TIME
	double start;
	getCurrentTime();
	start = current_dtime;
#endif
	/* Handle any fs callbacks that need doing */
	storeDirCallback();
#if DELAY_POOLS
	FD_ZERO(&slowfds);
#endif
	if (commCheckICPIncoming)
	    comm_poll_icp_incoming();
	if (commCheckDNSIncoming)
	    comm_poll_dns_incoming();
	if (commCheckHTTPIncoming)
	    comm_poll_http_incoming();
	callicp = calldns = callhttp = 0;
	nfds = 0;
	npending = 0;
	maxfd = Biggest_FD + 1;
	for (i = 0; i < maxfd; i++) {
	    int events;
	    events = 0;
	    /* Check each open socket for a handler. */
	    if (fd_table[i].read_handler) {
		switch (commDeferRead(i)) {
		case 0:
		    events |= POLLRDNORM;
		    break;
		case 1:
		    break;
#if DELAY_POOLS
		case -1:
		    events |= POLLRDNORM;
		    FD_SET(i, &slowfds);
		    break;
#endif
		default:
		    fatalf("bad return value from commDeferRead(FD %d)\n", i);
		}
	    }
	    if (fd_table[i].write_handler)
		events |= POLLWRNORM;
	    if (events) {
		pfds[nfds].fd = i;
		pfds[nfds].events = events;
		pfds[nfds].revents = 0;
		nfds++;
		if ((events & POLLRDNORM) && fd_table[i].flags.read_pending)
		    npending++;
	    }
	}
	if (nfds == 0) {
	    assert(shutting_down);
	    return COMM_SHUTDOWN;
	}
	if (npending)
	    msec = 0;
	if (msec > MAX_POLL_TIME)
	    msec = MAX_POLL_TIME;
	for (;;) {
	    statCounter.syscalls.polls++;
	    num = poll(pfds, nfds, msec);
	    statCounter.select_loops++;
	    if (num >= 0 || npending >= 0)
		break;
	    if (ignoreErrno(errno))
		continue;
	    debug(5, 0) ("comm_poll: poll failure: %s\n", xstrerror());
	    assert(errno != EINVAL);
	    return COMM_ERROR;
	    /* NOTREACHED */
	}
	debug(5, num ? 5 : 8) ("comm_poll: %d+%ld FDs ready\n", num, npending);
	statHistCount(&statCounter.select_fds_hist, num);
	/* Check timeout handlers ONCE each second. */
	if (squid_curtime > last_timeout) {
	    last_timeout = squid_curtime;
	    checkTimeouts();
	}
	if (num == 0 && npending == 0)
	    continue;
	/* scan each socket but the accept socket. Poll this 
	 * more frequently to minimize losses due to the 5 connect 
	 * limit in SunOS */
	for (i = 0; i < nfds; i++) {
	    fde *F;
	    int revents = pfds[i].revents;
	    fd = pfds[i].fd;
	    if (fd == -1)
		continue;
	    if (fd_table[fd].flags.read_pending)
		revents |= POLLIN;
	    if (revents == 0)
		continue;
	    if (fdIsIcp(fd)) {
		callicp = 1;
		continue;
	    }
	    if (fdIsDns(fd)) {
		calldns = 1;
		continue;
	    }
	    if (fdIsHttp(fd)) {
		callhttp = 1;
		continue;
	    }
	    F = &fd_table[fd];
	    if (revents & (POLLRDNORM | POLLIN | POLLHUP | POLLERR)) {
		debug(5, 6) ("comm_poll: FD %d ready for reading\n", fd);
		if (NULL == (hdl = F->read_handler))
		    (void) 0;
#if DELAY_POOLS
		else if (FD_ISSET(fd, &slowfds))
		    commAddSlowFd(fd);
#endif
		else {
		    F->read_handler = NULL;
		    hdl(fd, F->read_data);
		    statCounter.select_fds++;
		    if (commCheckICPIncoming)
			comm_poll_icp_incoming();
		    if (commCheckDNSIncoming)
			comm_poll_dns_incoming();
		    if (commCheckHTTPIncoming)
			comm_poll_http_incoming();
		}
	    }
	    if (revents & (POLLWRNORM | POLLOUT | POLLHUP | POLLERR)) {
		debug(5, 5) ("comm_poll: FD %d ready for writing\n", fd);
		if ((hdl = F->write_handler)) {
		    F->write_handler = NULL;
		    hdl(fd, F->write_data);
		    statCounter.select_fds++;
		    if (commCheckICPIncoming)
			comm_poll_icp_incoming();
		    if (commCheckDNSIncoming)
			comm_poll_dns_incoming();
		    if (commCheckHTTPIncoming)
			comm_poll_http_incoming();
		}
	    }
	    if (revents & POLLNVAL) {
		close_handler *ch;
		debug(5, 0) ("WARNING: FD %d has handlers, but it's invalid.\n", fd);
		debug(5, 0) ("FD %d is a %s\n", fd, fdTypeStr[F->type]);
		debug(5, 0) ("--> %s\n", F->desc);
		debug(5, 0) ("tmout:%p read:%p write:%p\n",
		    F->timeout_handler,
		    F->read_handler,
		    F->write_handler);
		for (ch = F->close_handler; ch; ch = ch->next)
		    debug(5, 0) (" close handler: %p\n", ch->handler);
		if (F->close_handler) {
		    commCallCloseHandlers(fd);
		} else if (F->timeout_handler) {
		    debug(5, 0) ("comm_poll: Calling Timeout Handler\n");
		    F->timeout_handler(fd, F->timeout_data);
		}
		F->close_handler = NULL;
		F->timeout_handler = NULL;
		F->read_handler = NULL;
		F->write_handler = NULL;
		if (F->flags.open)
		    fd_close(fd);
	    }
	}
	if (callicp)
	    comm_poll_icp_incoming();
	if (calldns)
	    comm_poll_dns_incoming();
	if (callhttp)
	    comm_poll_http_incoming();
#if DELAY_POOLS
	while ((fd = commGetSlowFd()) != -1) {
	    fde *F = &fd_table[fd];
	    debug(5, 6) ("comm_select: slow FD %d selected for reading\n", fd);
	    if ((hdl = F->read_handler)) {
		F->read_handler = NULL;
		hdl(fd, F->read_data);
		statCounter.select_fds++;
		if (commCheckICPIncoming)
		    comm_poll_icp_incoming();
		if (commCheckDNSIncoming)
		    comm_poll_dns_incoming();
		if (commCheckHTTPIncoming)
		    comm_poll_http_incoming();
	    }
	}
#endif
#if !ALARM_UPDATES_TIME
	getCurrentTime();
	statCounter.select_time += (current_dtime - start);
#endif
	return COMM_OK;
    }
    while (timeout > current_dtime);
    debug(5, 8) ("comm_poll: time out: %ld.\n", (long int) squid_curtime);
    return COMM_TIMEOUT;
}

#else

static int
comm_check_incoming_select_handlers(int nfds, int *fds)
