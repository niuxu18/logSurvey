                if (binddn && bindpasswd && *binddn && *bindpasswd) {
                    rc = ldap_simple_bind_s(ld, binddn, bindpasswd);
                    if (rc != LDAP_SUCCESS) {
                        broken = HLP_MSG("could not bind");
                        fprintf(stderr, PROGRAM_NAME ": WARNING: %s to binddn '%s'\n", broken, ldap_err2string(rc));
                        ldap_unbind(ld);
                        ld = NULL;
                        break;
                    }
                }
                debug("Connected OK\n");
            }
            int searchResult = searchLDAP(ld, group, user, extension_dn);
            if (searchResult == 0) {
                found = 1;
                break;
            } else if (searchResult < 0){
                if (tryagain) {
                    tryagain = 0;
                    ldap_unbind(ld);
                    ld = NULL;
                    goto recover;
                }
                broken = HLP_MSG("LDAP search error");
            }
        }
        if (found)
            SEND_OK("");
        else if (broken)
            SEND_BH(broken);
        else {
            SEND_ERR("");
        }
