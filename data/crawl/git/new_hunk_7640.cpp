		run_active_slot(slot);
		free(url);
		if (results.http_code == 404)
			ret = 0;
		else if (results.curl_result == CURLE_OK)
			ret = 1;
		else
			fprintf(stderr, "HEAD HTTP error %ld\n", results.http_code);
	} else {
		free(url);
		fprintf(stderr, "Unable to start HEAD request\n");
	}

	free(url);
	return ret;
}

static void fetch_symref(const char *path, char **symref, unsigned char *sha1)
