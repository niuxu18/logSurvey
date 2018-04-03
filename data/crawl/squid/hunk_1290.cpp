     debugs(29, DBG_IMPORTANT, "Reconfigure: Negotiate authentication configuration cleared.");
 }
 
-void
-Auth::Negotiate::Config::dump(StoreEntry * entry, const char *name, Auth::Config * scheme)
+bool
+Auth::Negotiate::Config::dump(StoreEntry * entry, const char *name, Auth::Config * scheme) const
 {
-    wordlist *list = authenticateProgram;
-    storeAppendPrintf(entry, "%s %s", name, "negotiate");
-
-    while (list != NULL) {
-        storeAppendPrintf(entry, " %s", list->key);
-        list = list->next;
-    }
+    if (!Auth::Config::dump(entry, name, scheme))
+        return false;
 
-    storeAppendPrintf(entry, "\n%s negotiate children %d startup=%d idle=%d concurrency=%d\n",
-                      name, authenticateChildren.n_max, authenticateChildren.n_startup, authenticateChildren.n_idle, authenticateChildren.concurrency);
-    storeAppendPrintf(entry, "%s %s keep_alive %s\n", name, "negotiate", keep_alive ? "on" : "off");
-    Auth::Config::dump(entry, name, scheme);
+    storeAppendPrintf(entry, "%s negotiate keep_alive %s\n", name, keep_alive ? "on" : "off");
+    return true;
 }
 
 Auth::Negotiate::Config::Config() : keep_alive(1)