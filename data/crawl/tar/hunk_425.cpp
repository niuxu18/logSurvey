 		&& g == (gid_t) g)
 	      group_option = g;
 	    else
-	      ERROR ((TAREXIT_FAILURE, 0, _("Invalid group given on option")));
+	      FATAL_ERROR ((0, 0, _("Invalid group given on option")));
 	  }
 	break;
 
