	client = fqdncache_gethostbyaddr(al->cache.caddr, 0);
    if (client == NULL)
	client = inet_ntoa(al->cache.caddr);
    logfilePrintf(logfile, "%s %s - [%s] \"%s %s HTTP/%.1f\" %d %d %s:%s",
	client,
	al->cache.ident,
	mkhttpdlogtime(&squid_curtime),
	al->private.method_str,
	al->url,
	al->http.version,
	al->http.code,
	al->cache.size,
	log_tags[al->cache.code],
