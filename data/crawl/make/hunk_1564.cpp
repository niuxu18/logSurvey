 		  if (optarg == 0 && argc > optind
 		      && isdigit (argv[optind][0]))
 		    optarg = argv[optind++];
+
+		  if (!doit)
+		    break;
+
 		  if (optarg != 0)
 		    {
 		      int i = atoi (optarg);
 		      if (i < 1)
 			{
-			  error ("the `-%c' option requires a \
+			  if (doit)
+			    error ("the `-%c' option requires a \
 positive integral argument",
-				 cs->c);
+				   cs->c);
 			  bad = 1;
 			}
 		      else