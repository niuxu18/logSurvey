 	return;
     if (!storeEntryLocked(e))
 	fatal_dump("storeReleaseRequest: unlocked entry");
-    debug(20, 3) ("storeReleaseRequest: '%s'\n",
-	e->key ? e->key : e->url);
+    debug(20, 3) ("storeReleaseRequest: '%s'\n", storeKeyText(e->key));
     BIT_SET(e->flag, RELEASE_REQUEST);
     storeSetPrivateKey(e);
 }
