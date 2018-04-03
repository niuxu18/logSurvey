	if (http_proactive_auth)
		init_curl_http_auth(result);

	if (getenv("GIT_SSL_CIPHER_LIST"))
		ssl_cipherlist = getenv("GIT_SSL_CIPHER_LIST");

	if (ssl_cipherlist != NULL && *ssl_cipherlist)
		curl_easy_setopt(result, CURLOPT_SSL_CIPHER_LIST,
				ssl_cipherlist);