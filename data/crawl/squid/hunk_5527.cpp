 }				/* ARGSUSED */
 
 static void
-catch(int sig)
+catchSignal(int sig)
 {
     interrupted = 1;
     fprintf(stderr, "Interrupted.\n");