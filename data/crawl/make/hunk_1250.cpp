   switch (ar_member_touch (arname, memname))
     {
     case -1:
-      error ("touch: Archive `%s' does not exist", arname);
+      error (NILF, "touch: Archive `%s' does not exist", arname);
       break;
     case -2:
-      error ("touch: `%s' is not a valid archive", arname);
+      error (NILF, "touch: `%s' is not a valid archive", arname);
       break;
     case -3:
       perror_with_name ("touch: ", arname);
       break;
     case 1:
-      error ("touch: Member `%s' does not exist in `%s'", memname, arname);
+      error (NILF,
+             "touch: Member `%s' does not exist in `%s'", memname, arname);
       break;
     case 0:
       val = 0;
       break;
     default:
-      error ("touch: Bad return code from ar_member_touch on `%s'", name);
+      error (NILF,
+             "touch: Bad return code from ar_member_touch on `%s'", name);
     }
 
   if (!arname_used)
