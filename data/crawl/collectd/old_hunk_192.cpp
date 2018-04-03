		PyErr_Format(PyExc_TypeError, "meta must be a dict");
		return NULL;
	}
	size = (int) PySequence_Length(values);
	if (size != ds->ds_num) {
		PyErr_Format(PyExc_RuntimeError, "type %s needs %d values, got %i", value_list.type, ds->ds_num, size);
		return NULL;
	}
	value = malloc(size * sizeof(*value));
	for (i = 0; i < size; ++i) {
		PyObject *item, *num;
		item = PySequence_Fast_GET_ITEM(values, i); /* Borrowed reference. */
		if (ds->ds->type == DS_TYPE_COUNTER) {
			num = PyNumber_Long(item); /* New reference. */
			if (num != NULL) {
