 #endif
 }				/* ARGSUSED */
 
-static void
+void
 catchSignal(int sig)
 {
     interrupted = 1;
     fprintf(stderr, "Interrupted.\n");
 }
 
-static void
+void
 pipe_handler(int sig)
 {
     fprintf(stderr, "SIGPIPE received.\n");