    return 0;
}

/*
 * returns true if If-Range specs match reply, false otherwise
 */
static int
clientIfRangeMatch(clientHttpRequest * http, HttpReply * rep)
{
    const TimeOrTag spec = httpHeaderGetTimeOrTag(&http->request->header, HDR_IF_RANGE);
    /* check for parsing falure */
    if (!spec.valid)
	return 0;
    /* got an ETag? */
    if (spec.tag.str) {
	ETag rep_tag = httpHeaderGetETag(&rep->header, HDR_ETAG);
	debug(33, 3) ("clientIfRangeMatch: ETags: %s and %s\n",
	    spec.tag.str, rep_tag.str ? rep_tag.str : "<none>");
	if (!rep_tag.str)
	    return 0;		/* entity has no etag to compare with! */
	if (spec.tag.weak || rep_tag.weak) {
	    debug(33, 1) ("clientIfRangeMatch: Weak ETags are not allowed in If-Range: %s ? %s\n",
		spec.tag.str, rep_tag.str);
	    return 0;		/* must use strong validator for sub-range requests */
	}
	return etagIsEqual(&rep_tag, &spec.tag);
    }
    /* got modification time? */
    if (spec.time >= 0) {
	return http->entry->lastmod <= spec.time;
    }
    assert(0);			/* should not happen */
    return 0;
}

/* returns expected content length for multi-range replies
 * note: assumes that httpHdrRangeCanonize has already been called
 * warning: assumes that HTTP headers for individual ranges at the
 *          time of the actuall assembly will be exactly the same as
 *          the headers when clientMRangeCLen() is called */
static int
clientMRangeCLen(clientHttpRequest * http)
{
    int clen = 0;
    HttpHdrRangePos pos = HttpHdrRangeInitPos;
    const HttpHdrRangeSpec *spec;
    MemBuf mb;

    assert(http->entry->mem_obj);

    memBufDefInit(&mb);
    while ((spec = httpHdrRangeGetSpec(http->request->range, &pos))) {

	/* account for headers for this range */
	memBufReset(&mb);
	clientPackRangeHdr(http->entry->mem_obj->reply,
	    spec, http->range_iter.boundary, &mb);
	clen += mb.size;

	/* account for range content */
	clen += spec->length;

	debug(33, 6) ("clientMRangeCLen: (clen += %ld + %ld) == %d\n",
	    (long int) mb.size, (long int) spec->length, clen);
    }
    /* account for the terminating boundary */
    memBufReset(&mb);
    clientPackTermBound(http->range_iter.boundary, &mb);
    clen += mb.size;

    memBufClean(&mb);
    return clen;
}

/* adds appropriate Range headers if needed */
static void
clientBuildRangeHeader(clientHttpRequest * http, HttpReply * rep)
{
    HttpHeader *hdr = rep ? &rep->header : 0;
    const char *range_err = NULL;
    request_t *request = http->request;
    int is_hit = isTcpHit(http->log_type);
    assert(request->range);
    /* check if we still want to do ranges */
    if (!rep)
	range_err = "no [parse-able] reply";
    else if (rep->sline.status != HTTP_OK)
	range_err = "wrong status code";
    else if (httpHeaderHas(hdr, HDR_CONTENT_RANGE))
	range_err = "origin server does ranges";
    else if (rep->content_length < 0)
	range_err = "unknown length";
    else if (rep->content_length != http->entry->mem_obj->reply->content_length)
	range_err = "INCONSISTENT length";	/* a bug? */
    else if (httpHeaderHas(&http->request->header, HDR_IF_RANGE) && !clientIfRangeMatch(http, rep))
	range_err = "If-Range match failed";
    else if (!httpHdrRangeCanonize(http->request->range, rep->content_length))
	range_err = "canonization failed";
    else if (httpHdrRangeIsComplex(http->request->range))
	range_err = "too complex range header";
    else if (!request->flags.cachable)	/* from we_do_ranges in http.c */
	range_err = "non-cachable request";
    else if (!is_hit && httpHdrRangeOffsetLimit(http->request->range))
	range_err = "range outside range_offset_limit";
    /* get rid of our range specs on error */
    if (range_err) {
	debug(33, 3) ("clientBuildRangeHeader: will not do ranges: %s.\n", range_err);
	httpHdrRangeDestroy(http->request->range);
	http->request->range = NULL;
    } else {
	const int spec_count = http->request->range->specs.count;
	int actual_clen = -1;

	debug(33, 3) ("clientBuildRangeHeader: range spec count: %d virgin clen: %d\n",
	    spec_count, rep->content_length);
	assert(spec_count > 0);
	/* ETags should not be returned with Partial Content replies? */
	httpHeaderDelById(hdr, HDR_ETAG);
	/* append appropriate header(s) */
	if (spec_count == 1) {
	    HttpHdrRangePos pos = HttpHdrRangeInitPos;
	    const HttpHdrRangeSpec *spec = httpHdrRangeGetSpec(http->request->range, &pos);
	    assert(spec);
	    /* append Content-Range */
	    httpHeaderAddContRange(hdr, *spec, rep->content_length);
	    /* set new Content-Length to the actual number of bytes
	     * transmitted in the message-body */
	    actual_clen = spec->length;
	} else {
	    /* multipart! */
	    /* generate boundary string */
	    http->range_iter.boundary = httpHdrRangeBoundaryStr(http);
	    /* delete old Content-Type, add ours */
	    httpHeaderDelById(hdr, HDR_CONTENT_TYPE);
	    httpHeaderPutStrf(hdr, HDR_CONTENT_TYPE,
		"multipart/byteranges; boundary=\"%s\"",
		strBuf(http->range_iter.boundary));
	    /* Content-Length is not required in multipart responses
	     * but it is always nice to have one */
	    actual_clen = clientMRangeCLen(http);
	}

	/* replace Content-Length header */
	assert(actual_clen >= 0);
	httpHeaderDelById(hdr, HDR_CONTENT_LENGTH);
	httpHeaderPutInt(hdr, HDR_CONTENT_LENGTH, actual_clen);
	debug(33, 3) ("clientBuildRangeHeader: actual content length: %d\n", actual_clen);
    }
}

/*
 * filters out unwanted entries from original reply header
