	 * check for this switch for backward compatibility.
	 */
	int convert_varargs = 1;
	int output_error;

	while ( argc > 1 && argv[1][0] == '-' ) {
	  if ( !strcmp(argv[1], "--varargs") ) {
	    convert_varargs = 1;
	    argc--;
	    argv++;
	    continue;
	  }
	  if ( !strcmp(argv[1], "--filename") && argc > 2 ) {
	    filename = argv[2];
	    argc -= 2;
	    argv += 2;
	    continue;
	  }
	  fprintf(stderr, "%s: Unrecognized switch: %s\n", program_name,
		  argv[1]);
	  fprintf(stderr, usage);
	  exit(1);
	}
	switch ( argc )
	   {
	default:
		fprintf(stderr, usage);
		exit(0);
	case 3:
		output_name = argv[2];
		out = fopen(output_name, "w");
		if ( out == NULL ) {
		  fprintf(stderr, "%s: Cannot open output file %s\n",
			  program_name, output_name);
		  exit(1);
		}
		/* falls through */
	case 2:
		in = fopen(argv[1], "r");
		if ( in == NULL ) {
		  fprintf(stderr, "%s: Cannot open input file %s\n",
			  program_name, argv[1]);
		  exit(1);
		}
		if ( filename == 0 )
		  filename = argv[1];
		/* falls through */
	case 1:
		break;
	   }
	if ( filename )
	  fprintf(out, "#line 1 \"%s\"\n", filename);
	buf = malloc(bufsize);
	if ( buf == NULL )
	   {
		fprintf(stderr, "Unable to allocate read buffer!\n");
		exit(1);
	   }
	line = buf;
	while ( fgets(line, (unsigned)(buf + bufsize - line), in) != NULL )
	   {
