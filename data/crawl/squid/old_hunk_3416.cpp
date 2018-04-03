#ifdef DEBUG
#ifdef _SQUID_MSWIN_
    if (debug_enabled) {
	va_list args;

	va_start(args, format);
	fprintf(stderr, "%s[%d]: ", myname, mypid);
	vfprintf(stderr, format, args);
	fprintf(stderr, "\n");
	va_end(args);
	if (WIN32_ErrorMessage != NULL) {
	    LocalFree(WIN32_ErrorMessage);
	    WIN32_ErrorMessage = NULL;
	}
    }
#endif /* _SQUID_MSWIN_ */
#endif /* DEBUG */