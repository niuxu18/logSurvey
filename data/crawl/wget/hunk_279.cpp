 	if(ret)
     {
       fprintf (stderr,
-               "ioctl() failed.  The socket could not be set as blocking.\n" );
+               _("ioctl() failed.  The socket could not be set as blocking.\n") );
       DEBUGP (("Winsock error: %d\n", WSAGetLastError ()));
       abort ();
     }