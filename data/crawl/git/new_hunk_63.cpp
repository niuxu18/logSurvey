	}
	return error("Unable to determine requirements "
		     "of type %s for %s",
		     type_name(obj->type), oid_to_hex(&obj->oid));
}

static int process(struct walker *walker, struct object *obj)