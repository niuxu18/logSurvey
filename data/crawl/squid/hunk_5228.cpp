 
     return Ctx_Descrs[ctx] ? Ctx_Descrs[ctx] : "<null>";
 }
+
+std::ostream &
+Debug::getDebugOut() {
+    assert (currentDebug == NULL);
+    currentDebug = new std::ostringstream();
+    return *currentDebug;
+}
+
+void
+Debug::finishDebug() {
+    _db_print("%s\n", currentDebug->str().c_str());
+    delete currentDebug;
+    currentDebug = NULL;
+}
+
+std::ostringstream *Debug::currentDebug (NULL);
+#
