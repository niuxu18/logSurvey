		  /* Never give a message under -s or -q.  */
		  && !silent_flag && !question_flag)
		message (1, ((file->phony || file->cmds == 0)
			     ? _("Nothing to be done for `%s'.")
			     : _("`%s' is up to date.")),
			 file->name);

	      /* This goal is finished.  Remove it from the chain.  */
