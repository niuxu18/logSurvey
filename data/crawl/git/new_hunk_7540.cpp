			return error("the necessary postimage %s for "
				     "'%s' cannot be read",
				     patch->new_sha1_prefix, name);
		clear_image(img);
		img->buf = result;
		img->len = size;
	} else {
		/*
		 * We have verified buf matches the preimage;
		 * apply the patch data to it, which is stored
		 * in the patch->fragments->{patch,size}.
		 */
		if (apply_binary_fragment(img, patch))
			return error("binary patch does not apply to '%s'",
				     name);

		/* verify that the result matches */
		hash_sha1_file(img->buf, img->len, blob_type, sha1);
		if (strcmp(sha1_to_hex(sha1), patch->new_sha1_prefix))
			return error("binary patch to '%s' creates incorrect result (expecting %s, got %s)",
				name, patch->new_sha1_prefix, sha1_to_hex(sha1));
