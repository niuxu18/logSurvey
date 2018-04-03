 	}
 }
 
+static int print_one_push_status(struct ref *ref, const char *dest, int count)
+{
+	if (!count)
+		fprintf(stderr, "To %s\n", dest);
+
+	switch(ref->status) {
+	case REF_STATUS_NONE:
+		print_ref_status('X', "[no match]", ref, NULL, NULL);
+		break;
+	case REF_STATUS_REJECT_NODELETE:
+		print_ref_status('!', "[rejected]", ref, NULL,
+				"remote does not support deleting refs");
+		break;
+	case REF_STATUS_UPTODATE:
+		print_ref_status('=', "[up to date]", ref,
+				ref->peer_ref, NULL);
+		break;
+	case REF_STATUS_REJECT_NONFASTFORWARD:
+		print_ref_status('!', "[rejected]", ref, ref->peer_ref,
+				"non-fast forward");
+		break;
+	case REF_STATUS_REMOTE_REJECT:
+		print_ref_status('!', "[remote rejected]", ref,
+				ref->deletion ? NULL : ref->peer_ref,
+				ref->remote_status);
+		break;
+	case REF_STATUS_EXPECTING_REPORT:
+		print_ref_status('!', "[remote failure]", ref,
+				ref->deletion ? NULL : ref->peer_ref,
+				"remote failed to report status");
+		break;
+	case REF_STATUS_OK:
+		print_ok_ref_status(ref);
+		break;
+	}
+
+	return 1;
+}
+
 static void print_push_status(const char *dest, struct ref *refs)
 {
 	struct ref *ref;
-	int shown_dest = 0;
+	int n = 0;
 
-	for (ref = refs; ref; ref = ref->next) {
-		if (!ref->status)
-			continue;
-		if (ref->status == REF_STATUS_UPTODATE && !args.verbose)
-			continue;
+	if (args.verbose) {
+		for (ref = refs; ref; ref = ref->next)
+			if (ref->status == REF_STATUS_UPTODATE)
+				n += print_one_push_status(ref, dest, n);
+	}
 
-		if (!shown_dest) {
-			fprintf(stderr, "To %s\n", dest);
-			shown_dest = 1;
-		}
+	for (ref = refs; ref; ref = ref->next)
+		if (ref->status == REF_STATUS_OK)
+			n += print_one_push_status(ref, dest, n);
 
-		switch(ref->status) {
-		case REF_STATUS_NONE:
-			print_ref_status('X', "[no match]", ref, NULL, NULL);
-			break;
-		case REF_STATUS_REJECT_NODELETE:
-			print_ref_status('!', "[rejected]", ref, NULL,
-					"remote does not support deleting refs");
-			break;
-		case REF_STATUS_UPTODATE:
-			print_ref_status('=', "[up to date]", ref,
-					ref->peer_ref, NULL);
-			break;
-		case REF_STATUS_REJECT_NONFASTFORWARD:
-			print_ref_status('!', "[rejected]", ref, ref->peer_ref,
-					"non-fast forward");
-			break;
-		case REF_STATUS_REMOTE_REJECT:
-			print_ref_status('!', "[remote rejected]", ref,
-					ref->deletion ? NULL : ref->peer_ref,
-					ref->remote_status);
-			break;
-		case REF_STATUS_EXPECTING_REPORT:
-			print_ref_status('!', "[remote failure]", ref,
-					ref->deletion ? NULL : ref->peer_ref,
-					"remote failed to report status");
-			break;
-		case REF_STATUS_OK:
-			print_ok_ref_status(ref);
-			break;
-		}
+	for (ref = refs; ref; ref = ref->next) {
+		if (ref->status != REF_STATUS_NONE &&
+		    ref->status != REF_STATUS_UPTODATE &&
+		    ref->status != REF_STATUS_OK)
+			n += print_one_push_status(ref, dest, n);
 	}
 }
 