        AuthScheme *theScheme;

        if ((theScheme = AuthScheme::Find(type_str)) == NULL) {
            return NULL;
            //fatalf("Unknown authentication scheme '%s'.\n", type_str);
        }

        config.push_back(theScheme->createConfig());
