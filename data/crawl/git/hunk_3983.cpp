 				fprintf(stderr, "...\n");
 				break;
 			}
-			if (ce_stage(ce))
-				fprintf(stderr, "%s: unmerged (%s)\n",
-					ce->name, sha1_to_hex(ce->sha1));
-			else
-				fprintf(stderr, "%s: not added yet\n",
-					ce->name);
+			fprintf(stderr, "%s: unmerged (%s)\n",
+				ce->name, sha1_to_hex(ce->sha1));
 		}
 	}
 	if (funny)