    }

    HTTPMSGLOCK(urlres_r);
    urlres_r->header.putStr(HDR_ACCEPT, "text/plain");
}

void
