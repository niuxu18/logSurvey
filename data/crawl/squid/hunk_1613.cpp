         CBDataDumper::operator()(x);
         storeAppendPrintf(where, "\n");
         storeAppendPrintf(where, "Action\tFile\tLine\n");
-        for_each (x.calls,callDumper);
+        std::for_each (x.calls.begin(), x.calls.end(), callDumper);
         storeAppendPrintf(where, "\n");
     }
 