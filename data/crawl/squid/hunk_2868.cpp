 SQUIDCEXTERN const char *getMyHostname(void);
 SQUIDCEXTERN const char *uniqueHostname(void);
 SQUIDCEXTERN void safeunlink(const char *path, int quiet);
+
+#include "fatal.h"
 void death(int sig);
-SQUIDCEXTERN void fatal(const char *message);
-SQUIDCEXTERN void fatalf(const char *fmt,...) PRINTF_FORMAT_ARG1;
-SQUIDCEXTERN void fatal_dump(const char *message);
 void sigusr2_handle(int sig);
 void sig_child(int sig);
 SQUIDCEXTERN void leave_suid(void);
