 	return p->score * 100 / MAX_SCORE;
 }
 
+static const char *diff_abbrev_oid(const struct object_id *oid, int abbrev)
+{
+	if (startup_info->have_repository)
+		return find_unique_abbrev(oid->hash, abbrev);
+	else {
+		char *hex = oid_to_hex(oid);
+		if (abbrev < 0 || abbrev > GIT_SHA1_HEXSZ)
+			die("BUG: oid abbreviation out of range: %d", abbrev);
+		hex[abbrev] = '\0';
+		return hex;
+	}
+}
+
 static void fill_metainfo(struct strbuf *msg,
 			  const char *name,
 			  const char *other,
