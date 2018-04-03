 	    else
 		u->passwd = xstrdup(passwd);
 	    hash_join(hash, &u->hash);
-  	}
+	}
     }
     fclose(f);
 }
 
 /* replace when changing the backend */
 void
-TextArguments (int argc, char **argv)
+TextArguments(int argc, char **argv)
 {
     struct stat sb;
-    if(argc == 2)
-        passwdfile = argv[1];
-    if((argc == 3) && !strcmp("-c", argv[1])){
-        ha1mode=1;
-        passwdfile = argv[2];
+    if (argc == 2)
+	passwdfile = argv[1];
+    if ((argc == 3) && !strcmp("-c", argv[1])) {
+	ha1mode = 1;
+	passwdfile = argv[2];
     }
     if (!passwdfile) {
-        fprintf(stderr, "Usage: digest_pw_auth [OPTIONS] <passwordfile>\n");
-        fprintf(stderr, "  -c   accept digest hashed passwords rather than plaintext in passwordfile\n");
+	fprintf(stderr, "Usage: digest_pw_auth [OPTIONS] <passwordfile>\n");
+	fprintf(stderr, "  -c   accept digest hashed passwords rather than plaintext in passwordfile\n");
 	exit(1);
     }
     if (stat(passwdfile, &sb) != 0) {
