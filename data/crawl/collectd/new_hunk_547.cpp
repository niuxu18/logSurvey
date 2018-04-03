    memcpy(&us, buf + 10, 2);
    qh.arcount = ntohs(us);

    offset = 12;
    memset(qh.qname, '\0', MAX_QNAME_SZ);
    x = rfc1035NameUnpack(buf, len, &offset, qh.qname, MAX_QNAME_SZ);
    if (0 != x)
	return 0;
    if ('\0' == qh.qname[0])
	strcpy(qh.qname, ".");
    while ((t = strchr(qh.qname, '\n')))
	*t = ' ';
    while ((t = strchr(qh.qname, '\r')))
	*t = ' ';
    for (t = qh.qname; *t; t++)
	*t = tolower(*t);

    memcpy(&us, buf + offset, 2);
    qh.qtype = ntohs(us);
    memcpy(&us, buf + offset + 2, 2);
    qh.qclass = ntohs(us);

    qh.length = (uint16_t) len;

    /* gather stats */
    qtype_counts[qh.qtype]++;
    qclass_counts[qh.qclass]++;
    opcode_counts[qh.opcode]++;

    if (Callback != NULL)
	    Callback (&qh);

    return 1;
}

static int
handle_udp(const struct udphdr *udp, int len,
	const struct in6_addr *s_addr,
	const struct in6_addr *d_addr)
{
    char buf[PCAP_SNAPLEN];
    if ((ntohs (udp->uh_dport) != 53)
		    && (ntohs (udp->uh_sport) != 53))
	return 0;
    memcpy(buf, udp + 1, len - sizeof(*udp));
    if (0 == handle_dns(buf, len - sizeof(*udp), s_addr, d_addr))
	return 0;
    return 1;
}

static int
handle_ipv6 (struct ip6_hdr *ipv6, int len)
{
    char buf[PCAP_SNAPLEN];
    int offset;
    int nexthdr;

    struct in6_addr s_addr;
    struct in6_addr d_addr;
    uint16_t payload_len;

    offset = sizeof (struct ip6_hdr);
    nexthdr = ipv6->ip6_nxt;
    s_addr = ipv6->ip6_src;
    d_addr = ipv6->ip6_dst;
    payload_len = ntohs (ipv6->ip6_plen);

    if (ignore_list_match (&s_addr))
	    return (0);

    /* Parse extension headers. This only handles the standard headers, as
     * defined in RFC 2460, correctly. Fragments are discarded. */
    while ((IPPROTO_ROUTING == nexthdr) /* routing header */
	    || (IPPROTO_HOPOPTS == nexthdr) /* Hop-by-Hop options. */
	    || (IPPROTO_FRAGMENT == nexthdr) /* fragmentation header. */
	    || (IPPROTO_DSTOPTS == nexthdr) /* destination options. */
	    || (IPPROTO_DSTOPTS == nexthdr) /* destination options. */
	    || (IPPROTO_AH == nexthdr) /* destination options. */
	    || (IPPROTO_ESP == nexthdr)) /* encapsulating security payload. */
    {
	struct ip6_ext ext_hdr;
	uint16_t ext_hdr_len;

	/* Catch broken packets */
	if ((offset + sizeof (struct ip6_ext)) > len)
	    return (0);

	/* Cannot handle fragments. */
	if (IPPROTO_FRAGMENT == nexthdr)
	    return (0);

	memcpy (&ext_hdr, (char *) ipv6 + offset, sizeof (struct ip6_ext));
	nexthdr = ext_hdr.ip6e_nxt;
	ext_hdr_len = (8 * (ntohs (ext_hdr.ip6e_len) + 1));

	/* This header is longer than the packets payload.. WTF? */
	if (ext_hdr_len > payload_len)
	    return (0);

	offset += ext_hdr_len;
	payload_len -= ext_hdr_len;
    } /* while */

    /* Catch broken and empty packets */
    if (((offset + payload_len) > len)
	    || (payload_len == 0)
	    || (payload_len > PCAP_SNAPLEN))
	return (0);

    if (IPPROTO_UDP != nexthdr)
	return (0);

    memcpy (buf, (char *) ipv6 + offset, payload_len);
    if (handle_udp ((struct udphdr *) buf, payload_len, &s_addr, &d_addr) == 0)
	return (0);

    return (1); /* Success */
} /* int handle_ipv6 */

static int
handle_ip(const struct ip *ip, int len)
{
    char buf[PCAP_SNAPLEN];
    int offset = ip->ip_hl << 2;
    struct in6_addr s_addr;
    struct in6_addr d_addr;

    if (ip->ip_v == 6)
	return (handle_ipv6 ((struct ip6_hdr *) ip, len));

    in6_addr_from_buffer (&s_addr, &ip->ip_src.s_addr, sizeof (ip->ip_src.s_addr), AF_INET);
    in6_addr_from_buffer (&d_addr, &ip->ip_dst.s_addr, sizeof (ip->ip_dst.s_addr), AF_INET);
    if (ignore_list_match (&s_addr))
	    return (0);
    if (IPPROTO_UDP != ip->ip_p)
	return 0;
    memcpy(buf, (void *) ip + offset, len - offset);
    if (0 == handle_udp((struct udphdr *) buf, len - offset, &s_addr, &d_addr))
	return 0;
    return 1;
}

static int
handle_ppp(const u_char * pkt, int len)
{
