    rc = sasl_server_init( NULL, APP_NAME_SASL );

    if ( rc != SASL_OK ) {
        fprintf( stderr, "error %d %s\n", rc, sasl_errstring(rc, NULL, NULL ));
        fprintf( stdout, "ERR\n" );
        return 1;
    }
