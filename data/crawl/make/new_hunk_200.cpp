void
unload_file (const char *name)
{
  O (fatal, NILF, "INTERNAL: Cannot unload when load is not supported!");
}

#endif  /* MAKE_LOAD */
