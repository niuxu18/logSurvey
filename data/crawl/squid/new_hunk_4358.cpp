	case 'S':
	    strip_nt_domain = 1;
	    break;
	case 'K':
	    strip_kerberos_realm = 1;
	    break;
	default:
	    fprintf(stderr, PROGRAM_NAME " ERROR: Unknown command line option '%c'\n", option);
	    exit(1);
