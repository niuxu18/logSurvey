     if (vbProductionFinished)
         buf.append(".", 1);
 
-    buf.Printf(" A%d", static_cast<int>(proxyingAb));
+    buf.appendf(" A%d", static_cast<int>(proxyingAb));
 
     if (proxyingAb == opOn) {
         MessageRep *rep = dynamic_cast<MessageRep*>(theAnswerRep.get());
