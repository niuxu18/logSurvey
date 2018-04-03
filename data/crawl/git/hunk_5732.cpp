 		}
 	}
 
-	for (i = 0; i <= MAX_CHAIN; i++) {
-		if (!chain_histogram[i])
+	if (baseobjects)
+		printf("non delta: %lu object%s\n",
+		       baseobjects, baseobjects > 1 ? "s" : "");
+
+	for (cnt = 1; cnt <= MAX_CHAIN; cnt++) {
+		if (!chain_histogram[cnt])
 			continue;
-		printf("chain length = %"PRIu32": %"PRIu32" object%s\n", i,
-		       chain_histogram[i], chain_histogram[i] > 1 ? "s" : "");
+		printf("chain length = %d: %lu object%s\n", cnt,
+		       chain_histogram[cnt],
+		       chain_histogram[cnt] > 1 ? "s" : "");
 	}
 	if (chain_histogram[0])
-		printf("chain length > %d: %"PRIu32" object%s\n", MAX_CHAIN,
-		       chain_histogram[0], chain_histogram[0] > 1 ? "s" : "");
+		printf("chain length > %d: %lu object%s\n", MAX_CHAIN,
+		       chain_histogram[0],
+		       chain_histogram[0] > 1 ? "s" : "");
 }
 
 static int verify_one_pack(const char *path, int verbose)