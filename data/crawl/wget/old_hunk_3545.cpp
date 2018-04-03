}

static int
cmd_spec_dotstyle (const char *com, const char *val, void *closure)
{
  /* Retrieval styles.  */
  if (!strcasecmp (val, "default"))
    {
      /* Default style: 1K dots, 10 dots in a cluster, 50 dots in a
	 line.  */
      opt.dot_bytes = 1024;
      opt.dot_spacing = 10;
      opt.dots_in_line = 50;
    }
  else if (!strcasecmp (val, "binary"))
    {
      /* "Binary" retrieval: 8K dots, 16 dots in a cluster, 48 dots
	 (384K) in a line.  */
      opt.dot_bytes = 8192;
      opt.dot_spacing = 16;
      opt.dots_in_line = 48;
    }
  else if (!strcasecmp (val, "mega"))
    {
      /* "Mega" retrieval, for retrieving very long files; each dot is
	 64K, 8 dots in a cluster, 6 clusters (3M) in a line.  */
      opt.dot_bytes = 65536L;
      opt.dot_spacing = 8;
      opt.dots_in_line = 48;
    }
  else if (!strcasecmp (val, "giga"))
    {
      /* "Giga" retrieval, for retrieving very very *very* long files;
	 each dot is 1M, 8 dots in a cluster, 4 clusters (32M) in a
	 line.  */
      opt.dot_bytes = (1L << 20);
      opt.dot_spacing = 8;
      opt.dots_in_line = 32;
    }
  else if (!strcasecmp (val, "micro"))
    {
      /* "Micro" retrieval, for retrieving very small files (and/or
	 slow connections); each dot is 128 bytes, 8 dots in a
	 cluster, 6 clusters (6K) in a line.  */
      opt.dot_bytes = 128;
      opt.dot_spacing = 8;
      opt.dots_in_line = 48;
    }
  else
    {
      fprintf (stderr, _("%s: %s: Invalid specification `%s'.\n"),
	       exec_name, com, val);
      return 0;
    }
  return 1;
}

static int
cmd_spec_header (const char *com, const char *val, void *closure)
{
  if (!*val)
