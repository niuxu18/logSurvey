  int ln;
  int errcnt = 0;

  fp = fopen (file, "rb");
  if (!fp)
    {
      fprintf (stderr, _("%s: Cannot read %s (%s).\n"), exec_name,
