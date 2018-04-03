	if (!buffer)
		return quiet_on_missing ? -1 :
			error("Could not read %s",
			     sha1_to_hex(item->object.sha1));
	if (type != OBJ_TREE) {
		free(buffer);
		return error("Object %s not a tree",
			     sha1_to_hex(item->object.sha1));
	}
	return parse_tree_buffer(item, buffer, size);
}
