 					new->name);
 			else
 				fprintf(stderr, "Switched to%s branch '%s'\n",
-					opts->new_branch ? " a new" : "",
+					opts->branch_exists ? " and reset" : " a new",
 					new->name);
 		}
 		if (old->path && old->name) {