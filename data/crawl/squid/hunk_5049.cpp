 
 	if (!nispasswd) {
 	    /* User does not exist */
-	    printf("ERR\n");
+	    printf("ERR No such user\n");
 	} else if (strcmp(nispasswd, (char *) crypt(passwd, nispasswd)) == 0) {
 	    /* All ok !, thanks... */
 	    printf("OK\n");
 	} else {
 	    /* Password incorrect */
-	    printf("ERR\n");
+	    printf("ERR Wrong password\n");
 	}
     }
     exit(0);