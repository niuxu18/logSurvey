			fprintf(stderr,
				"Resuming fetch of object %s at byte %ld\n",
				hex, prev_posn);
		xsnprintf(range, sizeof(range), "Range: bytes=%ld-", prev_posn);
		range_header = curl_slist_append(range_header, range);
		curl_easy_setopt(freq->slot->curl,
				 CURLOPT_HTTPHEADER, range_header);
