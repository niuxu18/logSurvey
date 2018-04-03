            req->action = xstrdup(q);
    }

    if (req->server && !req->hostname) {
        char *p;
        req->hostname = strtok(req->server, ":");

        if ((p = strtok(NULL, ":")))
            req->port = atoi(p);
    }

    make_pub_auth(req);
    debug(1) fprintf(stderr, "cmgr: got req: host: '%s' port: %d uname: '%s' passwd: '%s' auth: '%s' oper: '%s'\n",
                     safe_str(req->hostname), req->port, safe_str(req->user_name), safe_str(req->passwd), safe_str(req->pub_auth), safe_str(req->action));
