        case 'o':
            no_acct_mgmt = 1;
            break;
        default:
            fprintf(stderr, "FATAL: Unknown getopt value '%c'\n", ch);
            usage(argv[0]);
