 static void import_marks(char *input_file)
 {
 	char line[512];
-	FILE *f = fopen(input_file, "r");
-	if (!f)
-		die_errno("cannot read '%s'", input_file);
+	FILE *f = xfopen(input_file, "r");
 
 	while (fgets(line, sizeof(line), f)) {
 		uint32_t mark;
