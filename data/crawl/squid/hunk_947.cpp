 
     if (preview.enabled()) {
         if (preview.done())
-            buf.Printf("P%s", preview.ieof() ? "(ieof)" : "");
+            buf.appendf("P%s", preview.ieof() ? "(ieof)" : "");
     }
 
     if (doneReading())
