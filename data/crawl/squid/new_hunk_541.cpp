                              conn->clientConnection->remote.toUrl(buf,MAX_IPSTRLEN));
            storeAppendPrintf(s, "\tlocal: %s\n",
                              conn->clientConnection->local.toUrl(buf,MAX_IPSTRLEN));
            storeAppendPrintf(s, "\tnrequests: %u\n", conn->pipeline.nrequests);
        }

        storeAppendPrintf(s, "uri %s\n", http->uri);