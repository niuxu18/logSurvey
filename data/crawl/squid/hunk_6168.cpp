     }
 
     fprintf(fp,
-	"\t} else {\n"
+	"\telse\n"
 	"\t\tresult = 0; /* failure */\n"
-	"\t}\n"
 	"\treturn(result);\n"
 	"}\n\n"
 	);