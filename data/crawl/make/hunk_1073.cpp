 
   if (! status)
     {
-      error (NILF, "lbr$ini_control failed with status = %d",status);
+      error (NILF, _("lbr$ini_control failed with status = %d"),status);
       return -2;
     }
 
