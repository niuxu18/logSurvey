    }
    storeAppendPrintf(e, "<HR>\n");
    storeAppendPrintf(e, "<ADDRESS>\n");
    storeAppendPrintf(e, "Generated %s by %s (<a href=\"http://squid.nlanr.net/Squid/\">%s</a>)\n",
	mkrfc1123(squid_curtime),
	getMyHostname(),
	full_appname_string,
	version_string);
    storeAppendPrintf(e, "</ADDRESS></BODY></HTML>\n");
    storeBufferFlush(e);
}