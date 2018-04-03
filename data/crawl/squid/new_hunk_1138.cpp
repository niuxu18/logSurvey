
    rc = gethostname(hostname, sizeof(hostname)-1);
    if (rc) {
        debug((char *) "%s| %s: ERROR: resolving hostname '%s' failed\n", LogTime(), PROGRAM, hostname);
        fprintf(stderr, "%s| %s: ERROR: resolving hostname '%s' failed\n",
                LogTime(), PROGRAM, hostname);
        return NULL;
    }
    rc = getaddrinfo(hostname, NULL, NULL, &hres);
    if (rc != 0) {
        debug((char *) "%s| %s: ERROR: resolving hostname with getaddrinfo: %s failed\n",
              LogTime(), PROGRAM, gai_strerror(rc));
        fprintf(stderr,
                "%s| %s: ERROR: resolving hostname with getaddrinfo: %s failed\n",
                LogTime(), PROGRAM, gai_strerror(rc));