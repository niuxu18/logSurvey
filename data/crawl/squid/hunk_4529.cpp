      * - RBC 20060819
      */
 
+    /*
+     * DPW 2007-07-06
+     * Call leave_suid() here to make sure that swap.state files
+     * are written as the effective user, rather than root.  Squid
+     * may take on root privs during reconfigure.  If squid.conf
+     * contains a "Bungled" line, fatal() will be called when the
+     * process still has root privs.
+     */
+    lave_suid();
+
     if (0 == StoreController::store_dirs_rebuilding)
         storeDirWriteCleanLogs(0);
 