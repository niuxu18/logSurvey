{
    int i;

    storeAppendPrintf(sentry, open_bracket);
    storeAppendPrintf(sentry, "{HTTP I/O}\n");
    storeAppendPrintf(sentry, "{number of reads: %d}\n", IOStats.Http.reads);
    storeAppendPrintf(sentry, "{deferred reads: %d (%d%%)}\n",
	IOStats.Http.reads_deferred,
	percent(IOStats.Http.reads_deferred, IOStats.Http.reads));
    storeAppendPrintf(sentry, "{Read Histogram:}\n");
    for (i = 0; i < 16; i++) {
	storeAppendPrintf(sentry, "{%5d-%5d: %9d %2d%%}\n",
	    i ? (1 << (i - 1)) + 1 : 1,
	    1 << i,
	    IOStats.Http.read_hist[i],
	    percent(IOStats.Http.read_hist[i], IOStats.Http.reads));
    }

    storeAppendPrintf(sentry, "{}\n");
    storeAppendPrintf(sentry, "{FTP I/O}\n");
    storeAppendPrintf(sentry, "{number of reads: %d}\n", IOStats.Ftp.reads);
    storeAppendPrintf(sentry, "{deferred reads: %d (%d%%)}\n",
	IOStats.Ftp.reads_deferred,
	percent(IOStats.Ftp.reads_deferred, IOStats.Ftp.reads));
    storeAppendPrintf(sentry, "{Read Histogram:}\n");
    for (i = 0; i < 16; i++) {
	storeAppendPrintf(sentry, "{%5d-%5d: %9d %2d%%}\n",
	    i ? (1 << (i - 1)) + 1 : 1,
	    1 << i,
	    IOStats.Ftp.read_hist[i],
	    percent(IOStats.Ftp.read_hist[i], IOStats.Ftp.reads));
    }

    storeAppendPrintf(sentry, "{}\n");
    storeAppendPrintf(sentry, "{Gopher I/O}\n");
    storeAppendPrintf(sentry, "{number of reads: %d}\n", IOStats.Gopher.reads);
    storeAppendPrintf(sentry, "{deferred reads: %d (%d%%)}\n",
	IOStats.Gopher.reads_deferred,
	percent(IOStats.Gopher.reads_deferred, IOStats.Gopher.reads));
    storeAppendPrintf(sentry, "{Read Histogram:}\n");
    for (i = 0; i < 16; i++) {
	storeAppendPrintf(sentry, "{%5d-%5d: %9d %2d%%}\n",
	    i ? (1 << (i - 1)) + 1 : 1,
	    1 << i,
	    IOStats.Gopher.read_hist[i],
	    percent(IOStats.Gopher.read_hist[i], IOStats.Gopher.reads));
    }

    storeAppendPrintf(sentry, "{}\n");
    storeAppendPrintf(sentry, "{WAIS I/O}\n");
    storeAppendPrintf(sentry, "{number of reads: %d}\n", IOStats.Wais.reads);
    storeAppendPrintf(sentry, "{deferred reads: %d (%d%%)}\n",
	IOStats.Wais.reads_deferred,
	percent(IOStats.Wais.reads_deferred, IOStats.Wais.reads));
    storeAppendPrintf(sentry, "{Read Histogram:}\n");
    for (i = 0; i < 16; i++) {
	storeAppendPrintf(sentry, "{%5d-%5d: %9d %2d%%}\n",
	    i ? (1 << (i - 1)) + 1 : 1,
	    1 << i,
	    IOStats.Wais.read_hist[i],
	    percent(IOStats.Wais.read_hist[i], IOStats.Wais.reads));
    }

    storeAppendPrintf(sentry, close_bracket);
}

static const char *