    storeAppendPrintf(sentry, "Squid Object Cache: Version %s\n",
                      version_string);

#if _SQUID_WINDOWS_
    if (WIN32_run_mode == _WIN_SQUID_RUN_MODE_SERVICE) {
        storeAppendPrintf(sentry,"\nRunning as %s Windows System Service on %s\n",
                          WIN32_Service_name, WIN32_OS_string);
        storeAppendPrintf(sentry,"Service command line is: %s\n", WIN32_Service_Command_Line);
    } else
        storeAppendPrintf(sentry,"Running on %s\n",WIN32_OS_string);
#endif

    storeAppendPrintf(sentry, "Start Time:\t%s\n",
