
            p->options.carp = 1;

        } else if (!strcasecmp(token, "userhash")) {
            if (p->type != PEER_PARENT)
                fatalf("parse_peer: non-parent userhash peer %s/%d\n", p->host, p->http_port);

            p->options.userhash = 1;

        } else if (!strcasecmp(token, "sourcehash")) {
            if (p->type != PEER_PARENT)
                fatalf("parse_peer: non-parent sourcehash peer %s/%d\n", p->host, p->http_port);

            p->options.sourcehash = 1;

#if DELAY_POOLS

        } else if (!strcasecmp(token, "no-delay")) {
