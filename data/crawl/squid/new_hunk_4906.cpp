        virginSendClaim.protectAll();
    }

    const HttpRequest *request = virgin->data->cause ?
                                 virgin->data->cause :
                                 dynamic_cast<const HttpRequest*>(virgin->data->header);

    if (request->client_addr.s_addr != any_addr.s_addr)
        buf.Printf("X-Client-IP: %s\r\n", inet_ntoa(request->client_addr));

    if (request->auth_user_request)
        if (request->auth_user_request->username())
            buf.Printf("X-Client-Username: %s\r\n", request->auth_user_request->username());

    fprintf(stderr, "%s\n", buf.content());

    buf.append(ICAP::crlf, 2); // terminate ICAP header

    // start ICAP request body with encapsulated HTTP headers
