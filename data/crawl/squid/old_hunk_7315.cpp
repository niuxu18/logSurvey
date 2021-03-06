    char *name = inet_ntoa(addr);
    fqdncache_entry *f = NULL;
    const struct hostent *hp = NULL;
    unsigned int ip;
    static char *static_name = NULL;

    if (!name)
	fatal_dump("fqdncache_gethostbyaddr: NULL name");
    FqdncacheStats.requests++;
    if ((f = fqdncache_get(name))) {
	if (f->status == FQDN_PENDING || f->status == FQDN_DISPATCHED) {
	    FqdncacheStats.pending_hits++;
	    return NULL;
	} else if (f->status == FQDN_NEGATIVE_CACHED) {
	    FqdncacheStats.negative_hits++;
	    dns_error_message = f->error_message;
