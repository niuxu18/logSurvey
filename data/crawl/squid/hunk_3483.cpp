                           i ? (1 << (i - 1)) + 1 : 1,
                           1 << i,
                           IOStats.Ftp.read_hist[i],
-                          percent(IOStats.Ftp.read_hist[i], IOStats.Ftp.reads));
+                          Math::intPercent(IOStats.Ftp.read_hist[i], IOStats.Ftp.reads));
     }
 
     storeAppendPrintf(sentry, "\n");
