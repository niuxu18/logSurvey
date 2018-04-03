 	    continue;
 	if (strcmp(entry->name, "comment") == 0)
 	    continue;
+	if (entry->ifdef)
+	    fprintf(fp, "#ifdef %s\n", entry->ifdef);
 	fprintf(fp, "\tdump_%s(entry, \"%s\", %s);\n",
 	    entry->type,
 	    entry->name,
 	    entry->loc);
+	if (entry->ifdef)
+	    fprintf(fp, "#endif\n");
     }
     fprintf(fp, "}\n\n");
 }
