            __attribute__ ((__format__ (__printf__, 2, 3)));
void fatal (const gmk_floc *flocp, const char *fmt, ...)
                   __attribute__ ((noreturn, __format__ (__printf__, 2, 3)));

void die (int) __attribute__ ((noreturn));
void log_working_directory (int, int);