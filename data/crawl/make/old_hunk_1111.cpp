    case cs_running:
      c->next = children;
      if (debug_flag)
	printf ("Putting child 0x%08lx (%s) PID %ld token %c%s on the chain.\n",
		(unsigned long int) c, c->file->name,
                (long) c->pid, c->job_token,
                c->remote ? " (remote)" : "");
      children = c;
      /* One more job slot is in use.  */
      ++job_slots_used;