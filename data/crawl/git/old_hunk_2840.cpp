		args->use_thin_pack = 0;
	if (server_supports("atomic"))
		atomic_supported = 1;
	if (args->push_cert) {
		int len;

		push_cert_nonce = server_feature_value("push-cert", &len);
		if (!push_cert_nonce)
			die(_("the receiving end does not support --signed push"));
		reject_invalid_nonce(push_cert_nonce, len);
		push_cert_nonce = xmemdupz(push_cert_nonce, len);
	}

	if (!remote_refs) {
