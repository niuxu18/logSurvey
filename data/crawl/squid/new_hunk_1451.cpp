        else {
            /* use port# only if not default */

            if (request->port == urlDefaultPort(request->url.getScheme())) {
                hdr_out->putStr(HDR_HOST, request->GetHost());
            } else {
                httpHeaderPutStrf(hdr_out, HDR_HOST, "%s:%d",
