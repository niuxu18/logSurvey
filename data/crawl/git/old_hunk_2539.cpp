	}
	return error("Unable to determine requirements "
		     "of type %s for %s",
		     typename(obj->type), sha1_to_hex(obj->sha1));
}

static int process(struct walker *walker, struct object *obj)
