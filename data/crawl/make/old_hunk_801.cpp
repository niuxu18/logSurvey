  else
    if (starting_directory == 0)
      if (entering)
        printf (_("%s[%u]: Entering an unknown directory"),
                program, makelevel);
      else
        printf (_("%s[%u]: Leaving an unknown directory"),
                program, makelevel);
    else
      if (entering)
