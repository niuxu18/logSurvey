  double byte_value;
  if (!parse_bytes_helper (val, &byte_value))
    {
      fprintf (stderr, _("%s: %s: Invalid byte value `%s'\n"),
               exec_name, com, val);
      return false;
    }
  *(SUM_SIZE_INT *) place = (SUM_SIZE_INT) byte_value;