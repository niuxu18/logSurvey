    storeAppendPrintf(e, "<h3>Short String Stats</h3>\n<p>%s\n</p>\n",
	memPoolReport(shortStrings));
    storeAppendPrintf(e, "<br><h3>Long String Stats</h3>\n");
    storeAppendPrintf(e, "\talive: %3d (%5.1f KB) high-water:  %3d (%5.1f KB)\n",
	longStrAliveCount, longStrAliveSize/1024.,
	longStrHighWaterCount, longStrHighWaterSize/1024.);
}

void
