            no_acct_mgmt = 1;
            break;
        default:
            fprintf(stderr, "FATAL: Unknown getopt value '%c'\n", ch);
            usage(argv[0]);
            exit(1);
        }
    }
start:
    if (optind < argc) {
        fprintf(stderr, "FATAL: Unknown option '%s'\n", argv[optind]);
        usage(argv[0]);
        exit(1);
    }

    while (fgets(buf, HELPER_INPUT_BUFFER, stdin)) {
        user = buf;
        password_buf = strchr(buf, '\n');
        if (!password_buf) {
            debug("ERROR: %s: Unexpected input '%s'\n", argv[0], buf);
            goto error;
        }
        *password_buf = '\0';
        password_buf = strchr(buf, ' ');
        if (!password_buf) {
            debug("ERROR: %s: Unexpected input '%s'\n", argv[0], buf);
            goto error;
        }
        *password_buf++ = '\0';
