         puts( ::verbose ? " + extra verbosity" : "" );
 
         printf( "# Copy-out directory: %s ",
-                copydir ? copydir : "copy-out mode disabled" );
-        if ( copydir )
+                copyDirPath ? copyDirPath : "copy-out mode disabled" );
+        if ( copyDirPath )
             printf( "(%s HTTP header)\n", ::envelope ? "prepend" : "no" );
         else
             puts("");
 
         printf( "# Squid config file : %s\n", conffile );
         printf( "# Cacheserveraddress: %s:%u\n",
-                inet_ntoa( serverHost ), ntohs( serverPort ) );
+                inet_ntoa( serverHostIp ), ntohs( serverHostPort ) );
         printf( "# purge mode        : 0x%02x\n", ::purgeMode );
         printf( "# Regular expression: " );
 
