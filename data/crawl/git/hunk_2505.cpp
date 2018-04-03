 		if (request->curl_result == CURLE_OK) {
 			if (push_verbosely)
 				fprintf(stderr, "    sent %s\n",
-					sha1_to_hex(request->obj->sha1));
+					oid_to_hex(&request->obj->oid));
 			request->obj->flags |= REMOTE;
 			release_request(request);
 		} else {
 			fprintf(stderr, "MOVE %s failed, aborting (%d/%ld)\n",
-				sha1_to_hex(request->obj->sha1),
+				oid_to_hex(&request->obj->oid),
 				request->curl_result, request->http_code);
 			request->state = ABORTED;
 			aborted = 1;
