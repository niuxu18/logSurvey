     else if (conn->fd == snmpOutgoingConn->fd)
         debugs(1, DBG_IMPORTANT, "Sending SNMP messages from " << snmpOutgoingConn->local);
     else
-        fatalf("Lost SNMP port (%d) on FD %d", (int)conn->local.GetPort(), conn->fd);
+        fatalf("Lost SNMP port (%d) on FD %d", (int)conn->local.port(), conn->fd);
 }
 
 void
