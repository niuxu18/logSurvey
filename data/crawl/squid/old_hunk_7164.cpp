    storeAppendPrintf(sentry, close_bracket);
}

#if LOG_FULL_HEADERS
static const char c2x[] =
"000102030405060708090a0b0c0d0e0f"
"101112131415161718191a1b1c1d1e1f"
"202122232425262728292a2b2c2d2e2f"
"303132333435363738393a3b3c3d3e3f"
"404142434445464748494a4b4c4d4e4f"
"505152535455565758595a5b5c5d5e5f"
"606162636465666768696a6b6c6d6e6f"
"707172737475767778797a7b7c7d7e7f"
"808182838485868788898a8b8c8d8e8f"
"909192939495969798999a9b9c9d9e9f"
"a0a1a2a3a4a5a6a7a8a9aaabacadaeaf"
"b0b1b2b3b4b5b6b7b8b9babbbcbdbebf"
"c0c1c2c3c4c5c6c7c8c9cacbcccdcecf"
"d0d1d2d3d4d5d6d7d8d9dadbdcdddedf"
"e0e1e2e3e4e5e6e7e8e9eaebecedeeef"
"f0f1f2f3f4f5f6f7f8f9fafbfcfdfeff";

/* log_quote -- URL-style encoding on MIME headers. */

static char *
log_quote(const char *header)
{
    int c, i;
    char *buf, *buf_cursor;
    if (header == NULL) {
	buf = xcalloc(1, 1);
	*buf = '\0';
	return buf;
    }
    buf = xcalloc((strlen(header) * 3) + 1, 1);
    buf_cursor = buf;
    /*
     * We escape: \x00-\x1F"#%;<>?{}|\\\\^~`\[\]\x7F-\xFF 
     * which is the default escape list for the CPAN Perl5 URI module
     * modulo the inclusion of space (x40) to make the raw logs a bit
     * more readable.
     */
    while ((c = *(const unsigned char *) header++)) {
	if (c <= 0x1F
	    || c >= 0x7F
	    || c == '"'
	    || c == '#'
	    || c == '%'
	    || c == ';'
	    || c == '<'
	    || c == '>'
	    || c == '?'
	    || c == '{'
	    || c == '}'
	    || c == '|'
	    || c == '\\'
	    || c == '^'
	    || c == '~'
	    || c == '`'
	    || c == '['
	    || c == ']') {
	    *buf_cursor++ = '%';
	    i = c * 2;
	    *buf_cursor++ = c2x[i];
	    *buf_cursor++ = c2x[i + 1];
	} else {
	    *buf_cursor++ = c;
	}
    }
    *buf_cursor = '\0';
    return buf;
}
#endif /* LOG_FULL_HEADERS */


static void
log_append(const cacheinfo * obj,
    const char *url,
    struct in_addr caddr,
    int size,
    const char *action,
    const char *method,
    int http_code,
    int msec,
    const char *ident,
    const struct _hierarchyLogData *hierData,
#if LOG_FULL_HEADERS
    const char *request_hdr,
    const char *reply_hdr,
#endif				/* LOG_FULL_HEADERS */
    const char *content_type
)
{
#if LOG_FULL_HEADERS
    LOCAL_ARRAY(char, tmp, 10000);	/* MAX_URL is 4096 */
#else
    LOCAL_ARRAY(char, tmp, 6000);	/* MAX_URL is 4096 */
#endif /* LOG_FULL_HEADERS */
    int x;
    const char *client = NULL;
    hier_code hier_code = HIER_NONE;
    const char *hier_host = dash_str;
    int hier_timeout = 0;
#ifdef LOG_ICP_NUMBERS
    int ns = 0;
    int ne = 0;
    int nr = 0;
    int tt = 0;
#endif

    if (LogfileStatus != LOG_ENABLE)
	return;

    if (Config.Log.log_fqdn)
	client = fqdncache_gethostbyaddr(caddr, 0);
    if (client == NULL)
	client = inet_ntoa(caddr);
    if (!method)
	method = dash_str;
    if (!url)
	url = dash_str;
    if (!content_type || *content_type == '\0')
	content_type = dash_str;
    if (!ident || *ident == '\0')
	ident = dash_str;
    if (hierData) {
	hier_code = hierData->code;
	hier_host = hierData->host ? hierData->host : dash_str;
	hier_timeout = hierData->timeout;
#ifdef LOG_ICP_NUMBERS
	tt = hierData->delay;
	ns = hierData->n_sent;
	ne = hierData->n_expect;
	nr = hierData->n_recv;
#endif
    }
    if (Config.commonLogFormat)
	sprintf(tmp, "%s %s - [%s] \"%s %s\" %s:%s %d\n",
	    client,
	    ident,
	    mkhttpdlogtime(&squid_curtime),
	    method,
	    url,
	    action,
	    hier_strings[hier_code],
	    size);
    else
#ifdef LOG_ICP_NUMBERS
	sprintf(tmp, "%9d.%03d %6d %s %s/%03d %d %s %s %s %s%s/%s/%d/%d/%d/%d %s\n",
#else
	sprintf(tmp, "%9d.%03d %6d %s %s/%03d %d %s %s %s %s%s/%s %s\n",
#endif
	    (int) current_time.tv_sec,
	    (int) current_time.tv_usec / 1000,
	    msec,
	    client,
	    action,
	    http_code,
	    size,
	    method,
	    url,
	    ident,
	    hier_timeout ? "TIMEOUT_" : "",
	    hier_strings[hier_code],
	    hier_host,
#ifdef LOG_ICP_NUMBERS
	    ns, ne, nr, tt,
#endif
	    content_type);
#if LOG_FULL_HEADERS
    if (Config.logMimeHdrs) {
	int msize = strlen(tmp);
	char *ereq = log_quote(request_hdr);
	char *erep = log_quote(reply_hdr);

	if (msize + strlen(ereq) + strlen(erep) + 7 <= sizeof(tmp))
	    sprintf(tmp + msize - 1, " [%s] [%s]\n", ereq, erep);
	else
	    debug(18, 1) ("log_append: Long headers not logged.\n");
	safe_free(ereq);
	safe_free(erep);
    }
#endif /* LOG_FULL_HEADERS */
    x = file_write(LogfileFD,
	xstrdup(tmp),
	strlen(tmp),
	NULL,
	NULL,
	xfree);
    if (x != DISK_OK)
	debug(18, 1) ("log_append: File write failed.\n");
}

void
log_enable(StoreEntry * sentry)
{
    if (LogfileStatus == LOG_DISABLE) {
	LogfileStatus = LOG_ENABLE;
	/* open the logfile */
	LogfileFD = file_open(LogfileName, O_WRONLY | O_CREAT, NULL, NULL);
	if (LogfileFD == DISK_ERROR) {
	    debug(18, 0) ("Cannot open logfile: %s\n", LogfileName);
	    LogfileStatus = LOG_DISABLE;
	}
    }
}

void
log_disable(StoreEntry * sentry)
{
    if (LogfileStatus == LOG_ENABLE)
	file_close(LogfileFD);
    LogfileStatus = LOG_DISABLE;
}

void
log_clear(StoreEntry * sentry)
{
    /* what should be done here. Erase file ??? or move it to another name?  At the moment, just erase it.  bug here need to be fixed. what if there are still data in memory. Need flush here */
    if (LogfileStatus == LOG_ENABLE)
	file_close(LogfileFD);
    unlink(LogfileName);
    /* reopen it anyway */
    LogfileFD = file_open(LogfileName, O_WRONLY | O_CREAT, NULL, NULL);
    if (LogfileFD == DISK_ERROR) {
	debug(18, 0) ("Cannot open logfile: %s\n", LogfileName);
	LogfileStatus = LOG_DISABLE;
    }
    /* at the moment, store one char to make a storage manager happy */
    storeAppendPrintf(sentry, " ");
}



static void
proto_newobject(cacheinfo * obj, protocol_t proto_id, int size, int restart)
{
