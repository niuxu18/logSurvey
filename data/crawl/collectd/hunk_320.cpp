 
 static int Values_init(PyObject *s, PyObject *args, PyObject *kwds) {
 	Values *self = (Values *) s;
-	int interval = 0, ret;
+	int interval = 0;
 	double time = 0;
 	PyObject *values = NULL, *tmp;
 	const char *type = "", *plugin_instance = "", *type_instance = "", *plugin = "", *host = "";
 	static char *kwlist[] = {"type", "values", "plugin_instance", "type_instance",
 			"plugin", "host", "time", "interval", NULL};
 	
-	if (!PyArg_ParseTupleAndKeywords(args, kwds, "|sOssssdi", kwlist,
-			&type, &values, &plugin_instance, &type_instance,
-			&plugin, &host, &time, &interval))
+	if (!PyArg_ParseTupleAndKeywords(args, kwds, "|etOetetetetdi", kwlist,
+			NULL, &type, &values, NULL, &plugin_instance, NULL, &type_instance,
+			NULL, &plugin, NULL, &host, &time, &interval))
 		return -1;
 	
-	tmp = Py_BuildValue("sssssd", type, plugin_instance, type_instance, plugin, host, time);
-	if (tmp == NULL)
-		return -1;
-	ret = PluginDataType.tp_init(s, tmp, NULL);
-	Py_DECREF(tmp);
-	if (ret != 0)
+	if (type[0] != 0 && plugin_get_ds(type) == NULL) {
+		PyErr_Format(PyExc_TypeError, "Dataset %s not found", type);
 		return -1;
-	
+	}
+
+	sstrncpy(self->data.host, host, sizeof(self->data.host));
+	sstrncpy(self->data.plugin, plugin, sizeof(self->data.plugin));
+	sstrncpy(self->data.plugin_instance, plugin_instance, sizeof(self->data.plugin_instance));
+	sstrncpy(self->data.type, type, sizeof(self->data.type));
+	sstrncpy(self->data.type_instance, type_instance, sizeof(self->data.type_instance));
+	self->data.time = time;
+
 	if (values == NULL) {
 		values = PyList_New(0);
 		PyErr_Clear();
