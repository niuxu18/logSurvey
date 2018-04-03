 	do {
 		struct merge_list *link = entry->link;
 		static const char *desc[4] = { "result", "base", "our", "their" };
-		printf("  %-6s %o %s %s\n", desc[entry->stage], entry->mode, sha1_to_hex(entry->blob->object.sha1), entry->path);
+		printf("  %-6s %o %s %s\n", desc[entry->stage], entry->mode, oid_to_hex(&entry->blob->object.oid), entry->path);
 		entry = link;
 	} while (entry);
 }