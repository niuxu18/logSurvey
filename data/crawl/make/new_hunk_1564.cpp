		  if (optarg == 0 && argc > optind
		      && isdigit (argv[optind][0]))
		    optarg = argv[optind++];

		  if (!doit)
		    break;

		  if (optarg != 0)
		    {
		      int i = atoi (optarg);
		      if (i < 1)
			{
			  if (doit)
			    error ("the `-%c' option requires a \
positive integral argument",
				   cs->c);
			  bad = 1;
			}
		      else