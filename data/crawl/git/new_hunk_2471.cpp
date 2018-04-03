		int type = sha1_object_info(get_object_hash(*obj), &size);
		if (type <= 0)
			die(_("did not receive expected object %s"),
			      oid_to_hex(&obj->oid));
		if (type != obj->type)
			die(_("object %s: expected type %s, found %s"),
			    oid_to_hex(&obj->oid),
			    typename(obj->type), typename(type));
		obj->flags |= FLAG_CHECKED;
		return 1;