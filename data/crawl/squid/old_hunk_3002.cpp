{
    debugs(49, 5, "snmpConnectionOpen: Called");

    if (Config.Port.snmp > 0) {
        Config.Addrs.snmp_incoming.SetPort(Config.Port.snmp);

        if (!Ip::EnableIpv6 && !Config.Addrs.snmp_incoming.SetIPv4()) {
            debugs(49, DBG_CRITICAL, "ERROR: IPv6 is disabled. " << Config.Addrs.snmp_incoming << " is not an IPv4 address.");
            fatal("SNMP port cannot be opened.");
        }
        /* split-stack for now requires IPv4-only SNMP */
        if (Ip::EnableIpv6&IPV6_SPECIAL_SPLITSTACK && Config.Addrs.snmp_incoming.IsAnyAddr()) {
            Config.Addrs.snmp_incoming.SetIPv4();
        }

        AsyncCall::Pointer call = asyncCall(49, 2,
                                            "snmpIncomingConnectionOpened",
                                            SnmpListeningStartedDialer(&snmpIncomingConnectionOpened));

        Ipc::StartListening(SOCK_DGRAM,
                            IPPROTO_UDP,
                            Config.Addrs.snmp_incoming,
                            COMM_NONBLOCKING,
                            Ipc::fdnInSnmpSocket, call);

        if (!Config.Addrs.snmp_outgoing.IsNoAddr()) {
            Config.Addrs.snmp_outgoing.SetPort(Config.Port.snmp);

            if (!Ip::EnableIpv6 && !Config.Addrs.snmp_outgoing.SetIPv4()) {
                debugs(49, DBG_CRITICAL, "ERROR: IPv6 is disabled. " << Config.Addrs.snmp_outgoing << " is not an IPv4 address.");
                fatal("SNMP port cannot be opened.");
            }
            /* split-stack for now requires IPv4-only SNMP */
            if (Ip::EnableIpv6&IPV6_SPECIAL_SPLITSTACK && Config.Addrs.snmp_outgoing.IsAnyAddr()) {
                Config.Addrs.snmp_outgoing.SetIPv4();
            }
            AsyncCall::Pointer call = asyncCall(49, 2,
                                                "snmpOutgoingConnectionOpened",
                                                SnmpListeningStartedDialer(&snmpOutgoingConnectionOpened));

            Ipc::StartListening(SOCK_DGRAM,
                                IPPROTO_UDP,
                                Config.Addrs.snmp_outgoing,
                                COMM_NONBLOCKING,
                                Ipc::fdnOutSnmpSocket, call);
        }
    }
}

static void
snmpIncomingConnectionOpened(int fd, int errNo)
{
    theInSnmpConnection = fd;
    if (theInSnmpConnection < 0)
        fatal("Cannot open Incoming SNMP Port");

    commSetSelect(theInSnmpConnection, COMM_SELECT_READ, snmpHandleUdp, NULL,
                  0);

    debugs(1, 1, "Accepting SNMP messages on " << Config.Addrs.snmp_incoming <<
           ", FD " << theInSnmpConnection << ".");

    if (Config.Addrs.snmp_outgoing.IsNoAddr())
        theOutSnmpConnection = theInSnmpConnection;
}

static void
snmpOutgoingConnectionOpened(int fd, int errNo)
{
    theOutSnmpConnection = fd;
    if (theOutSnmpConnection < 0)
        fatal("Cannot open Outgoing SNMP Port");

    commSetSelect(theOutSnmpConnection, COMM_SELECT_READ, snmpHandleUdp, NULL,
                  0);

    debugs(1, 1, "Outgoing SNMP messages on " << Config.Addrs.snmp_outgoing <<
           ", FD " << theOutSnmpConnection << ".");

    {
        struct addrinfo *xaddr = NULL;
        int x;


        theOutSNMPAddr.SetEmpty();

        theOutSNMPAddr.InitAddrInfo(xaddr);

        x = getsockname(theOutSnmpConnection, xaddr->ai_addr, &xaddr->ai_addrlen);

        if (x < 0)
            debugs(51, 1, "theOutSnmpConnection FD " << theOutSnmpConnection << ": getsockname: " << xstrerror());
        else
            theOutSNMPAddr = *xaddr;

        theOutSNMPAddr.FreeAddrInfo(xaddr);
    }
}

void
snmpConnectionShutdown(void)
{
    if (theInSnmpConnection < 0)
        return;

    if (theInSnmpConnection != theOutSnmpConnection) {
        debugs(49, 1, "FD " << theInSnmpConnection << " Closing SNMP socket");
        comm_close(theInSnmpConnection);
    }

    /*
     * Here we set 'theInSnmpConnection' to -1 even though the SNMP 'in'
     * and 'out' sockets might be just one FD.  This prevents this
     * function from executing repeatedly.  When we are really ready to
     * exit or restart, main will comm_close the 'out' descriptor.
     */
    theInSnmpConnection = -1;

    /*
     * Normally we only write to the outgoing SNMP socket, but we
     * also have a read handler there to catch messages sent to that
     * specific interface.  During shutdown, we must disable reading
     * on the outgoing socket.
     */
    assert(theOutSnmpConnection > -1);

    commSetSelect(theOutSnmpConnection, COMM_SELECT_READ, NULL, NULL, 0);
}

void
snmpConnectionClose(void)
{
    snmpConnectionShutdown();

    if (theOutSnmpConnection > -1) {
        debugs(49, 1, "FD " << theOutSnmpConnection << " Closing SNMP socket");
        comm_close(theOutSnmpConnection);
        /* make sure the SNMP out connection is unset */
        theOutSnmpConnection = -1;
    }
}

/*
