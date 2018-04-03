#ifdef _SQUID_SOLARIS_
    leave_suid();
#endif
    fprintf(debug_log, "CPU Usage: user %d sys %d\n",
	(int) rusage.ru_utime.tv_sec, (int) rusage.ru_stime.tv_sec);
#if defined(_SQUID_SGI_) || defined(_SQUID_OSF_) || defined(BSD4_4)
    fprintf(debug_log, "Maximum Resident Size: %ld KB\n", rusage.ru_maxrss);
#else /* _SQUID_SGI_ */
    fprintf(debug_log, "Maximum Resident Size: %ld KB\n",
	(rusage.ru_maxrss * getpagesize()) >> 10);
#endif /* _SQUID_SGI_ */
    fprintf(debug_log, "Page faults with physical i/o: %ld\n",
	rusage.ru_majflt);
#endif /* HAVE_GETRUSAGE */
}

void
