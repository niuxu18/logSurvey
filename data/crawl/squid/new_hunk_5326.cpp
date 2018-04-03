	fprintf(stderr, "\t-s base|one|sub\t\tsearch scope\n");
	fprintf(stderr, "\t-D binddn\t\tDN to bind as to perform searches\n");
	fprintf(stderr, "\t-w bindpasswd\t\tpassword for binddn\n");
#if HAS_URI_SUPPORT
	fprintf(stderr, "\t-H URI\t\t\tLDAPURI (defaults to ldap://localhost)\n");
#endif
	fprintf(stderr, "\t-h server\t\tLDAP server (defaults to localhost)\n");
	fprintf(stderr, "\t-p port\t\t\tLDAP server port\n");
	fprintf(stderr, "\t-P\t\t\tpersistent LDAP connection\n");
	fprintf(stderr, "\t-R\t\t\tdo not follow referrals\n");
	fprintf(stderr, "\t-a never|always|search|find\n\t\t\t\twhen to dereference aliases\n");
#ifdef LDAP_VERSION3
	fprintf(stderr, "\t-v 2|3\t\t\tLDAP version\n");
	fprintf(stderr, "\t-Z\t\t\tTLS encrypt the LDAP connection, requires LDAP version 3\n");
#endif
	fprintf(stderr, "\n");
	fprintf(stderr, "\tIf no search filter is specified, then the dn <userattr>=user,basedn\n\twill be used (same as specifying a search filter of '<userattr>=',\n\tbut quicker as as there is no need to search for the user DN)\n\n");
	fprintf(stderr, "\tIf you need to bind as a user to perform searches then use the\n\t-D binddn -w bindpasswd options\n\n");