static void
usage(char *program)
{
    fprintf(stderr, "Usage: %s -g group1 [-g group2 ...] [-p]\n\n",
	program);
    fprintf(stderr, "-g group\n");
    fprintf(stderr,
