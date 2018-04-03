	if (!result->data)
		bad_object(delta_obj->idx.offset, _("failed to apply delta"));
	hash_sha1_file(result->data, result->size,
		       typename(delta_obj->real_type), delta_obj->idx.sha1);
	sha1_object(result->data, NULL, result->size, delta_obj->real_type,
		    delta_obj->idx.sha1);
	counter_lock();
	nr_resolved_deltas++;
	counter_unlock();
