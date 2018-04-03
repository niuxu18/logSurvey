                    version = LDAP_VERSION3;
                }
                if (ldap_set_option(ld, LDAP_OPT_PROTOCOL_VERSION, &version) != LDAP_SUCCESS) {
                    fprintf(stderr, "ERROR: Could not set LDAP_OPT_PROTOCOL_VERSION %d\n",
                            version);
                    ldap_unbind(ld);
                    ld = NULL;
                    break;
