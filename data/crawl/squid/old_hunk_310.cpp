    swaplog_fd = file_open(logPath, O_WRONLY | O_CREAT | O_BINARY);

    if (swaplog_fd < 0) {
        debugs(50, DBG_IMPORTANT, "ERROR opening swap log " << logPath << ": " << xstrerror());
        fatal("UFSSwapDir::openLog: Failed to open swap log.");
    }

