             WIN32_StoreKey(CONFIGFILE, REG_SZ, (unsigned char *) ConfigFile, strlen(ConfigFile) + 1);
 
             printf("Squid Cache version %s for %s\n", version_string, CONFIG_HOST_TYPE);
-            printf("installed successfully as %s Windows System Service.\n", service_name);
+            printf("installed successfully as " SQUIDSBUFPH " Windows System Service.\n", SQUIDSBUFPRINT(service_name));
             printf("To run, start it from the Services Applet of Control Panel.\n");
             printf("Don't forget to edit squid.conf before starting it.\n\n");
         } else {
