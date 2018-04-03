    else
      {
	if (read_makefiles == 0)
	  fatal ("No targets specified and no makefile found");
	else
	  fatal ("No targets");
      }

    /* If we detected some clock skew, generate one last warning */
    if (clock_skew_detected)
      error("*** Warning:  Clock skew detected.  Your build may be incomplete.");

    /* Exit.  */
    die (status);
