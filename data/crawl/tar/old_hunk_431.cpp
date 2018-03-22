  sprintf (buffer, "%s/%s", path, name);
  return buffer;
}

/* Excludes names.  */

static char *exclude_pool = NULL;
static size_t exclude_pool_size = 0;
static size_t allocated_exclude_pool_size = 0;

static char **simple_exclude_array = NULL;
static int simple_excludes = 0;
static int allocated_simple_excludes = 0;

static char **pattern_exclude_array = NULL;
static int pattern_excludes = 0;
static int allocated_pattern_excludes = 0;

/*---.
| ?  |
`---*/

void
add_exclude (char *name)
{
  size_t name_size;

  unquote_string (name);	/* FIXME: unquote in all cases?  If ever? */
  name_size = strlen (name) + 1;

  if (exclude_pool_size + name_size > allocated_exclude_pool_size)
    {
      char *previous_exclude_pool = exclude_pool;
      char **cursor;

      allocated_exclude_pool_size = exclude_pool_size + name_size + 1024;
      exclude_pool = (char *)
	xrealloc (exclude_pool, allocated_exclude_pool_size);

      for (cursor = simple_exclude_array;
	   cursor < simple_exclude_array + simple_excludes;
	   cursor++)
	*cursor = exclude_pool + (*cursor - previous_exclude_pool);
      for (cursor = pattern_exclude_array;
	   cursor < pattern_exclude_array + pattern_excludes;
	   cursor++)
	*cursor = exclude_pool + (*cursor - previous_exclude_pool);
    }

  if (is_pattern (name))
    {
      if (pattern_excludes == allocated_pattern_excludes)
	{
	  allocated_pattern_excludes += 32;
	  pattern_exclude_array = (char **)
	    xrealloc (pattern_exclude_array,
		      allocated_pattern_excludes * sizeof (char *));
	}
      pattern_exclude_array[pattern_excludes++]
	= exclude_pool + exclude_pool_size;
    }
  else
    {
      if (simple_excludes == allocated_simple_excludes)
	{
	  allocated_simple_excludes += 32;
	  simple_exclude_array = (char **)
	    xrealloc (simple_exclude_array,
		      allocated_simple_excludes * sizeof (char *));
	}
      simple_exclude_array[simple_excludes++]
	= exclude_pool + exclude_pool_size;
    }

  strcpy (exclude_pool + exclude_pool_size, name);
  exclude_pool_size += name_size;
}

/*---.
| ?  |
`---*/

void
add_exclude_file (const char *name)
{
  FILE *file;
  char buffer[1024];

  if (strcmp (name, "-"))
    file = fopen (name, "r");
  else
    {
      request_stdin ("-X");
      file = stdin;
    }
  if (!file)
    FATAL_ERROR ((0, errno, _("Cannot open %s"), name));

  while (fgets (buffer, 1024, file))
    {
      char *end_of_line = strrchr (buffer, '\n');

      if (end_of_line)
	*end_of_line = '\0';
      add_exclude (buffer);
    }
  if (fclose (file) == EOF)
    ERROR ((0, errno, "%s", name));
}

/*------------------------------------------------------------------.
| Returns true if the file NAME should not be added nor extracted.  |
`------------------------------------------------------------------*/

int
check_exclude (const char *name)
{
  int counter;

  for (counter = 0; counter < pattern_excludes; counter++)
    if (fnmatch (pattern_exclude_array[counter], name, FNM_LEADING_DIR) == 0)
      return 1;

  for (counter = 0; counter < simple_excludes; counter++)
    {
      /* Accept the output from strstr only if it is the last part of the
	 string.  FIXME: Find a faster way to do this.  */

      char *string = strstr (name, simple_exclude_array[counter]);

      if (string
	  && (string == name || string[-1] == '/')
	  && string[strlen (simple_exclude_array[counter])] == '\0')
	return 1;
    }
  return 0;
}