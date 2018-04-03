             spnegoTokenLength = output_token.length;
             token = (char*)xmalloc(ska_base64_encode_len(spnegoTokenLength));
             if (token == NULL) {
-                if (debug)
-                    fprintf(stderr, "%s| %s: ERROR: Not enough memory\n", LogTime(),
-                            PROGRAM);
+                debug("%s| %s: ERROR: Not enough memory\n", LogTime(), PROGRAM);
                 fprintf(stdout, "BH Not enough memory\n");
                 goto cleanup;
             }
 
             ska_base64_encode(token, (const char *) spnegoToken,
                               ska_base64_encode_len(spnegoTokenLength), spnegoTokenLength);
 
-            if (check_gss_err(major_status, minor_status,
-                              "gss_accept_sec_context()", debug, log))
+            if (check_gss_err(major_status, minor_status, "gss_accept_sec_context()", log))
                 goto cleanup;
             if (major_status & GSS_S_CONTINUE_NEEDED) {
-                if (debug)
-                    fprintf(stderr, "%s| %s: INFO: continuation needed\n", LogTime(),
-                            PROGRAM);
+                debug("%s| %s: INFO: continuation needed\n", LogTime(), PROGRAM);
                 fprintf(stdout, "TT %s\n", token);
                 goto cleanup;
             }
