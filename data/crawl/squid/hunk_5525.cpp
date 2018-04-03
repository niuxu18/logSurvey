 		    printf("Error in input file\n");
 		    exit(1);
 		}
-		curr = calloc(1, sizeof(Entry));
+		curr = (Entry *)calloc(1, sizeof(Entry));
 		curr->name = xstrdup(name);
 		while ((aliasname = strtok(NULL, WS)) != NULL) {
-		    EntryAlias *alias = calloc(1, sizeof(EntryAlias));
+		    EntryAlias *alias = (EntryAlias *)calloc(1, sizeof(EntryAlias));
 		    alias->next = curr->alias;
 		    alias->name = xstrdup(aliasname);
 		    curr->alias = alias;
