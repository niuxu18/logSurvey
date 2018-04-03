	Config *self = (Config *) s;
	static char *kwlist[] = {"key", "parent", "values", "children", NULL};
	
	if (!PyArg_ParseTupleAndKeywords(args, kwds, "O|OOO", kwlist,
			&key, &parent, &values, &children))
		return -1;
	
	if (!IS_BYTES_OR_UNICODE(key)) {
		PyErr_SetString(PyExc_TypeError, "argument 1 must be str");
		Py_XDECREF(parent);
		Py_XDECREF(values);
		Py_XDECREF(children);
		return -1;
	}
	if (values == NULL) {
		values = PyTuple_New(0);
		PyErr_Clear();
