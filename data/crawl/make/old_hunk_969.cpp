  else if (!noexist && file->is_target && !deps_changed && file->cmds == 0)
    {
      must_make = 0;
      DBF (DB_EXTRA,
           _("No commands for `%s' and no prerequisites actually changed.\n"));
    }

  if (!must_make)
    {
      if (ISDB (DB_EXTRA))
        {
          print_spaces (depth);
          printf (_("No need to remake target `%s'"), file->name);
