             exit(0);
         case '?':
             opt = optopt;
-            /* fall thru to default */
+        /* fall thru to default */
         default:
             fprintf(stderr, "%s: FATAL: Unknown option: -%c. Exiting\n", program_name, opt);
             usage(argv[0]);
             exit(1);
-            break;		/* not reached */
+            break;      /* not reached */
         }
     }
     return;
