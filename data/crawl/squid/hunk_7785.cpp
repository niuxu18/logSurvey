 	float f;
 	f = squid_curtime - squid_starttime;
 	storeAppendPrintf(sentry, "{\tConnections per hour:\t%.1f}\n",
-		f == 0.0 ? 0.0 :
+	    f == 0.0 ? 0.0 :
 	    ((ntcpconn + nudpconn) / (f / 3600)));
     }
 