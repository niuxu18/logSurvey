            else if (strcmp(value, "sub") == 0)
                searchscope = LDAP_SCOPE_SUBTREE;
            else {
                fprintf(stderr, PROGRAM_NAME ": FATAL: Unknown search scope '%s'\n", value);
                exit(1);
            }
            break;
