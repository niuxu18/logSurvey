        if (use_extension_dn) {
            extension_dn = strtok(NULL, " \n");
            if (!extension_dn) {
                debug("%s: Invalid request: Extension DN configured, but none sent.\n", argv[0]);
                SEND_ERR("Invalid Request. Extension DN required.");
                continue;
            }
            rfc1738_unescape(extension_dn);
        }