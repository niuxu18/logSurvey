    debug(26, 3) ("sslStateFree: FD %d, sslState=%p\n", fd, sslState);
    if (sslState == NULL)
	return;
    if (fd != sslState->server.fd)
	fatal_dump("sslStateFree: FD mismatch!\n");
    safe_free(sslState->server.buf);
    safe_free(sslState->client.buf);
    xfree(sslState->url);
