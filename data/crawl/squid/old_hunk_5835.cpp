	case 'p':
		persistent = !persistent;
		break;
	default:
		fprintf(stderr, "squid_ldap_auth: ERROR: Unknown command line option '%c'\n", option);
		exit(1);
