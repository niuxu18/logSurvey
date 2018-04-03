 };
 static struct discovery *last_discovery;
 
+static struct ref *parse_git_refs(struct discovery *heads, int for_push)
+{
+	struct ref *list = NULL;
+	get_remote_heads(-1, heads->buf, heads->len, &list,
+			 for_push ? REF_NORMAL : 0, NULL);
+	return list;
+}
+
+static struct ref *parse_info_refs(struct discovery *heads)
+{
+	char *data, *start, *mid;
+	char *ref_name;
+	int i = 0;
+
+	struct ref *refs = NULL;
+	struct ref *ref = NULL;
+	struct ref *last_ref = NULL;
+
+	data = heads->buf;
+	start = NULL;
+	mid = data;
+	while (i < heads->len) {
+		if (!start) {
+			start = &data[i];
+		}
+		if (data[i] == '\t')
+			mid = &data[i];
+		if (data[i] == '\n') {
+			if (mid - start != 40)
+				die("%sinfo/refs not valid: is this a git repository?", url);
+			data[i] = 0;
+			ref_name = mid + 1;
+			ref = xmalloc(sizeof(struct ref) +
+				      strlen(ref_name) + 1);
+			memset(ref, 0, sizeof(struct ref));
+			strcpy(ref->name, ref_name);
+			get_sha1_hex(start, ref->old_sha1);
+			if (!refs)
+				refs = ref;
+			if (last_ref)
+				last_ref->next = ref;
+			last_ref = ref;
+			start = NULL;
+		}
+		i++;
+	}
+
+	ref = alloc_ref("HEAD");
+	if (!http_fetch_ref(url, ref) &&
+	    !resolve_remote_symref(ref, refs)) {
+		ref->next = refs;
+		refs = ref;
+	} else {
+		free(ref);
+	}
+
+	return refs;
+}
+
 static void free_discovery(struct discovery *d)
 {
 	if (d) {
