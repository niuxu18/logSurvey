 
     mb.Printf("\r\n");
     EBIT_CLR(gopherState->entry->flags, ENTRY_FWD_HDR_WAIT);
-    storeAppend(gopherState->entry, mb.buf, mb.size);
+    gopherState->entry->append(mb.buf, mb.size);
     mb.clean();
 }
 
