		PyErr_Format(PyExc_TypeError, "values must be list or tuple");
		return NULL;
	}
	size = PySequence_Length(values);
	if (size != ds->ds_num) {
		PyErr_Format(PyExc_RuntimeError, "type %s needs %d values, got %zd", type, ds->ds_num, size);
		return NULL;
	}
	value = malloc(size * sizeof(*value));