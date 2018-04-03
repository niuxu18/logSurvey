     case cs_running:
       c->next = children;
       if (debug_flag)
-	printf ("Putting child 0x%08lx PID %05d%s on the chain.\n",
+	printf ("Putting child 0x%08lx PID %ld%s on the chain.\n",
 		(unsigned long int) c,
-		c->pid, c->remote ? " (remote)" : "");
+		(long) c->pid, c->remote ? " (remote)" : "");
       children = c;
       /* One more job slot is in use.  */
       ++job_slots_used;
