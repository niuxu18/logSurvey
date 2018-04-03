             printf("Service Name: " SQUIDSBUFPH "\n", SQUIDSBUFPRINT(service_name));
             if (strlen(SQUID_BUILD_INFO))
                 printf("%s\n",SQUID_BUILD_INFO);
+#if USE_OPENSSL
+            printf("\nThis binary uses %s. ", SSLeay_version(SSLEAY_VERSION));
+            printf("For legal restrictions on distribution see https://www.openssl.org/source/license.html\n\n");
+#endif
             printf( "configure options: %s\n", SQUID_CONFIGURE_OPTIONS);
 
 #if USE_WIN32_SERVICE