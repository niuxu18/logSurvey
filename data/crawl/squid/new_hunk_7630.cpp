{
    struct _ip_pending *pending = xcalloc(1, sizeof(struct _ip_pending));
    struct _ip_pending **I = NULL;
    i->lastref = squid_curtime;
    pending->fd = fd;
    pending->handler = handler;
    pending->handlerData = handlerData;
    for (I = &(i->pending_head); *I; I = &((*I)->next));
    *I = pending;
}

void ipcache_nbgethostbyname(name, fd, handler, handlerData)
     char *name;
     int fd;
     IPH handler;
     void *handlerData;
{
    ipcache_entry *i = NULL;
    dnsserver_t *dnsData = NULL;
    struct hostent *hp = NULL;

    if (!handler)
	fatal_dump("ipcache_nbgethostbyname: NULL handler");
