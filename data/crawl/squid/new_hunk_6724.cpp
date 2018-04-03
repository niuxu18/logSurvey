    assert(l);
    switch (which) {
    case HTTP_SVC:
	x = statHistDeltaMedian(&l->client_http.all_svc_time, &f->client_http.all_svc_time);
	break;
    case ICP_SVC:
	x = statHistDeltaMedian(&l->icp.query_svc_time, &f->icp.query_svc_time);
	break;
    case DNS_SVC:
	x = statHistDeltaMedian(&l->dns.svc_time, &f->dns.svc_time);
	break;
    default:
	debug(49, 5) ("get_median_val: unknown type.\n");
	x = 0;
    }
    return (int) x;
}
