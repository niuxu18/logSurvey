 		return;
 
 	printf("There are only 'skip'ped commits left to test.\n"
-	       "The first bad commit could be any of:\n");
+	       "The first %s commit could be any of:\n", term_bad);
 	print_commit_list(tried, "%s\n", "%s\n");
 	if (bad)
 		printf("%s\n", oid_to_hex(bad));
