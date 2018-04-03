 	return !!err;
 }
 
-static struct ref *get_refs_via_curl(struct transport *transport, int for_push)
-{
-	struct strbuf buffer = STRBUF_INIT;
-	char *data, *start, *mid;
-	char *ref_name;
-	char *refs_url;
-	int i = 0;
-	int http_ret;
-
-	struct ref *refs = NULL;
-	struct ref *ref = NULL;
-	struct ref *last_ref = NULL;
-
-	struct walker *walker;
-
-	if (for_push)
-		return NULL;
-
-	if (!transport->data)
-		transport->data = get_http_walker(transport->url,
-						transport->remote);
-
-	walker = transport->data;
-
-	refs_url = xmalloc(strlen(transport->url) + 11);
-	sprintf(refs_url, "%s/info/refs", transport->url);
-
-	http_ret = http_get_strbuf(refs_url, &buffer, HTTP_NO_CACHE);
-	switch (http_ret) {
-	case HTTP_OK:
-		break;
-	case HTTP_MISSING_TARGET:
-		die("%s not found: did you run git update-server-info on the"
-		    " server?", refs_url);
-	default:
-		http_error(refs_url, http_ret);
-		die("HTTP request failed");
-	}
-
-	data = buffer.buf;
-	start = NULL;
-	mid = data;
-	while (i < buffer.len) {
-		if (!start)
-			start = &data[i];
-		if (data[i] == '\t')
-			mid = &data[i];
-		if (data[i] == '\n') {
-			data[i] = 0;
-			ref_name = mid + 1;
-			ref = xmalloc(sizeof(struct ref) +
-				      strlen(ref_name) + 1);
-			memset(ref, 0, sizeof(struct ref));
-			strcpy(ref->name, ref_name);
-			get_sha1_hex(start, ref->old_sha1);
-			if (!refs)
-				refs = ref;
-			if (last_ref)
-				last_ref->next = ref;
-			last_ref = ref;
-			start = NULL;
-		}
-		i++;
-	}
-
-	strbuf_release(&buffer);
-
-	ref = alloc_ref("HEAD");
-	if (!walker->fetch_ref(walker, ref) &&
-	    !resolve_remote_symref(ref, refs)) {
-		ref->next = refs;
-		refs = ref;
-	} else {
-		free(ref);
-	}
-
-	strbuf_release(&buffer);
-	free(refs_url);
-	return refs;
-}
-
-static int fetch_objs_via_curl(struct transport *transport,
-				 int nr_objs, const struct ref **to_fetch)
-{
-	if (!transport->data)
-		transport->data = get_http_walker(transport->url,
-						transport->remote);
-	return fetch_objs_via_walker(transport, nr_objs, to_fetch);
-}
-
 #endif
 
 struct bundle_transport_data {
