                  req->action,
                  make_auth_header(req));
     if (write(s, buf, l) < 0) {
-        debug(1) fprintf(stderr, "ERROR: (%d) writing request: '%s'\n", errno, buf);
+        fprintf(stderr,"ERROR: (%d) writing request: '%s'\n", errno, buf);
     } else {
-        debug(1) fprintf(stderr, "wrote request: '%s'\n", buf);
+        debug("wrote request: '%s'\n", buf);
     }
     return read_reply(s, req);
 }
