          if (size >= FMT_MAX_LENGTH)  /* We have a huge buffer, */
            {                          /* maybe we have some wrong format string? */
              free (str);              /* In this case we must free already allocated memory, */
              return NULL;             /* and return NULL pointer... */
            }
                                       /* else, we continue to grow our buffer. */
          size <<= 1;                  /* twice the old size */
src/ChangeLog |  7 +++++++
src/utils.c   | 26 ++++++++++++++------------
2 files changed, 21 insertions(+), 12 deletions(-)
