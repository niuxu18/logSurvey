	struct transfer_request *check_request = request_queue_head;
	struct http_pack_request *preq;

	target = find_sha1_pack(request->obj->oid.hash, repo->packs);
	if (!target) {
		fprintf(stderr, "Unable to fetch %s, will not be able to update server info refs\n", oid_to_hex(&request->obj->oid));
		repo->can_update_info_refs = 0;
