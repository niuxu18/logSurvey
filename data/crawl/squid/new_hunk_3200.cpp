        snprintf(dn, sizeof(dn), "%s=%s,%s", userattr, userid, basedn);
    }

    debug("attempting to authenticate user '%s'\n", dn);
    if (!bind_ld && !bind_once)
        bind_ld = persistent_ld;
    if (!bind_ld)
