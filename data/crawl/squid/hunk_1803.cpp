 }
 
 void
-Format::Format::dump(StoreEntry * entry, const char *name)
+Format::Format::dump(StoreEntry * entry, const char *directiveName)
 {
     debugs(46, 4, HERE);
 
     // loop rather than recursing to conserve stack space.
-    for (Format *format = this; format; format = format->next) {
-        debugs(46, 3, HERE << "Dumping format definition for " << format->name);
-        storeAppendPrintf(entry, "format %s ", format->name);
+    for (Format *fmt = this; fmt; fmt = fmt->next) {
+        debugs(46, 3, HERE << "Dumping format definition for " << fmt->name);
+        storeAppendPrintf(entry, "%s %s ", directiveName, fmt->name);
 
-        for (Token *t = format->format; t; t = t->next) {
+        for (Token *t = fmt->format; t; t = t->next) {
             if (t->type == LFT_STRING)
                 storeAppendPrintf(entry, "%s", t->data.string);
             else {
