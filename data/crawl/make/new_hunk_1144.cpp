    printf ("%s[%u]: %s ", program, makelevel, msg);

  if (starting_directory == 0)
    puts (_("an unknown directory"));
  else
    printf (_("directory `%s'\n"), starting_directory);
}
