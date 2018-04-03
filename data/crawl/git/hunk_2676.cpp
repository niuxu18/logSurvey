 			goto bad;
 	}
 
+#undef OUT
+#define OUT(x) do { \
+	if (dst == end) \
+		die("BUG: color parsing ran out of space"); \
+	*dst++ = (x); \
+} while(0)
+
 	if (attr || !color_empty(&fg) || !color_empty(&bg)) {
 		int sep = 0;
 		int i;
 
-		*dst++ = '\033';
-		*dst++ = '[';
+		OUT('\033');
+		OUT('[');
 
 		for (i = 0; attr; i++) {
 			unsigned bit = (1 << i);
 			if (!(attr & bit))
 				continue;
 			attr &= ~bit;
 			if (sep++)
-				*dst++ = ';';
-			dst += sprintf(dst, "%d", i);
+				OUT(';');
+			dst += xsnprintf(dst, end - dst, "%d", i);
 		}
 		if (!color_empty(&fg)) {
 			if (sep++)
-				*dst++ = ';';
+				OUT(';');
 			/* foreground colors are all in the 3x range */
-			dst = color_output(dst, &fg, '3');
+			dst = color_output(dst, end - dst, &fg, '3');
 		}
 		if (!color_empty(&bg)) {
 			if (sep++)
-				*dst++ = ';';
+				OUT(';');
 			/* background colors are all in the 4x range */
-			dst = color_output(dst, &bg, '4');
+			dst = color_output(dst, end - dst, &bg, '4');
 		}
-		*dst++ = 'm';
+		OUT('m');
 	}
-	*dst = 0;
+	OUT(0);
 	return 0;
 bad:
 	return error(_("invalid color value: %.*s"), value_len, value);
+#undef OUT
 }
 
 int git_config_colorbool(const char *var, const char *value)