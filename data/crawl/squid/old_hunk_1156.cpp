        callback(data, nilReply);
        return;
    }

    Helper::Request *r = new Helper::Request(callback, data, buf);
    helper_server *srv;

    if ((srv = GetFirstAvailable(hlp)))
        helperDispatch(srv, r);
    else
        Enqueue(hlp, r);

    debugs(84, DBG_DATA, Raw("buf", buf, strlen(buf)));
}

/// lastserver = "server last used as part of a reserved request sequence"
