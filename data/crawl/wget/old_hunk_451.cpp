{
  char *copy;
  BOUNDED_TO_ALLOCA(b, e, copy);
  logprintf (LOG_ALWAYS, "%s%s\n", prefix, 
             quotearg_style (escape_quoting_style, copy));
}

