     AclAddress *l;
 
     for (l = head; l; l = l->next) {
-        if (!l->addr.IsAnyAddr())
-            storeAppendPrintf(entry, "%s %s", name, l->addr.NtoA(buf,MAX_IPSTRLEN));
+        if (!l->addr.isAnyAddr())
+            storeAppendPrintf(entry, "%s %s", name, l->addr.toStr(buf,MAX_IPSTRLEN));
         else
             storeAppendPrintf(entry, "%s autoselect", name);
 
