     wordlist *v;
     while (ae != NULL) {
 	debug(3, 3) ("dump_acl: %s %s\n", name, ae->name);
-	v = w = aclDumpGeneric(ae);
+	v = w = ae->dumpGeneric();
 	while (v != NULL) {
 	    debug(3, 3) ("dump_acl: %s %s %s\n", name, ae->name, v->key);
 	    storeAppendPrintf(entry, "%s %s %s %s\n",
 		name,
 		ae->name,
-		aclTypeToStr(ae->type),
+		ae->typeString(),
 		v->key);
 	    v = v->next;
 	}