     flags.proxying = tunnelState->request->flags.proxying;
     MemBuf mb;
     mb.init();
-    mb.Printf("CONNECT %s HTTP/1.1\r\n", tunnelState->url);
+    mb.appendf("CONNECT %s HTTP/1.1\r\n", tunnelState->url);
     HttpStateData::httpBuildRequestHeader(tunnelState->request.getRaw(),
                                           NULL,         /* StoreEntry */
                                           tunnelState->al,          /* AccessLogEntry */
