         list = list->next;
     }
 
-    storeAppendPrintf(entry, "\n%s %s realm %s\n%s %s children %d\n%s %s nonce_max_count %d\n%s %s nonce_max_duration %d seconds\n%s %s nonce_garbage_interval %d seconds\n",
+    storeAppendPrintf(entry, "\n%s %s realm %s\n%s %s children %d startup=%d idle=%d\n%s %s nonce_max_count %d\n%s %s nonce_max_duration %d seconds\n%s %s nonce_garbage_interval %d seconds\n",
                       name, "digest", digestAuthRealm,
-                      name, "digest", authenticateChildren,
+                      name, "digest", authenticateChildren.n_max, authenticateChildren.n_startup, authenticateChildren.n_idle,
                       name, "digest", noncemaxuses,
                       name, "digest", (int) noncemaxduration,
                       name, "digest", (int) nonceGCInterval);
