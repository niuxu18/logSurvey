	 */
	buf = get_obj(tagged, &obj, &size, &eaten);
	if (!buf)
		die(_("missing object %s for %s"),
		    sha1_to_hex(tagged), ref->refname);
	if (!obj)
		die(_("parse_object_buffer failed on %s for %s"),
		    sha1_to_hex(tagged), ref->refname);
	grab_values(ref->value, 1, obj, buf, size);
	if (!eaten)
