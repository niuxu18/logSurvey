    else
        visible_appname_string = (char const *)APP_FULLNAME;

#if USE_DNSHELPER
    if (Config.dnsChildren.n_max < 1)
        fatal("No DNS helpers allocated");
#endif

    if (Config.Program.redirect) {
        if (Config.redirectChildren.n_max < 1) {
            Config.redirectChildren.n_max = 0;
