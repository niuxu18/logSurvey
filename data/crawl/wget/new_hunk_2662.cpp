
char *strdupdelim (const char *, const char *);
char **sepstring (const char *);
bool subdir_p (const char *, const char *);
void fork_to_background (void);

char *aprintf (const char *, ...) GCC_FORMAT_ATTR (1, 2);
