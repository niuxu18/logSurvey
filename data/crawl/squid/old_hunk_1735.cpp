    // Sadly WCCP only does IPv4

    struct sockaddr_in router;
    Config.Wccp.router.GetSockAddr(router);
    if (connect(theWccpConnection, (struct sockaddr*)&router, sizeof(router)))
        fatal("Unable to connect WCCP out socket");

