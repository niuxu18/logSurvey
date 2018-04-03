		args->use_thin_pack = 0;
	if (server_supports("atomic"))
		atomic_supported = 1;

	if (args->push_cert != SEND_PACK_PUSH_CERT_NEVER) {
		int len;
		push_cert_nonce = server_feature_value("push-cert", &len);
		if (push_cert_nonce) {
			reject_invalid_nonce(push_cert_nonce, len);
			push_cert_nonce = xmemdupz(push_cert_nonce, len);
		} else if (args->push_cert == SEND_PACK_PUSH_CERT_ALWAYS) {
			die(_("the receiving end does not support --signed push"));
		} else if (args->push_cert == SEND_PACK_PUSH_CERT_IF_ASKED) {
			warning(_("not sending a push certificate since the"
				  " receiving end does not support --signed"
				  " push"));
		}
	}

	if (!remote_refs) {
