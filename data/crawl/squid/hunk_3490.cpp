 
         storeAppendPrintf(sentry, "\tmemPool accounted:     %6d KB %3d%%\n",
                           (int) mp_stats.TheMeter->alloc.level >> 10,
-                          percent(mp_stats.TheMeter->alloc.level, t));
+                          Math::intPercent(mp_stats.TheMeter->alloc.level, t));
         storeAppendPrintf(sentry, "\tmemPool unaccounted:   %6d KB %3d%%\n",
                           (t - (int) mp_stats.TheMeter->alloc.level) >> 10,
-                          percent((t - mp_stats.TheMeter->alloc.level), t));
+                          Math::intPercent((t - mp_stats.TheMeter->alloc.level), t));
 #endif
 
         storeAppendPrintf(sentry, "\tmemPoolAlloc calls: %9.0f\n",
