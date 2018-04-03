            if (norealm && (p = strchr(user, '@')) != NULL) {
                *p = '\0';
            }
            fprintf(stdout, "AF %s %s\n", token, user);
            debug((char *) "%s| %s: DEBUG: AF %s %s\n", LogTime(), PROGRAM, token, rfc1738_escape(user));
            if (log)
                fprintf(stderr, "%s| %s: INFO: User %s authenticated\n", LogTime(),
                        PROGRAM, rfc1738_escape(user));
            goto cleanup;
        } else {
            if (check_gss_err(major_status, minor_status, "gss_accept_sec_context()", log))
                goto cleanup;
            if (major_status & GSS_S_CONTINUE_NEEDED) {
                debug((char *) "%s| %s: INFO: continuation needed\n", LogTime(), PROGRAM);