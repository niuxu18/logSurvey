      g = goals;
      while (g != 0)
	{
	  unsigned int ocommands_started;
	  int x;
	  time_t mtime = MTIME (g->file);
	  check_renamed (g->file);

	  if (makefiles)
	    {
	      if (g->file->cmd_target)
		{
		  touch_flag = t;
		  question_flag = q;
		  just_print_flag = n;
		}
	      else
		touch_flag = question_flag = just_print_flag = 0;
	    }

	  /* Save the old value of `commands_started' so we can compare later.
	     It will be incremented when any commands are actually run.  */
	  ocommands_started = commands_started;

	  x = update_file (g->file, makefiles ? 1 : 0);
	  check_renamed (g->file);

	  /* Set the goal's `changed' flag if any commands were started
	     by calling update_file above.  We check this flag below to
	     decide when to give an "up to date" diagnostic.  */
	  g->changed += commands_started - ocommands_started;

	  if (x != 0 || g->file->updated)
	    {
	      int stop = 0;

	      /* If STATUS was not already 1, set it to 1 if
		 updating failed, or to 0 if updating succeeded.
		 Leave STATUS as it is if no updating was done.  */

	      if (status < 1)
		{
		  if (g->file->update_status != 0)
		    {
		      /* Updating failed.  */
		      status = 1;
		      stop = !keep_going_flag && !makefiles;
		    }
		  else if (MTIME (g->file) != mtime)
		    {
		      /* Updating was done.
			 If this is a makefile and just_print_flag or
			 question_flag is set (meaning -n or -q was given
			 and this file was specified as a command-line target),
			 don't change STATUS.  If STATUS is changed, we will
			 get re-exec'd, and fall into an infinite loop.  */
		      if (!makefiles || (!just_print_flag && !question_flag))
			status = 0;
		      if (makefiles && g->file->dontcare)
			/* This is a default makefile.  Stop remaking.  */
			stop = 1;
		    }
		}

	      if (stop || g->file->prev == 0)
		{
		  /* If we have found nothing whatever to do for the goal,
		     print a message saying nothing needs doing.  */

		  if (!makefiles
		      /* If the update_status is zero, we updated successfully
			 or not at all.  G->changed will have been set above if
			 any commands were actually started for this goal.  */
		      && g->file->update_status == 0 && !g->changed
		      /* Never give a message under -s or -q.  */
		      && !silent_flag && !question_flag)
		    {
		      if (g->file->phony || g->file->cmds == 0)
			message ("Nothing to be done for `%s'.",
				 g->file->name);
		      else
			message ("`%s' is up to date.", g->file->name);
		      fflush (stdout);
		    }

		  /* This goal is finished.  Remove it from the chain.  */
		  if (lastgoal == 0)
		    goals = g->next;
		  else
		    lastgoal->next = g->next;

		  /* Free the storage.  */
		  free ((char *) g);

		  g = lastgoal == 0 ? goals : lastgoal->next;
		}
	      else if (g->file->updated)
		/* This instance of the target is done being updated.
		   Go to the next instance (:: rule).
		   update_file cycles through all instances, but under -j,
		   update_file can return while the file is running,
		   then reap_children can change its command state and
		   updated flag, leaving G->file done, but some of its
		   other instances needing work.  */
		g->file = g->file->prev;

	      if (stop)
		break;