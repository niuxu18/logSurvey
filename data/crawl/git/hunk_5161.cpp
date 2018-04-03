 		return;
 	prefix = " (";
 	while (decoration) {
-		printf("%s%s", prefix, decoration->name);
+		printf("%s", prefix);
+		if (decoration->type == DECORATION_REF_TAG)
+			printf("tag: ");
+		printf("%s", decoration->name);
 		prefix = ", ";
 		decoration = decoration->next;
 	}