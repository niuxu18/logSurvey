     if (s != NULL)
 	free(s);
 #if MEM_GEN_TRACE
-	if (tracefp)
+	if (tracefp && s)
     fprintf(tracefp,"f:%p\n",s);
 #endif
 }