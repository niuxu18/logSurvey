        return;

    default:
        fatal("Hit unreachable code in Http::StreamContext::writeComplete\n");
    }
}

Http::StreamContext *
ConnStateData::abortRequestParsing(const char *const uri)
{
    ClientHttpRequest *http = new ClientHttpRequest(this);
    http->req_sz = inBuf.length();
    http->uri = xstrdup(uri);
    setLogUri (http, uri);
    auto *context = new Http::StreamContext(clientConnection, http);
    StoreIOBuffer tempBuffer;
    tempBuffer.data = context->reqbuf;
    tempBuffer.length = HTTP_REQBUF_SZ;