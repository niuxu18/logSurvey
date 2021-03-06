    getrusage(RUSAGE_SELF, &rusage);
    fprintf(lf, "CPU Usage: user %d sys %d\n",
	(int) rusage.ru_utime.tv_sec, (int) rusage.ru_stime.tv_sec);
#if defined(_SQUID_SGI_) || defined(_SQUID_OSF_) || defined(BSD4_4)
    fprintf(lf, "Maximum Resident Size: %ld KB\n", rusage.ru_maxrss);
#else /* _SQUID_SGI_ */
    fprintf(lf, "Maximum Resident Size: %ld KB\n",
	(rusage.ru_maxrss * getpagesize()) >> 10);
#endif /* _SQUID_SGI_ */
    fprintf(lf, "Page faults with physical i/o: %ld\n",