  } while (0)

#define print_to_socket(fh, ...) \
  if (fprintf (fh, __VA_ARGS__) < 0) { \
    char errbuf[1024]; \
    WARNING ("handle_listval: failed to write to socket #%i: %s", \
	fileno (fh), sstrerror (errno, errbuf, sizeof (errbuf))); \
    free_everything_and_return (-1); \
  } \
  fflush(fh);

int handle_listval (FILE *fh, char *buffer)
{
