  decode_switches (argc, argv, 0);

#ifdef WINDOWS32
  if (suspend_flag)
    {
      fprintf (stderr, "%s (pid = %ld)\n", argv[0], GetCurrentProcessId ());
      fprintf (stderr, _("%s is suspending for 30 seconds..."), argv[0]);
      Sleep (30 * 1000);
      fprintf (stderr, _("done sleep(30). Continuing.\n"));
    }
#endif

  /* Set always_make_flag if -B was given and we've not restarted already.  */