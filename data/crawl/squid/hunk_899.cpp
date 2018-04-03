         if (isSet(flag) && flag != SC_OTHER) {
 
             /* print option name */
-            packerPrintf(p, (pcount ? ", " SQUIDSTRINGPH : SQUIDSTRINGPH),
+            p->Printf((pcount ? ", " SQUIDSTRINGPH : SQUIDSTRINGPH),
                          SQUIDSTRINGPRINT(ScFieldsInfo[flag].name));
 
             /* handle options with values */
 
             if (flag == SC_MAX_AGE)
-                packerPrintf(p, "=%d", (int) max_age);
+                p->Printf("=%d", (int) max_age);
 
             if (flag == SC_CONTENT)
-                packerPrintf(p, "=\"" SQUIDSTRINGPH "\"", SQUIDSTRINGPRINT(content_));
+                p->Printf("=\"" SQUIDSTRINGPH "\"", SQUIDSTRINGPRINT(content_));
 
             ++pcount;
         }
     }
 
     if (hasTarget())
-        packerPrintf (p, ";" SQUIDSTRINGPH, SQUIDSTRINGPRINT(target));
+        p->Printf(";" SQUIDSTRINGPH, SQUIDSTRINGPRINT(target));
 }
 
 void
