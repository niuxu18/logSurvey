 
 	if (patchbreak(line)) {
 		if (mi->message_id)
-			fprintf(cmitmsg, "Message-Id: %s\n", mi->message_id);
-		fclose(cmitmsg);
-		cmitmsg = NULL;
+			fprintf(mi->cmitmsg, "Message-Id: %s\n", mi->message_id);
+		fclose(mi->cmitmsg);
+		mi->cmitmsg = NULL;
 		return 1;
 	}
 
-	fputs(line->buf, cmitmsg);
+	fputs(line->buf, mi->cmitmsg);
 	return 0;
 }
 
 static void handle_patch(struct mailinfo *mi, const struct strbuf *line)
 {
-	fwrite(line->buf, 1, line->len, patchfile);
+	fwrite(line->buf, 1, line->len, mi->patchfile);
 	mi->patch_lines++;
 }
 
