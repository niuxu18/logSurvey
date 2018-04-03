 		PyErr_Format(PyExc_TypeError, "values must be list or tuple");
 		return NULL;
 	}
+	if (meta != NULL && meta != Py_None && !PyDict_Check(meta)) {
+		PyErr_Format(PyExc_TypeError, "meta must be a dict");
+		return NULL;
+	}
 	size = (int) PySequence_Length(values);
 	if (size != ds->ds_num) {
 		PyErr_Format(PyExc_RuntimeError, "type %s needs %d values, got %i", type, ds->ds_num, size);
