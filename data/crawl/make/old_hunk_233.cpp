void
pfatal_with_name (const char *name)
{
  fatal (NILF, _("%s: %s"), name, strerror (errno));

  /* NOTREACHED */
}
