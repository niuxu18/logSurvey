    return NULL;
}

static void
aclParseIntlist(void *curlist)
{
    intlist **Tail;
    intlist *q = NULL;
    char *t = NULL;

    for (Tail = (intlist **)curlist; *Tail; Tail = &((*Tail)->next))

        ;
    while ((t = strtokFile())) {
        q = (intlist *)memAllocate(MEM_INTLIST);
        q->i = atoi(t);
        *(Tail) = q;
        Tail = &q->next;
    }
}

static void
aclParseIntRange(void *curlist)
{
    intrange **Tail;
    intrange *q = NULL;
    char *t = NULL;

    for (Tail = (intrange **)curlist; *Tail; Tail = &((*Tail)->next))

        ;
    while ((t = strtokFile())) {
        q = (intrange *)xcalloc(1, sizeof(intrange));
        q->i = atoi(t);
        t = strchr(t, '-');

        if (t && *(++t))
            q->j = atoi(t);
        else
            q->j = q->i;

        *(Tail) = q;

        Tail = &q->next;
    }
}

static void
aclParseProtoList(void *curlist)
{
    intlist **Tail;
    intlist *q = NULL;
    char *t = NULL;
    protocol_t protocol;

    for (Tail = (intlist **)curlist; *Tail; Tail = &((*Tail)->next))

        ;
    while ((t = strtokFile())) {
        protocol = urlParseProtocol(t);
        q = (intlist *)memAllocate(MEM_INTLIST);
        q->i = (int) protocol;
        *(Tail) = q;
        Tail = &q->next;
    }
}

static void
aclParseMethodList(void *curlist)
{
    intlist **Tail;
    intlist *q = NULL;
    char *t = NULL;

    for (Tail = (intlist **)curlist; *Tail; Tail = &((*Tail)->next))

        ;
    while ((t = strtokFile())) {
        q = (intlist *)memAllocate(MEM_INTLIST);
        q->i = (int) urlParseMethod(t);
        *(Tail) = q;
        Tail = &q->next;
    }
}

void
aclParseRegexList(void *curlist)
{
    relist **Tail;
    relist *q = NULL;
    char *t = NULL;
    regex_t comp;
    int errcode;
    int flags = REG_EXTENDED | REG_NOSUB;

    for (Tail = (relist **)curlist; *Tail; Tail = &((*Tail)->next))

        ;
    while ((t = strtokFile())) {
        if (strcmp(t, "-i") == 0) {
            flags |= REG_ICASE;
            continue;
        }

        if (strcmp(t, "+i") == 0) {
            flags &= ~REG_ICASE;
            continue;
        }

        if ((errcode = regcomp(&comp, t, flags)) != 0) {
            char errbuf[256];
            regerror(errcode, &comp, errbuf, sizeof errbuf);
            debug(28, 0) ("%s line %d: %s\n",
                          cfg_filename, config_lineno, config_input_line);
            debug(28, 0) ("aclParseRegexList: Invalid regular expression '%s': %s\n",
                          t, errbuf);
            continue;
        }

        q = (relist *)memAllocate(MEM_RELIST);
        q->pattern = xstrdup(t);
        q->regex = comp;
        *(Tail) = q;
        Tail = &q->next;
    }
}

#if SQUID_SNMP
static void
aclParseWordList(void *curlist)
{
    char *t = NULL;

    while ((t = strtokFile()))
        wordlistAdd((wordlist **)curlist, t);
}

#endif

ACL *
ACL::Factory (char const *type)
{
    ACL *result = Prototype::Factory (type);

    if (result)
        return result;

    squid_acl const acltype = aclStrToType(type);

    switch (acltype) {

    case ACL_URL_PORT:

    case ACL_MY_PORT:

    case ACL_MAXCONN:

    case ACL_PROTO:

    case ACL_METHOD:

    case ACL_SRC_ASN:

    case ACL_DST_ASN:
#if SQUID_SNMP

    case ACL_SNMP_COMMUNITY:
#endif
#if SRC_RTT_NOT_YET_FINISHED

    case ACL_NETDB_SRC_RTT:
#endif
#if USE_ARP_ACL

    case ACL_SRC_ARP:
#endif

    case ACL_REP_MIME_TYPE:

    case ACL_MAX_USER_IP:

    case ACL_EXTERNAL:
        result = new ACL(acltype);
        break;

    case ACL_DERIVED:

    default:
        fatal ("Unknown acl type in ACL::Factory");
    };

    assert (result);

    return result;
}

ACL::ACL (squid_acl const acltype) : type (acltype)
{}

ACL::ACL () : type(ACL_NONE)
{}

char const *
ACL::typeString() const
{
    return aclTypeToStr(aclType());
}

void
ACL::ParseAclLine(acl ** head)
