 			return 0;
 
 		if (!filter->lines) {
-			printf("%s\n", refname);
+			if (filter->sort)
+				string_list_append(&filter->tags, refname);
+			else
+				printf("%s\n", refname);
 			return 0;
 		}
 		printf("%-15s ", refname);
