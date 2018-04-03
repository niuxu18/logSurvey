    FD_ENTRY *fde = NULL;
    debug(5, 5, "comm_close: FD %d\n", fd);
    if (fd < 0)
    	fatal_dump("comm_close: bad FD");
    if (fd >= Squid_MaxFD)
    	fatal_dump("comm_close: bad FD");
    fde = &fd_table[fd];
    if (!fde->open)
	return;