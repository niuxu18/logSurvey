 */

#include "squid.h"

#ifdef UNLINK_DAEMON

/* This is the external unlinkd process */

#define UNLINK_BUF_LEN 1024

int
main(int argc, char *argv[])
{
    char buf[UNLINK_BUF_LEN];
    char *t;
    int x;
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    close(2);
    open(_PATH_DEVNULL, O_RDWR);

    while (fgets(buf, UNLINK_BUF_LEN, stdin)) {
        if ((t = strchr(buf, '\n')))
            *t = '\0';
        x = unlink(buf);
        if (x < 0)
            printf("ERR\n");
        else
            printf("OK\n");
    }

    exit(0);
}

#else /* UNLINK_DAEMON */

#include "SquidTime.h"
#include "fde.h"
#include "xusleep.h"
