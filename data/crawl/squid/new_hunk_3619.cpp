
SQUIDCEXTERN int debug_enabled;

#define debug(X...) \
                     if (debug_enabled) { \
                         fprintf(stderr, "%s(%d): pid=%ld :", __FILE__, __LINE__, (long)getpid() ); \
                         fprintf(stderr,X); \
